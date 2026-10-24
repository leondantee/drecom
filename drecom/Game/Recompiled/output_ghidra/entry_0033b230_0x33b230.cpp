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

// Function: entry_0033b230
// Address: 0x33b230 - 0x33b260
void entry_0033b230_0x33b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b230_0x33b230");
#endif

    ctx->pc = 0x33b230u;

    // 0x33b230: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b234: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b238: 0x8c239a30  lw          $v1, -0x65D0($at)
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A30u));
    // 0x33b23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b240: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b240u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b244: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b248: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b24c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b250: 0x8c239a30  lw          $v1, -0x65D0($at)
    ctx->pc = 0x33b250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A30u));
    // 0x33b254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b258: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b25c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b260u;
}
