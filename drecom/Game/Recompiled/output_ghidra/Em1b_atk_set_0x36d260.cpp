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

// Function: Em1b_atk_set
// Address: 0x36d260 - 0x36d2f4
void Em1b_atk_set_0x36d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_atk_set_0x36d260");
#endif

    switch (ctx->pc) {
        case 0x36d288u: goto label_36d288;
        default: break;
    }

    ctx->pc = 0x36d260u;

    // 0x36d260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36d264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36d268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36d26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36d270: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x36d270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x36d274: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x36d274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x36d278: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x36d278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36d27c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36d27cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d280: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36D280u;
    {
        const bool branch_taken_0x36d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d280) {
            ctx->pc = 0x36D2C8u;
            goto label_36d2c8;
        }
    }
    ctx->pc = 0x36D288u;
label_36d288:
    // 0x36d288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x36d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d28c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36d290: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36d294: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d298: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36d298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36d29c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d2a0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d2a4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x36d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x36d2a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D2A8u;
    {
        const bool branch_taken_0x36d2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d2a8) {
            ctx->pc = 0x36D2C4u;
            goto label_36d2c4;
        }
    }
    ctx->pc = 0x36D2B0u;
    // 0x36d2b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d2b4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x36d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x36d2b8: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x36d2b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d2bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36D2BCu;
    {
        const bool branch_taken_0x36d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d2bc) {
            ctx->pc = 0x36D2D8u;
            goto label_36d2d8;
        }
    }
    ctx->pc = 0x36D2C4u;
label_36d2c4:
    // 0x36d2c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36d2c8:
    // 0x36d2c8: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x36d2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36d2cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x36D2CCu;
    {
        const bool branch_taken_0x36d2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d2cc) {
            ctx->pc = 0x36D288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d288;
        }
    }
    ctx->pc = 0x36D2D4u;
    // 0x36d2d4: 0x0  nop
    ctx->pc = 0x36d2d4u;
    // NOP
label_36d2d8:
    // 0x36d2d8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x36d2d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36d2dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36d2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36d2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36d2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d2e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x36d2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36d2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36D2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D2F4u;
}
