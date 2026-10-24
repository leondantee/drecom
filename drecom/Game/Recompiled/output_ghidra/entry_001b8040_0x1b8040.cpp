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

// Function: entry_001b8040
// Address: 0x1b8040 - 0x1b8050
void entry_001b8040_0x1b8040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8040_0x1b8040");
#endif

    ctx->pc = 0x1b8040u;

    // 0x1b8040: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8044: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1b8044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b8048: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b804c: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1b804cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1b8050u;
}
