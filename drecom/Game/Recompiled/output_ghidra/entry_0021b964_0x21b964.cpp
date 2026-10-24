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

// Function: entry_0021b964
// Address: 0x21b964 - 0x21b9b8
void entry_0021b964_0x21b964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b964_0x21b964");
#endif

    switch (ctx->pc) {
        case 0x21b9a4u: goto label_21b9a4;
        case 0x21b9b0u: goto label_21b9b0;
        default: break;
    }

    ctx->pc = 0x21b964u;

    // 0x21b964: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b968: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b96c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b970: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b97c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b98c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b98cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b990: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x21b994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b998: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b99c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B99Cu;
    SET_GPR_U32(ctx, 31, 0x21B9A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B99Cu, 0x21B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9A4u;
label_21b9a4:
    // 0x21b9a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b9a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b9a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B9A8u;
    SET_GPR_U32(ctx, 31, 0x21B9B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B9A8u, 0x21B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B9B0u;
label_21b9b0:
    // 0x21b9b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b9b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b9b4: 0x0  nop
    ctx->pc = 0x21b9b4u;
    // NOP
    ctx->pc = 0x21b9b8u;
}
