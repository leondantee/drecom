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

// Function: makebuff_ext
// Address: 0x33aa50 - 0x33ab44
void makebuff_ext_0x33aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebuff_ext_0x33aa50");
#endif

    switch (ctx->pc) {
        case 0x33aa9cu: goto label_33aa9c;
        case 0x33aadcu: goto label_33aadc;
        default: break;
    }

    ctx->pc = 0x33aa50u;

    // 0x33aa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33aa54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33aa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33aa5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33aa60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x33aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x33aa64: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x33aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x33aa68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x33aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33aa6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aa70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x33aa70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33aa74: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AA74u;
    {
        const bool branch_taken_0x33aa74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aa74) {
            ctx->pc = 0x33AA8Cu;
            goto label_33aa8c;
        }
    }
    ctx->pc = 0x33AA7Cu;
    // 0x33aa7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33aa80: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x33aa80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x33aa84: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AA84u;
    {
        const bool branch_taken_0x33aa84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aa84) {
            ctx->pc = 0x33AAA8u;
            goto label_33aaa8;
        }
    }
    ctx->pc = 0x33AA8Cu;
label_33aa8c:
    // 0x33aa8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33aa90: 0x244428b0  addiu       $a0, $v0, 0x28B0
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10416));
    // 0x33aa94: 0xc046760  jal         func_119D80
    ctx->pc = 0x33AA94u;
    SET_GPR_U32(ctx, 31, 0x33AA9Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33AA9Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33AA9Cu) { return; }
    ctx->pc = 0x33AA9Cu;
label_33aa9c:
    // 0x33aa9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aaa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x33AAA0u;
    {
        const bool branch_taken_0x33aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aaa0) {
            ctx->pc = 0x33AB30u;
            goto label_33ab30;
        }
    }
    ctx->pc = 0x33AAA8u;
label_33aaa8:
    // 0x33aaa8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aaac: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x33aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33aab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33aab8: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33aab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33aabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AABCu;
    {
        const bool branch_taken_0x33aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aabc) {
            ctx->pc = 0x33AAD0u;
            goto label_33aad0;
        }
    }
    ctx->pc = 0x33AAC4u;
    // 0x33aac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aac8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33AAC8u;
    {
        const bool branch_taken_0x33aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aac8) {
            ctx->pc = 0x33AB30u;
            goto label_33ab30;
        }
    }
    ctx->pc = 0x33AAD0u;
label_33aad0:
    // 0x33aad0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33aad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33aad4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33AAD4u;
    {
        const bool branch_taken_0x33aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aad4) {
            ctx->pc = 0x33AB20u;
            goto label_33ab20;
        }
    }
    ctx->pc = 0x33AADCu;
label_33aadc:
    // 0x33aadc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aae0: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x33aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x33aae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33aae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33aae8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33aae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33aaec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aaf0: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33aaf4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33aaf8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33aafc: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33aafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33ab00: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33ab04: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33ab08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ab0c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ab10: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33ab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33ab14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ab18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33ab1c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x33ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_33ab20:
    // 0x33ab20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x33ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ab24: 0x1c40ffed  bgtz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33AB24u;
    {
        const bool branch_taken_0x33ab24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33ab24) {
            ctx->pc = 0x33AADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33aadc;
        }
    }
    ctx->pc = 0x33AB2Cu;
    // 0x33ab2c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33ab2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33ab30:
    // 0x33ab30: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33ab30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ab34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ab34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ab38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB44u;
}
