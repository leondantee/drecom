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

// Function: entry_0022235c
// Address: 0x22235c - 0x2223e4
void entry_0022235c_0x22235c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022235c_0x22235c");
#endif

    switch (ctx->pc) {
        case 0x222394u: goto label_222394;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223d8u: goto label_2223d8;
        default: break;
    }

    ctx->pc = 0x22235cu;

    // 0x22235c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222360: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x222360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x222364: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x222364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x222368: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222368u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22236c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x22236cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x222370: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222374: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x222374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x222378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22237c: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x22237cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x222380: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
    // 0x222384: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222388: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22238c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22238Cu;
    SET_GPR_U32(ctx, 31, 0x222394u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22238Cu, 0x222394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222394u;
label_222394:
    // 0x222394: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222398: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x222398u;
    SET_GPR_U32(ctx, 31, 0x2223A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222398u, 0x2223A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223A0u;
label_2223a0:
    // 0x2223a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2223a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2223a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2223a8: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x2223a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2223ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2223acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2223b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2223b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2223b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2223b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2223b8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2223b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2223bc: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x2223bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2223c0: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x2223c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2223c4: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
    // 0x2223c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2223c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2223cc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2223ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2223d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2223D0u, 0x2223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2223d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2223dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2223DCu;
    SET_GPR_U32(ctx, 31, 0x2223E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2223DCu, 0x2223E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223E4u;
}
