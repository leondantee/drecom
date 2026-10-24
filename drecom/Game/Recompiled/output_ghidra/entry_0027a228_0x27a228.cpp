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

// Function: entry_0027a228
// Address: 0x27a228 - 0x27a2e4
void entry_0027a228_0x27a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a228_0x27a228");
#endif

    switch (ctx->pc) {
        case 0x27a24cu: goto label_27a24c;
        case 0x27a258u: goto label_27a258;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2dcu: goto label_27a2dc;
        default: break;
    }

    ctx->pc = 0x27a228u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x27A2E4u;
}
