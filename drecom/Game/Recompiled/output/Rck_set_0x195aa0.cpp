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

// Function: Rck_set
// Address: 0x195aa0 - 0x195b90
void Rck_set_0x195aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_set_0x195aa0");
#endif

    switch (ctx->pc) {
        case 0x195ac8u: goto label_195ac8;
        case 0x195b2cu: goto label_195b2c;
        default: break;
    }

    ctx->pc = 0x195aa0u;

    // 0x195aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195aa4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x195aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x195aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195ab0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x195ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x195ab4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x195ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195ab8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195AB8u;
    {
        const bool branch_taken_0x195ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ab8) {
            ctx->pc = 0x195AD0u;
            goto label_195ad0;
        }
    }
    ctx->pc = 0x195AC0u;
    // 0x195ac0: 0xc065698  jal         func_195A60
    ctx->pc = 0x195AC0u;
    SET_GPR_U32(ctx, 31, 0x195AC8u);
    ctx->pc = 0x195A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195A60u, 0x195AC0u, 0x195AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AC8u;
label_195ac8:
    // 0x195ac8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x195AC8u;
    {
        const bool branch_taken_0x195ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ac8) {
            ctx->pc = 0x195B78u;
            goto label_195b78;
        }
    }
    ctx->pc = 0x195AD0u;
label_195ad0:
    // 0x195ad0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195ad8: 0xac23ac60  sw          $v1, -0x53A0($at)
    ctx->pc = 0x195ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC60u, _value); } while (0);
    // 0x195adc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195ae0: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195ae4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x195ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x195ae8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195aec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195af0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195af4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195afc: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b00: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x195b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x195b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195b18: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195b18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b1c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x195b20: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x195b20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195b24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x195B24u;
    {
        const bool branch_taken_0x195b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b24) {
            ctx->pc = 0x195B60u;
            goto label_195b60;
        }
    }
    ctx->pc = 0x195B2Cu;
label_195b2c:
    // 0x195b2c: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x195b30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b40: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x195b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b54: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x195b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x195b5c: 0x0  nop
    ctx->pc = 0x195b5cu;
    // NOP
label_195b60:
    // 0x195b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195b64: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x195b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x195b6c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x195b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x195b70: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x195B70u;
    {
        const bool branch_taken_0x195b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b70) {
            ctx->pc = 0x195B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195b2c;
        }
    }
    ctx->pc = 0x195B78u;
label_195b78:
    // 0x195b78: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x195b78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195b88: 0x3e00008  jr          $ra
    ctx->pc = 0x195B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B90u;
}
