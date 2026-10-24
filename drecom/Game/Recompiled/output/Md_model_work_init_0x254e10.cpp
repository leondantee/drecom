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

// Function: Md_model_work_init
// Address: 0x254e10 - 0x254f30
void Md_model_work_init_0x254e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_model_work_init_0x254e10");
#endif

    switch (ctx->pc) {
        case 0x254e64u: goto label_254e64;
        case 0x254e7cu: goto label_254e7c;
        case 0x254e94u: goto label_254e94;
        case 0x254f10u: goto label_254f10;
        default: break;
    }

    ctx->pc = 0x254e10u;

    // 0x254e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254e14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x254e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x254e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254e20: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x254e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x254e24: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x254e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x254e28: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x254e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x254e2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254e30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254e34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x254e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254e38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e3c: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x254e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x254e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x254e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x254e48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e4c: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x254e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x254e50: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x254e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e54: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x254e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254e58: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x254e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254e5c: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x254E5Cu;
    SET_GPR_U32(ctx, 31, 0x254E64u);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x254E5Cu, 0x254E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E64u;
label_254e64:
    // 0x254e64: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x254e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x254e68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x254e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e6c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x254e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254e70: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x254e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254e74: 0xc095408  jal         func_255020
    ctx->pc = 0x254E74u;
    SET_GPR_U32(ctx, 31, 0x254E7Cu);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x254E74u, 0x254E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E7Cu;
label_254e7c:
    // 0x254e7c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x254e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x254e80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254e84: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x254e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x254e88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x254e88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x254e8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254E8Cu;
    {
        const bool branch_taken_0x254e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e8c) {
            ctx->pc = 0x254EB0u;
            goto label_254eb0;
        }
    }
    ctx->pc = 0x254E94u;
label_254e94:
    // 0x254e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254e98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x254e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x254e9c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x254e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x254ea0: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x254ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x254ea4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x254ea8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x254ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x254eac: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x254eacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_254eb0:
    // 0x254eb0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x254eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x254eb4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x254eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254eb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x254ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254ec0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x254ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x254ec4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x254EC4u;
    {
        const bool branch_taken_0x254ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ec4) {
            ctx->pc = 0x254E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254e94;
        }
    }
    ctx->pc = 0x254ECCu;
    // 0x254ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x254eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x254ed0: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x254ed4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x254ed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254edc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254EDCu;
    {
        const bool branch_taken_0x254edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254edc) {
            ctx->pc = 0x254EFCu;
            goto label_254efc;
        }
    }
    ctx->pc = 0x254EE4u;
    // 0x254ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x254ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x254ee8: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x254ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x254eec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x254eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x254ef0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254ef4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254EF4u;
    {
        const bool branch_taken_0x254ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254ef4) {
            ctx->pc = 0x254F14u;
            goto label_254f14;
        }
    }
    ctx->pc = 0x254EFCu;
label_254efc:
    // 0x254efc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x254efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254f00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x254f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254f04: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f08: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x254F08u;
    SET_GPR_U32(ctx, 31, 0x254F10u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x254F08u, 0x254F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F10u;
label_254f10:
    // 0x254f10: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x254f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_254f14:
    // 0x254f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x254f18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254f24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x254f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x254f28: 0x3e00008  jr          $ra
    ctx->pc = 0x254F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F30u;
}
