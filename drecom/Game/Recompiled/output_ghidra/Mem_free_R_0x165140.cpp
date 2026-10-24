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

// Function: Mem_free_R
// Address: 0x165140 - 0x1651d0
void Mem_free_R_0x165140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mem_free_R_0x165140");
#endif

    switch (ctx->pc) {
        case 0x165168u: goto label_165168;
        case 0x1651b0u: goto label_1651b0;
        default: break;
    }

    ctx->pc = 0x165140u;

    // 0x165140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x165140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x165144: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x165144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x165148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16514c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165158: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x165158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x16515c: 0x3c1101f0  lui         $s1, 0x1F0
    ctx->pc = 0x16515cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)496 << 16));
    // 0x165160: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x165164: 0x24505470  addiu       $s0, $v0, 0x5470
    ctx->pc = 0x165164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
label_165168:
    // 0x165168: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x165168u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16516c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165174: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165178: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16517c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165180: 0x1622fff9  bne         $s1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x165180) {
            ctx->pc = 0x165168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165168;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x8e13000c  lw          $s3, 0xC($s0)
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16518c: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x16518cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x165190: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x165190) {
            ctx->pc = 0x1651A8u;
            goto label_1651a8;
        }
    }
    ctx->pc = 0x165198u;
    // 0x165198: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x165198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16519c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1651a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1651a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1651a4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1651a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1651a8:
    // 0x1651a8: 0xc059474  jal         func_1651D0
    ctx->pc = 0x1651A8u;
    SET_GPR_U32(ctx, 31, 0x1651B0u);
    ctx->pc = 0x1651D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651D0u, 0x1651A8u, 0x1651B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651B0u;
label_1651b0:
    // 0x1651b0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1651b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1651b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1651b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1651b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1651b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1651bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1651bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1651c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1651c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1651c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1651c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1651c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1651C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1651C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1651D0u;
}
