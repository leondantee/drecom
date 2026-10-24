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

// Function: entry_0021bc58
// Address: 0x21bc58 - 0x21bcb0
void entry_0021bc58_0x21bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bc58_0x21bc58");
#endif

    switch (ctx->pc) {
        case 0x21bca0u: goto label_21bca0;
        case 0x21bcacu: goto label_21bcac;
        default: break;
    }

    ctx->pc = 0x21bc58u;

    // 0x21bc58: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x21bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21bc5c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21bc60: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x21bc64: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x21bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21bc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21bc6c: 0x3983c  dsll32      $s3, $v1, 0
    ctx->pc = 0x21bc6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21bc70: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x21bc70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x21bc74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x21bc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21bc78: 0x39438  dsll        $s2, $v1, 16
    ctx->pc = 0x21bc78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << 16);
    // 0x21bc7c: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x21bc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x21bc80: 0x263a024  and         $s4, $s3, $v1
    ctx->pc = 0x21bc80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x21bc84: 0x24100409  addiu       $s0, $zero, 0x409
    ctx->pc = 0x21bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21bc88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x21bc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21bc8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21bc8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc90: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21bc94: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x21bc94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21bc98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21BC98u;
    SET_GPR_U32(ctx, 31, 0x21BCA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21BC98u, 0x21BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCA0u;
label_21bca0:
    // 0x21bca0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21bca0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bca4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21BCA4u;
    SET_GPR_U32(ctx, 31, 0x21BCACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21BCA4u, 0x21BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BCACu;
label_21bcac:
    // 0x21bcac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21bcacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21bcb0u;
}
