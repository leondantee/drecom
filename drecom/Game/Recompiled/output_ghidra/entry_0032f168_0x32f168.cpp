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

// Function: entry_0032f168
// Address: 0x32f168 - 0x32f1d8
void entry_0032f168_0x32f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f168_0x32f168");
#endif

    switch (ctx->pc) {
        case 0x32f1ccu: goto label_32f1cc;
        default: break;
    }

    ctx->pc = 0x32f168u;

    // 0x32f168: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x32f168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x32f16c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x32f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x32f170: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x32f174: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x32f178: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x32f178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x32f17c: 0x34c30808  ori         $v1, $a2, 0x808
    ctx->pc = 0x32f17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2056);
    // 0x32f180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32f180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f184: 0x3c061e00  lui         $a2, 0x1E00
    ctx->pc = 0x32f184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7680 << 16));
    // 0x32f188: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x32f188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f18c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f190: 0x34422600  ori         $v0, $v0, 0x2600
    ctx->pc = 0x32f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9728);
    // 0x32f194: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x32f194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32f198: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x32f198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32f19c: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x32f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x32f1a0: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x32f1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x32f1a4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x32f1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x32f1a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f1a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f1ac: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32f1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f1b0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x32f1b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32f1b4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32f1b8: 0x24622058  addiu       $v0, $v1, 0x2058
    ctx->pc = 0x32f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8280));
    // 0x32f1bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32f1bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f1c0: 0x72a03628  paddub      $a2, $s5, $zero
    ctx->pc = 0x32f1c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x32f1c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32F1C4u;
    SET_GPR_U32(ctx, 31, 0x32F1CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32F1C4u, 0x32F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F1CCu;
label_32f1cc:
    // 0x32f1cc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x32f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x32f1d0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f1d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f1d4: 0x0  nop
    ctx->pc = 0x32f1d4u;
    // NOP
    ctx->pc = 0x32f1d8u;
}
