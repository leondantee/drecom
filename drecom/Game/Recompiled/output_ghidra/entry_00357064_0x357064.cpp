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

// Function: entry_00357064
// Address: 0x357064 - 0x3570b8
void entry_00357064_0x357064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357064_0x357064");
#endif

    switch (ctx->pc) {
        case 0x3570a4u: goto label_3570a4;
        case 0x3570b0u: goto label_3570b0;
        default: break;
    }

    ctx->pc = 0x357064u;

    // 0x357064: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357068: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35706c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35706cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x357070: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x357070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x357074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357078: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35707c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357080: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357084: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357088: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35708c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35708cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357090: 0x34048400  ori         $a0, $zero, 0x8400
    ctx->pc = 0x357090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    // 0x357094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357098: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35709c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35709Cu;
    SET_GPR_U32(ctx, 31, 0x3570A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35709Cu, 0x3570A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570A4u;
label_3570a4:
    // 0x3570a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3570a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3570A8u;
    SET_GPR_U32(ctx, 31, 0x3570B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3570A8u, 0x3570B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570B0u;
label_3570b0:
    // 0x3570b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3570b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3570b4: 0x0  nop
    ctx->pc = 0x3570b4u;
    // NOP
    ctx->pc = 0x3570b8u;
}
