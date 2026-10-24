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

// Function: entry_00357220
// Address: 0x357220 - 0x357270
void entry_00357220_0x357220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357220_0x357220");
#endif

    switch (ctx->pc) {
        case 0x357260u: goto label_357260;
        case 0x35726cu: goto label_35726c;
        default: break;
    }

    ctx->pc = 0x357220u;

    // 0x357220: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x357220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357224: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x357224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357228: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x357228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35722c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x35722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x357230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357234: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357238: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35723c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357240: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357248: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x357248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35724c: 0x2404171f  addiu       $a0, $zero, 0x171F
    ctx->pc = 0x35724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5919));
    // 0x357250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357254: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x357254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357258: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357258u;
    SET_GPR_U32(ctx, 31, 0x357260u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357258u, 0x357260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357260u;
label_357260:
    // 0x357260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357264u;
    SET_GPR_U32(ctx, 31, 0x35726Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357264u, 0x35726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35726Cu;
label_35726c:
    // 0x35726c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35726cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x357270u;
}
