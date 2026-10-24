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

// Function: Rck_area_ck
// Address: 0x195c10 - 0x195d28
void Rck_area_ck_0x195c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rck_area_ck_0x195c10");
#endif

    switch (ctx->pc) {
        case 0x195c54u: goto label_195c54;
        case 0x195c78u: goto label_195c78;
        default: break;
    }

    ctx->pc = 0x195c10u;

    // 0x195c10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x195c14: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x195c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x195c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x195c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195c28: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x195c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x195c2c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x195c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x195c30: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x195c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x195c34: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x195c34u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195c38: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x195c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195c3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195c40: 0x8c22ac60  lw          $v0, -0x53A0($at)
    ctx->pc = 0x195c40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195c44: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x195c48: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x195c48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195c4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x195C4Cu;
    {
        const bool branch_taken_0x195c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c4c) {
            ctx->pc = 0x195C98u;
            goto label_195c98;
        }
    }
    ctx->pc = 0x195C54u;
label_195c54:
    // 0x195c54: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x195c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x195c58: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195C58u;
    {
        const bool branch_taken_0x195c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195c58) {
            ctx->pc = 0x195C90u;
            goto label_195c90;
        }
    }
    ctx->pc = 0x195C60u;
    // 0x195c60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x195c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195c64: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x195c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x195c68: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x195c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x195c6c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x195c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195c70: 0xc06574c  jal         func_195D30
    ctx->pc = 0x195C70u;
    SET_GPR_U32(ctx, 31, 0x195C78u);
    ctx->pc = 0x195D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195D30u, 0x195C70u, 0x195C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C78u;
label_195c78:
    // 0x195c78: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x195c78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x195c7c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x195C7Cu;
    {
        const bool branch_taken_0x195c7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c7c) {
            ctx->pc = 0x195C90u;
            goto label_195c90;
        }
    }
    ctx->pc = 0x195C84u;
    // 0x195c84: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x195c84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x195c88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195C88u;
    {
        const bool branch_taken_0x195c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c88) {
            ctx->pc = 0x195CB0u;
            goto label_195cb0;
        }
    }
    ctx->pc = 0x195C90u;
label_195c90:
    // 0x195c90: 0x8e10003c  lw          $s0, 0x3C($s0)
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x195c94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_195c98:
    // 0x195c98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195c9c: 0x8c22ac60  lw          $v0, -0x53A0($at)
    ctx->pc = 0x195c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195ca0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x195ca4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x195ca8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x195CA8u;
    {
        const bool branch_taken_0x195ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ca8) {
            ctx->pc = 0x195C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195c54;
        }
    }
    ctx->pc = 0x195CB0u;
label_195cb0:
    // 0x195cb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x195cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x195cb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x195CB4u;
    {
        const bool branch_taken_0x195cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195cb4) {
            ctx->pc = 0x195CE4u;
            goto label_195ce4;
        }
    }
    ctx->pc = 0x195CBCu;
    // 0x195cbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195cc0: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195CC0u;
    {
        const bool branch_taken_0x195cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x195cc0) {
            ctx->pc = 0x195CD4u;
            goto label_195cd4;
        }
    }
    ctx->pc = 0x195CC8u;
    // 0x195cc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x195ccc: 0x8c32ee30  lw          $s2, -0x11D0($at)
    ctx->pc = 0x195cccu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3EEE30u));
    // 0x195cd0: 0x0  nop
    ctx->pc = 0x195cd0u;
    // NOP
label_195cd4:
    // 0x195cd4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x195cd8: 0xac32ee30  sw          $s2, -0x11D0($at)
    ctx->pc = 0x195cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3EEE30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEE30u, _value); } while (0);
    // 0x195cdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195D04u;
            goto label_195d04;
        }
    }
    ctx->pc = 0x195CE4u;
label_195ce4:
    // 0x195ce4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195ce8: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195CE8u;
    {
        const bool branch_taken_0x195ce8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x195ce8) {
            ctx->pc = 0x195CFCu;
            goto label_195cfc;
        }
    }
    ctx->pc = 0x195CF0u;
    // 0x195cf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195cf4: 0x8c521270  lw          $s2, 0x1270($v0)
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
    // 0x195cf8: 0x0  nop
    ctx->pc = 0x195cf8u;
    // NOP
label_195cfc:
    // 0x195cfc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x195d00: 0xac521270  sw          $s2, 0x1270($v0)
    ctx->pc = 0x195d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4720), GPR_U32(ctx, 18));
label_195d04:
    // 0x195d04: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x195d04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x195d08: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x195d08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195d0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x195d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d1c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x195d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x195d20: 0x3e00008  jr          $ra
    ctx->pc = 0x195D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D28u;
}
