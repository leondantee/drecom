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

// Function: entry_0031ed14
// Address: 0x31ed14 - 0x31ed94
void entry_0031ed14_0x31ed14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ed14_0x31ed14");
#endif

    switch (ctx->pc) {
        case 0x31ed44u: goto label_31ed44;
        case 0x31ed50u: goto label_31ed50;
        case 0x31ed80u: goto label_31ed80;
        case 0x31ed8cu: goto label_31ed8c;
        default: break;
    }

    ctx->pc = 0x31ed14u;

    // 0x31ed14: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ed24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ed28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ed2c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ed2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ed30: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31ed34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31ed34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ed38: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ed3c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31ED3Cu;
    SET_GPR_U32(ctx, 31, 0x31ED44u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31ED3Cu, 0x31ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED44u;
label_31ed44:
    // 0x31ed44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ed44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ed48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31ED48u;
    SET_GPR_U32(ctx, 31, 0x31ED50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31ED48u, 0x31ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED50u;
label_31ed50:
    // 0x31ed50: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed58: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31ed5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ed60: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ed64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ed68: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ed68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ed6c: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31ed70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31ed70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ed74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ed78: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31ED78u;
    SET_GPR_U32(ctx, 31, 0x31ED80u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31ED78u, 0x31ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED80u;
label_31ed80:
    // 0x31ed80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ed80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ed84: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31ED84u;
    SET_GPR_U32(ctx, 31, 0x31ED8Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31ED84u, 0x31ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED8Cu;
label_31ed8c:
    // 0x31ed8c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31ED8Cu;
    {
        const bool branch_taken_0x31ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ed8c) {
            ctx->pc = 0x31EE0Cu;
            return;
        }
    }
    ctx->pc = 0x31ED94u;
}
