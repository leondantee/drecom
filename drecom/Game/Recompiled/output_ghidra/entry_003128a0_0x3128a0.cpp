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

// Function: entry_003128a0
// Address: 0x3128a0 - 0x312920
void entry_003128a0_0x3128a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003128a0_0x3128a0");
#endif

    switch (ctx->pc) {
        case 0x31291cu: goto label_31291c;
        default: break;
    }

    ctx->pc = 0x3128a0u;

    // 0x3128a0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3128a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3128a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3128a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3128a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3128a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3128ac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3128acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3128b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3128b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3128b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3128b8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3128bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3128c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3128c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3128c4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3128c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3128c8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x3128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3128cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3128ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3128d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3128d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3128d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3128d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3128d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3128dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3128dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3128e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3128e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3128e4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x3128e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3128e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3128e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3128ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3128ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3128f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3128f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3128f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3128f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3128f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3128f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3128fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3128fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312900: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312904: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312908: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x312908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x31290c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31290cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312910: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x312910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x312914: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312914u;
    SET_GPR_U32(ctx, 31, 0x31291Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312914u, 0x31291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31291Cu;
label_31291c:
    // 0x31291c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31291cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x312920u;
}
