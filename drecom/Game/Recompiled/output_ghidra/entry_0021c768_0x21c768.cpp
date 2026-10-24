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

// Function: entry_0021c768
// Address: 0x21c768 - 0x21c7d0
void entry_0021c768_0x21c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c768_0x21c768");
#endif

    switch (ctx->pc) {
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7ccu: goto label_21c7cc;
        default: break;
    }

    ctx->pc = 0x21c768u;

    // 0x21c768: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x21c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x21c76c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21c76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21c770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c774: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21c774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21c778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c77c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c77cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c780: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21c780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21c784: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21c784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c788: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c78c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21c790: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21c794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c798: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c79c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c7a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c7a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c7a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c7ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c7b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c7b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c7b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c7b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C7B8u;
    SET_GPR_U32(ctx, 31, 0x21C7C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C7B8u, 0x21C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7C0u;
label_21c7c0:
    // 0x21c7c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c7c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c7c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C7C4u;
    SET_GPR_U32(ctx, 31, 0x21C7CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C7C4u, 0x21C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7CCu;
label_21c7cc:
    // 0x21c7cc: 0x0  nop
    ctx->pc = 0x21c7ccu;
    // NOP
    ctx->pc = 0x21c7d0u;
}
