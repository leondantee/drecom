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

// Function: entry_0033b1e8
// Address: 0x33b1e8 - 0x33b218
void entry_0033b1e8_0x33b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b1e8_0x33b1e8");
#endif

    ctx->pc = 0x33b1e8u;

    // 0x33b1e8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b1ec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b1f0: 0x8c239a2c  lw          $v1, -0x65D4($at)
    ctx->pc = 0x33b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A2Cu));
    // 0x33b1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b1f8: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b1fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b200: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b204: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b208: 0x8c239a2c  lw          $v1, -0x65D4($at)
    ctx->pc = 0x33b208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A2Cu));
    // 0x33b20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b210: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b214: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b218u;
}
