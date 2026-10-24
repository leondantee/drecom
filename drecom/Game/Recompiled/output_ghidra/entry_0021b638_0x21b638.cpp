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

// Function: entry_0021b638
// Address: 0x21b638 - 0x21b688
void entry_0021b638_0x21b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b638_0x21b638");
#endif

    switch (ctx->pc) {
        case 0x21b678u: goto label_21b678;
        case 0x21b684u: goto label_21b684;
        default: break;
    }

    ctx->pc = 0x21b638u;

    // 0x21b638: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x21b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21b63c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21b640: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21b640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21b644: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21b648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b64c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b650: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21b654: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21b658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21b65c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b660: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21b660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b664: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21b668: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21b66c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21b670: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21B670u;
    SET_GPR_U32(ctx, 31, 0x21B678u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21B670u, 0x21B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B678u;
label_21b678:
    // 0x21b678: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21b678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21b67c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21B67Cu;
    SET_GPR_U32(ctx, 31, 0x21B684u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21B67Cu, 0x21B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B684u;
label_21b684:
    // 0x21b684: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21b684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21b688u;
}
