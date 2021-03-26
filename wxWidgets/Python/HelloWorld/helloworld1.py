# First import wxPython
import wx

# Next create an application object
app = wx.App()

# TH en a fram
frm = wx.Frame(None, title="Hello World")

# Show it
frm.Show()

# Start the event loop
app.MainLoop()
