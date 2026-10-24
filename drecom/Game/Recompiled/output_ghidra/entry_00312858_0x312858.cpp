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

// Function: entry_00312858
// Address: 0x312858 - 0x3128a0
void entry_00312858_0x312858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312858_0x312858");
#endif

    switch (ctx->pc) {
        case 0x312894u: goto label_312894;
        default: break;
    }

    ctx->pc = 0x312858u;

    // 0x312858: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x312858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31285c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31285Cu;
    {
        const bool branch_taken_0x31285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31285c) {
            ctx->pc = 0x3128A0u;
            return;
        }
    }
    ctx->pc = 0x312864u;
    // 0x312864: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x312864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x312868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x312868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31286c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312870: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x312870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x312874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312878: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x312878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31287c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x31287cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312884: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x312888: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x312888u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31288c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31288Cu;
    SET_GPR_U32(ctx, 31, 0x312894u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31288Cu, 0x312894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312894u;
label_312894:
    // 0x312894: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312894u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312898: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x312898u;
    {
        const bool branch_taken_0x312898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312898) {
            ctx->pc = 0x312920u;
            return;
        }
    }
    ctx->pc = 0x3128A0u;
}
