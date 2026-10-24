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

// Function: entry_00322138
// Address: 0x322138 - 0x322150
void entry_00322138_0x322138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322138_0x322138");
#endif

    ctx->pc = 0x322138u;

    // 0x322138: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x32213c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x32213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322140: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x322140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x322144: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x322144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x322148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32214c: 0x0  nop
    ctx->pc = 0x32214cu;
    // NOP
    ctx->pc = 0x322150u;
}
