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

// Function: entry_0033b2c0
// Address: 0x33b2c0 - 0x33b2f0
void entry_0033b2c0_0x33b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b2c0_0x33b2c0");
#endif

    ctx->pc = 0x33b2c0u;

    // 0x33b2c0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b2c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b2c8: 0x8c239a38  lw          $v1, -0x65C8($at)
    ctx->pc = 0x33b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A38u));
    // 0x33b2cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b2d0: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b2d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b2d8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b2dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b2e0: 0x8c239a38  lw          $v1, -0x65C8($at)
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A38u));
    // 0x33b2e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b2e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b2ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b2f0u;
}
