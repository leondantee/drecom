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

// Function: entry_0033b110
// Address: 0x33b110 - 0x33b140
void entry_0033b110_0x33b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b110_0x33b110");
#endif

    ctx->pc = 0x33b110u;

    // 0x33b110: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b114: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b118: 0x8c239a20  lw          $v1, -0x65E0($at)
    ctx->pc = 0x33b118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A20u));
    // 0x33b11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b120: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b128: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b12c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b130: 0x8c239a20  lw          $v1, -0x65E0($at)
    ctx->pc = 0x33b130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A20u));
    // 0x33b134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b138: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b13c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b140u;
}
