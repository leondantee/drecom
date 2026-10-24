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

// Function: entry_00266e10
// Address: 0x266e10 - 0x266e50
void entry_00266e10_0x266e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266e10_0x266e10");
#endif

    ctx->pc = 0x266e10u;

    // 0x266e10: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e14: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e1c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266e20: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266e24: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266e2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e38: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x266e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x266e3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266E3Cu;
    {
        const bool branch_taken_0x266e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e3c) {
            ctx->pc = 0x266E50u;
            return;
        }
    }
    ctx->pc = 0x266E44u;
    // 0x266e44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x266e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x266e48: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x266e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x266e4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x266e50u;
}
