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

// Function: entry_002f436c
// Address: 0x2f436c - 0x2f43d4
void entry_002f436c_0x2f436c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f436c_0x2f436c");
#endif

    switch (ctx->pc) {
        case 0x2f43d0u: goto label_2f43d0;
        default: break;
    }

    ctx->pc = 0x2f436cu;

    // 0x2f436c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2f436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f4370: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4374: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f4374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f4378: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f4380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f4384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f4384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f4388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f4388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f438c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f4390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f4390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4394: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2f4394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f4398: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f439c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f43a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f43a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f43a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f43a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f43ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f43acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f43b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f43b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f43b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f43b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f43b8: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x2f43b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f43bc: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x2f43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x2f43c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f43c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f43c4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f43c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F43C8u;
    SET_GPR_U32(ctx, 31, 0x2F43D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F43C8u, 0x2F43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f43d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f43d4u;
}
