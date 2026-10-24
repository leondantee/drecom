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

// Function: entry_002350c8
// Address: 0x2350c8 - 0x235110
void entry_002350c8_0x2350c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002350c8_0x2350c8");
#endif

    ctx->pc = 0x2350c8u;

label_2350c8:
    // 0x2350c8: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2350cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2350d0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2350d4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2350d8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2350dc: 0x2483d9c0  addiu       $v1, $a0, -0x2640
    ctx->pc = 0x2350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957504));
    // 0x2350e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2350e4: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x2350e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2350e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2350e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2350ec: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2350ECu;
    {
        const bool branch_taken_0x2350ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2350ec) {
            ctx->pc = 0x2350C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2350c8;
        }
    }
    ctx->pc = 0x2350F4u;
    // 0x2350f4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2350f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2350f8: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2350fc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x2350fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x235100: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x235100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x235104: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x235104u;
    {
        const bool branch_taken_0x235104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235104) {
            ctx->pc = 0x235140u;
            return;
        }
    }
    ctx->pc = 0x23510Cu;
    // 0x23510c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x23510cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x235110u;
}
