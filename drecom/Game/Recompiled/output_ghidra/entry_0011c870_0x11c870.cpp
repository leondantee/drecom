#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011c870
// Address: 0x11c870 - 0x11c874
void entry_0011c870_0x11c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c870_0x11c870");
#endif

    ctx->pc = 0x11c870u;

    // 0x11c870: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x11c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    ctx->pc = 0x11c874u;
}
