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

// Function: Eff_md_work_init
// Address: 0x1d9e80 - 0x1d9f94
void Eff_md_work_init_0x1d9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_work_init_0x1d9e80");
#endif

    switch (ctx->pc) {
        case 0x1d9ed4u: goto label_1d9ed4;
        case 0x1d9eecu: goto label_1d9eec;
        case 0x1d9f04u: goto label_1d9f04;
        case 0x1d9f74u: goto label_1d9f74;
        default: break;
    }

    ctx->pc = 0x1d9e80u;

    // 0x1d9e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9e84: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1d9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d9e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9e90: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1d9e94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1d9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1d9e98: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1d9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1d9e9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9ea0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9ea4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d9ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9eac: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x1d9eacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9eb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9eb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d9eb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ebc: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1d9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x1d9ec0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ec4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9ec8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9ecc: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x1D9ECCu;
    SET_GPR_U32(ctx, 31, 0x1D9ED4u);
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x1D9ECCu, 0x1D9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ED4u;
label_1d9ed4:
    // 0x1d9ed4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1d9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1d9ed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9edc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9ee0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d9ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9ee4: 0xc076af4  jal         func_1DABD0
    ctx->pc = 0x1D9EE4u;
    SET_GPR_U32(ctx, 31, 0x1D9EECu);
    ctx->pc = 0x1DABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DABD0u, 0x1D9EE4u, 0x1D9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EECu;
label_1d9eec:
    // 0x1d9eec: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1d9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1d9ef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ef4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1d9ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d9ef8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1d9ef8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9EFCu;
    {
        const bool branch_taken_0x1d9efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9efc) {
            ctx->pc = 0x1D9F18u;
            goto label_1d9f18;
        }
    }
    ctx->pc = 0x1D9F04u;
label_1d9f04:
    // 0x1d9f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9f08: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d9f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d9f0c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x1d9f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9f10: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1d9f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1d9f14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d9f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d9f18:
    // 0x1d9f18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9f1c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9f20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9f24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d9f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d9f28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9F28u;
    {
        const bool branch_taken_0x1d9f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f28) {
            ctx->pc = 0x1D9F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9f04;
        }
    }
    ctx->pc = 0x1D9F30u;
    // 0x1d9f30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9f34: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9f38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9f3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F40u;
    {
        const bool branch_taken_0x1d9f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f40) {
            ctx->pc = 0x1D9F60u;
            goto label_1d9f60;
        }
    }
    ctx->pc = 0x1D9F48u;
    // 0x1d9f48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9f4c: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1d9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9f50: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d9f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F58u;
    {
        const bool branch_taken_0x1d9f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f58) {
            ctx->pc = 0x1D9F78u;
            goto label_1d9f78;
        }
    }
    ctx->pc = 0x1D9F60u;
label_1d9f60:
    // 0x1d9f60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f64: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9f68: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9f6c: 0xc076d9c  jal         func_1DB670
    ctx->pc = 0x1D9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F74u);
    ctx->pc = 0x1DB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB670u, 0x1D9F6Cu, 0x1D9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F74u;
label_1d9f74:
    // 0x1d9f74: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1d9f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1d9f78:
    // 0x1d9f78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9f7c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9f88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1d9f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d9f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F94u;
}
