modded class DayZGame
{
	private Widget m_ObscuraOverlayRoot;
	private ImageWidget m_ObscuraLayer;

	void DayZGame()
	{
		GetCallQueue(CALL_CATEGORY_GUI).CallLater(MaintainObscuraOverlay, 1000, true);
	}

	void ~DayZGame()
	{
		GetCallQueue(CALL_CATEGORY_GUI).Remove(MaintainObscuraOverlay);
	}

	protected void MaintainObscuraOverlay()
	{
		if (!m_ObscuraOverlayRoot)
		{
			m_ObscuraOverlayRoot = GetWorkspace().CreateWidgets("obscura/obscura/gui/layouts/obscura_overlay.layout");
			if (!m_ObscuraOverlayRoot)
				return;

			m_ObscuraLayer = ImageWidget.Cast(m_ObscuraOverlayRoot.FindAnyWidget("ObscuraLayer"));
			if (!m_ObscuraLayer)
				return;
		}

		m_ObscuraLayer.LoadImageFile(0, "set:obscura_set image:glyph_0");
		m_ObscuraOverlayRoot.Show(true);
	}
}
