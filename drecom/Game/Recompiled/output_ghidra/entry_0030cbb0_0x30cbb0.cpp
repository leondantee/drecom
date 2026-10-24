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

// Function: entry_0030cbb0
// Address: 0x30cbb0 - 0x30cc50
void entry_0030cbb0_0x30cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cbb0_0x30cbb0");
#endif

    switch (ctx->pc) {
        case 0x30cc00u: goto label_30cc00;
        case 0x30cc0cu: goto label_30cc0c;
        case 0x30cc44u: goto label_30cc44;
        default: break;
    }

    ctx->pc = 0x30cbb0u;

    // 0x30cbb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cbb4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30cbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30cbb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30cbbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x30cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x30cbc0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30CBC0u;
    {
        const bool branch_taken_0x30cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cbc0) {
            ctx->pc = 0x30CC50u;
            return;
        }
    }
    ctx->pc = 0x30CBC8u;
    // 0x30cbc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cbcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cbd0: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30cbd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30cbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30cbd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30cbdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30cbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cbe0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30cbe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cbe8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30cbe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cbec: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30cbf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cbf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cbf4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30cbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cbf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30CBF8u;
    SET_GPR_U32(ctx, 31, 0x30CC00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30CBF8u, 0x30CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC00u;
label_30cc00:
    // 0x30cc00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30cc00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30cc04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30CC04u;
    SET_GPR_U32(ctx, 31, 0x30CC0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30CC04u, 0x30CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC0Cu;
label_30cc0c:
    // 0x30cc0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cc10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cc14: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x30cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x30cc18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30cc1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30cc20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cc24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30cc28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cc2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30cc2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cc30: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30cc34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cc34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cc38: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x30cc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30cc3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30CC3Cu;
    SET_GPR_U32(ctx, 31, 0x30CC44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30CC3Cu, 0x30CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC44u;
label_30cc44:
    // 0x30cc44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30cc44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30cc48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30CC48u;
    SET_GPR_U32(ctx, 31, 0x30CC50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30CC48u, 0x30CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC50u;
}
