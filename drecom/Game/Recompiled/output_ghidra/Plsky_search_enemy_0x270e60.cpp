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

// Function: Plsky_search_enemy
// Address: 0x270e60 - 0x270f20
void Plsky_search_enemy_0x270e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plsky_search_enemy_0x270e60");
#endif

    switch (ctx->pc) {
        case 0x270e98u: goto label_270e98;
        default: break;
    }

    ctx->pc = 0x270e60u;

    // 0x270e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270e64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x270e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x270e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270e70: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x270e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x270e74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x270e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x270e78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x270e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270e7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x270e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x270e80: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x270e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x270e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270e88: 0x24520008  addiu       $s2, $v0, 0x8
    ctx->pc = 0x270e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x270e8c: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x270e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x270e90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x270E90u;
    {
        const bool branch_taken_0x270e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e90) {
            ctx->pc = 0x270EF0u;
            goto label_270ef0;
        }
    }
    ctx->pc = 0x270E98u;
label_270e98:
    // 0x270e98: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x270e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x270e9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x270e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x270ea0: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x270ea4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x270ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x270ea8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x270ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x270eac: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x270EACu;
    {
        const bool branch_taken_0x270eac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270eac) {
            ctx->pc = 0x270EECu;
            goto label_270eec;
        }
    }
    ctx->pc = 0x270EB4u;
    // 0x270eb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270eb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x270eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x270ebc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x270EBCu;
    {
        const bool branch_taken_0x270ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ebc) {
            ctx->pc = 0x270EECu;
            goto label_270eec;
        }
    }
    ctx->pc = 0x270EC4u;
    // 0x270ec4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x270ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270ec8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x270ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x270ecc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270ECCu;
    {
        const bool branch_taken_0x270ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ecc) {
            ctx->pc = 0x270EECu;
            goto label_270eec;
        }
    }
    ctx->pc = 0x270ED4u;
    // 0x270ed4: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x270ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x270ed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270ED8u;
    {
        const bool branch_taken_0x270ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ed8) {
            ctx->pc = 0x270EECu;
            goto label_270eec;
        }
    }
    ctx->pc = 0x270EE0u;
    // 0x270ee0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x270ee0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x270ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270EE4u;
    {
        const bool branch_taken_0x270ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ee4) {
            ctx->pc = 0x270F08u;
            goto label_270f08;
        }
    }
    ctx->pc = 0x270EECu;
label_270eec:
    // 0x270eec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x270eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_270ef0:
    // 0x270ef0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x270ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x270ef4: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x270ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x270ef8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x270ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270efc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x270EFCu;
    {
        const bool branch_taken_0x270efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270efc) {
            ctx->pc = 0x270E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270e98;
        }
    }
    ctx->pc = 0x270F04u;
    // 0x270f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270f08:
    // 0x270f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270f14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x270f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x270f18: 0x3e00008  jr          $ra
    ctx->pc = 0x270F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270F20u;
}
