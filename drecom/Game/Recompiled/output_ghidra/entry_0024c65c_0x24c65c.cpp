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

// Function: entry_0024c65c
// Address: 0x24c65c - 0x24c6f0
void entry_0024c65c_0x24c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c65c_0x24c65c");
#endif

    switch (ctx->pc) {
        case 0x24c668u: goto label_24c668;
        case 0x24c67cu: goto label_24c67c;
        case 0x24c6ecu: goto label_24c6ec;
        default: break;
    }

    ctx->pc = 0x24c65cu;

    // 0x24c65c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c660: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24C660u;
    SET_GPR_U32(ctx, 31, 0x24C668u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24C668u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C668u) { return; }
    ctx->pc = 0x24C668u;
label_24c668:
    // 0x24c668: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24c66c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c670: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c674: 0xc040c92  jal         func_103248
    ctx->pc = 0x24C674u;
    SET_GPR_U32(ctx, 31, 0x24C67Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24C67Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C67Cu) { return; }
    ctx->pc = 0x24C67Cu;
label_24c67c:
    // 0x24c67c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24c680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c68c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c698: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24c698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c69c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24c6a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c6a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c6ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c6b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c6b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c6b8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24c6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24c6bc: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24c6c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24c6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24c6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24c6c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24c6cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24c6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24c6d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24c6d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c6d8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24c6d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c6dc: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x24c6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24c6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c6e4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24C6E4u;
    SET_GPR_U32(ctx, 31, 0x24C6ECu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24C6E4u, 0x24C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6ECu;
label_24c6ec:
    // 0x24c6ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c6ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24c6f0u;
}
