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

// Function: entry_00113d4c
// Address: 0x113d4c - 0x113d54
void entry_00113d4c_0x113d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d4c_0x113d4c");
#endif

    ctx->pc = 0x113d4cu;

    // 0x113d4c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x113d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113d50: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x113d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    ctx->pc = 0x113d54u;
}
