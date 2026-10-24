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

// Function: Movie_task_exec
// Address: 0x141ba0 - 0x141ce0
void Movie_task_exec_0x141ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_task_exec_0x141ba0");
#endif

    switch (ctx->pc) {
        case 0x141bdcu: goto label_141bdc;
        case 0x141c2cu: goto label_141c2c;
        case 0x141c40u: goto label_141c40;
        case 0x141c78u: goto label_141c78;
        default: break;
    }

    ctx->pc = 0x141ba0u;

    // 0x141ba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141ba4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x141ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x141ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x141bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141bb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141bb8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x141bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x141bbc: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x141bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x141bc0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x141bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x141bc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x141bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x141bc8: 0x2452c100  addiu       $s2, $v0, -0x3F00
    ctx->pc = 0x141bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x141bcc: 0x26510074  addiu       $s1, $s2, 0x74
    ctx->pc = 0x141bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x141bd0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x141bd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141bd4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x141BD4u;
    {
        const bool branch_taken_0x141bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bd4) {
            ctx->pc = 0x141CB0u;
            goto label_141cb0;
        }
    }
    ctx->pc = 0x141BDCu;
label_141bdc:
    // 0x141bdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x141bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x141be0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x141BE0u;
    {
        const bool branch_taken_0x141be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141be0) {
            ctx->pc = 0x141CA8u;
            goto label_141ca8;
        }
    }
    ctx->pc = 0x141BE8u;
    // 0x141be8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141bec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141bf0: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x141bf4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x141bf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141bfc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141c04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x141c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x141c0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x141c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141c10: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x141c10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141c14: 0x24071400  addiu       $a3, $zero, 0x1400
    ctx->pc = 0x141c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x141c18: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x141c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x141c1c: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x141c20: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x141c20u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141c24: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x141C24u;
    SET_GPR_U32(ctx, 31, 0x141C2Cu);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x141C24u, 0x141C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C2Cu;
label_141c2c:
    // 0x141c2c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x141c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x141c34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x141c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x141c38: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x141C38u;
    SET_GPR_U32(ctx, 31, 0x141C40u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x141C38u, 0x141C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C40u;
label_141c40:
    // 0x141c40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141c48: 0x226b8  dsll        $a0, $v0, 26
    ctx->pc = 0x141c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 26);
    // 0x141c4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x141c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x141c50: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x141c54: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x141c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x141c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x141c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x141c60: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x141c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x141c64: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x141c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x141c68: 0x449825  or          $s3, $v0, $a0
    ctx->pc = 0x141c68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x141c6c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x141c70: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x141C70u;
    SET_GPR_U32(ctx, 31, 0x141C78u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x141C70u, 0x141C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C78u;
label_141c78:
    // 0x141c78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141c80: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x141c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x141c84: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x141c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x141c88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141c8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x141c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141c94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x141c98: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x141c98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x141c9c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x141c9cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141ca0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141CA0u;
    {
        const bool branch_taken_0x141ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ca0) {
            ctx->pc = 0x141CC0u;
            goto label_141cc0;
        }
    }
    ctx->pc = 0x141CA8u;
label_141ca8:
    // 0x141ca8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x141ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x141cac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_141cb0:
    // 0x141cb0: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x141cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x141cb4: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x141CB4u;
    {
        const bool branch_taken_0x141cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141cb4) {
            ctx->pc = 0x141BDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141bdc;
        }
    }
    ctx->pc = 0x141CBCu;
    // 0x141cbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141cc0:
    // 0x141cc0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x141cc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x141cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141cd4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x141cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x141CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CE0u;
}
