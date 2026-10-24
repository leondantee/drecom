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

// Function: entry_0021b358
// Address: 0x21b358 - 0x21b3a8
void entry_0021b358_0x21b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b358_0x21b358");
#endif

    switch (ctx->pc) {
        case 0x21b398u: goto label_21b398;
        case 0x21b3a4u: goto label_21b3a4;
        default: break;
    }

    ctx->pc = 0x21b358u;

    // 0x21b358: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b35c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b360: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b364: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b36c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b370: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b374: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b378: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b37c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b380: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b384: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b388: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b38c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b390: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B390u;
    SET_GPR_U32(ctx, 31, 0x21B398u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B390u, 0x21B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B398u;
label_21b398:
    // 0x21b398: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b39c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B39Cu;
    SET_GPR_U32(ctx, 31, 0x21B3A4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B39Cu, 0x21B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3A4u;
label_21b3a4:
    // 0x21b3a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21b3a8u;
}
