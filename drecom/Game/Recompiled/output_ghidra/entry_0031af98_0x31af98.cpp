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

// Function: entry_0031af98
// Address: 0x31af98 - 0x31b018
void entry_0031af98_0x31af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031af98_0x31af98");
#endif

    switch (ctx->pc) {
        case 0x31b008u: goto label_31b008;
        case 0x31b014u: goto label_31b014;
        default: break;
    }

    ctx->pc = 0x31af98u;

    // 0x31af98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31af98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31af9c: 0x0  nop
    ctx->pc = 0x31af9cu;
    // NOP
    // 0x31afa0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31afa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31afa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afa8: 0x0  nop
    ctx->pc = 0x31afa8u;
    // NOP
    // 0x31afac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31afb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31afb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afb4: 0x0  nop
    ctx->pc = 0x31afb4u;
    // NOP
    // 0x31afb8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31afb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31afbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31afc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31afc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31afc4: 0x0  nop
    ctx->pc = 0x31afc4u;
    // NOP
    // 0x31afc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31afc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31afcc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31afccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31afd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31afd4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31afd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31afdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31afe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31afe4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31afe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31afec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31afecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31aff0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31aff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31aff4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x31aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x31aff8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31aff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31affc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31affcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b000: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B000u;
    SET_GPR_U32(ctx, 31, 0x31B008u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B000u, 0x31B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B008u;
label_31b008:
    // 0x31b008: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b00c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B00Cu;
    SET_GPR_U32(ctx, 31, 0x31B014u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B00Cu, 0x31B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B014u;
label_31b014:
    // 0x31b014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x31b018u;
}
