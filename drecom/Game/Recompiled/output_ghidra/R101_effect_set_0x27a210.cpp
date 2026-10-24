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

// Function: R101_effect_set
// Address: 0x27a210 - 0x27a340
void R101_effect_set_0x27a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R101_effect_set_0x27a210");
#endif

    switch (ctx->pc) {
        case 0x27a228u: goto label_27a228;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a258u: goto label_27a258;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a308u: goto label_27a308;
        case 0x27a314u: goto label_27a314;
        default: break;
    }

    ctx->pc = 0x27a210u;

    // 0x27a210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27a214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27a218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a21c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27a21cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a220: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27A220u;
    {
        const bool branch_taken_0x27a220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a220) {
            ctx->pc = 0x27A320u;
            goto label_27a320;
        }
    }
    ctx->pc = 0x27A228u;
label_27a228:
    // 0x27a228: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27a228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27a22c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a230: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x27a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x27a234: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27a234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a238: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x27a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27a23c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27a23cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a240: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27a240u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a244: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27A244u;
    SET_GPR_U32(ctx, 31, 0x27A24Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27A244u, 0x27A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A24Cu;
label_27a24c:
    // 0x27a24c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27a24cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27a250: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27A250u;
    SET_GPR_U32(ctx, 31, 0x27A258u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27A250u, 0x27A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A258u;
label_27a258:
    // 0x27a258: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a25c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a260: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a270: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27a270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27a274: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a278: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a27c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a288: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27a28c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27a290: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a298: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27a298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a2a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27A2A4u;
    {
        const bool branch_taken_0x27a2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a2a4) {
            ctx->pc = 0x27A2E4u;
            goto label_27a2e4;
        }
    }
    ctx->pc = 0x27A2ACu;
    // 0x27a2ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27a2b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a2b4: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x27a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x27a2b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a2bc: 0x24047307  addiu       $a0, $zero, 0x7307
    ctx->pc = 0x27a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29447));
    // 0x27a2c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27a2c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a2c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27a2c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a2c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27A2C8u;
    SET_GPR_U32(ctx, 31, 0x27A2D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27A2C8u, 0x27A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2D0u;
label_27a2d0:
    // 0x27a2d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27a2d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27a2d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27A2D4u;
    SET_GPR_U32(ctx, 31, 0x27A2DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27A2D4u, 0x27A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2DCu;
label_27a2dc:
    // 0x27a2dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27A2DCu;
    {
        const bool branch_taken_0x27a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2dc) {
            ctx->pc = 0x27A318u;
            goto label_27a318;
        }
    }
    ctx->pc = 0x27A2E4u;
label_27a2e4:
    // 0x27a2e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27a2e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a2ec: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x27a2f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a2f4: 0x24047407  addiu       $a0, $zero, 0x7407
    ctx->pc = 0x27a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29703));
    // 0x27a2f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27a2f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a2fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27a2fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a300: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27A300u;
    SET_GPR_U32(ctx, 31, 0x27A308u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27A300u, 0x27A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A308u;
label_27a308:
    // 0x27a308: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27a308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27a30c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27A30Cu;
    SET_GPR_U32(ctx, 31, 0x27A314u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27A30Cu, 0x27A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A314u;
label_27a314:
    // 0x27a314: 0x0  nop
    ctx->pc = 0x27a314u;
    // NOP
label_27a318:
    // 0x27a318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27a318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27a31c: 0x0  nop
    ctx->pc = 0x27a31cu;
    // NOP
label_27a320:
    // 0x27a320: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27a324: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x27A324u;
    {
        const bool branch_taken_0x27a324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a324) {
            ctx->pc = 0x27A228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a228;
        }
    }
    ctx->pc = 0x27A32Cu;
    // 0x27a32c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27a32cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a334: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27a334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a338: 0x3e00008  jr          $ra
    ctx->pc = 0x27A338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A340u;
}
