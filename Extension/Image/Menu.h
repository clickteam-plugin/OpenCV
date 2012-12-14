// --------------------------------
// Condition menu
// --------------------------------

#ifdef CONDITION_MENU

	//ITEM(0, "Evaluated condition")
	//SEPARATOR
	//ITEM(1, "Triggered condition")

#endif

// --------------------------------
// Action menu
// --------------------------------

#ifdef ACTION_MENU

	// You have access to edPtr and you can throw in normal C++
	// code wherever you want in any of these menus. If you want to
	// show certain conditions based on a property (a la OINC socket)
	// use the property's value stored in edPtr:

	// if (edPtr->ShowAdvancedOptions)
	// {
	//		SUB_START("Bake pie")
	//			ITEM(0, "Apple pie")
	//			ITEM(1, "Mince pie")
	//		SUB_END
	// }
	// else
	// {
	//		ITEM(0, "Bake apple pie")
	// }

	// You could do some pretty cool stuff with this, like loading a
	// menu from an external source (ActiveX object?)

	// for (int i=0;i<edPtr->ActionCount;i++)
	//		ITEM(i,edPtr->Actions[i])

	// This will run every time the menu is opened in MMF2, so don't
	// make it too slow or it could get annoying

	SEPARATOR
	
	SUB_START("Drawing")
		ITEM(0,"Draw rectangle")
		ITEM(2,"Fill rectangle")
		ITEM(1,"Draw line")
		ITEM(3,"Draw text")
		ITEM(7,"Draw polygon")
	SUB_END
	
	SUB_START("Saving/Loading")
		ITEM(4,"Get image from camera (will resize the image)")
		ITEM(5,"Load image from file")
		ITEM(6,"Save image to file")
	SUB_END
#endif

// --------------------------------
// Expression menu
// --------------------------------

#ifdef EXPRESSION_MENU

	ITEM(0,"Get width")
	ITEM(1,"Get height")
	//SEPARATOR
	//ITEM(1,"Return a string")

#endif