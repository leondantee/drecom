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

// Function: entry_0015c348
// Address: 0x15c348 - 0x15c38c
void entry_0015c348_0x15c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c348_0x15c348");
#endif

    switch (ctx->pc) {
        case 0x15c36cu: goto label_15c36c;
        default: break;
    }

    ctx->pc = 0x15c348u;

    // 0x15c348: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15c348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15c34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c350: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c354: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c358: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c35c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c360: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x15c364: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15C364u;
    SET_GPR_U32(ctx, 31, 0x15C36Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15C364u, 0x15C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C36Cu;
label_15c36c:
    // 0x15c36c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x15c36cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15c370: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C370u;
    {
        const bool branch_taken_0x15c370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c370) {
            ctx->pc = 0x15C38Cu;
            return;
        }
    }
    ctx->pc = 0x15C378u;
    // 0x15c378: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x15c378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x15c37c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15c380: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c384: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15C384u;
    {
        const bool branch_taken_0x15c384 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15c384) {
            ctx->pc = 0x15C3ECu;
            return;
        }
    }
    ctx->pc = 0x15C38Cu;
}
