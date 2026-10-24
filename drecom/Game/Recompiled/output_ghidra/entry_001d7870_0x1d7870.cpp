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

// Function: entry_001d7870
// Address: 0x1d7870 - 0x1d7878
void entry_001d7870_0x1d7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7870_0x1d7870");
#endif

    ctx->pc = 0x1d7870u;

    // 0x1d7870: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7874: 0x0  nop
    ctx->pc = 0x1d7874u;
    // NOP
    ctx->pc = 0x1d7878u;
}
