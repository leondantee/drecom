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

// Function: entry_0033b1a0
// Address: 0x33b1a0 - 0x33b1d0
void entry_0033b1a0_0x33b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b1a0_0x33b1a0");
#endif

    ctx->pc = 0x33b1a0u;

    // 0x33b1a0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1a8: 0x8c239a28  lw          $v1, -0x65D8($at)
    ctx->pc = 0x33b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A28u));
    // 0x33b1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1b0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b1b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b1b8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1c0: 0x8c239a28  lw          $v1, -0x65D8($at)
    ctx->pc = 0x33b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A28u));
    // 0x33b1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b1cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b1d0u;
}
