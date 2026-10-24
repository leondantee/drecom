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

// Function: entry_0031b0e4
// Address: 0x31b0e4 - 0x31b168
void entry_0031b0e4_0x31b0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b0e4_0x31b0e4");
#endif

    switch (ctx->pc) {
        case 0x31b154u: goto label_31b154;
        case 0x31b160u: goto label_31b160;
        default: break;
    }

    ctx->pc = 0x31b0e4u;

    // 0x31b0e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0e8: 0x0  nop
    ctx->pc = 0x31b0e8u;
    // NOP
    // 0x31b0ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x31b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31b0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b0f4: 0x0  nop
    ctx->pc = 0x31b0f4u;
    // NOP
    // 0x31b0f8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31b0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31b0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b100: 0x0  nop
    ctx->pc = 0x31b100u;
    // NOP
    // 0x31b104: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31b104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31b108: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x31b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x31b10c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b110: 0x0  nop
    ctx->pc = 0x31b110u;
    // NOP
    // 0x31b114: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31b118: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x31b118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x31b11c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31b120: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31b120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31b124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b128: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31b12c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31b12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31b130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31b130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31b134: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31b138: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31b13c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31b13cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31b140: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x31b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b144: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31b144u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b148: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b14c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31B14Cu;
    SET_GPR_U32(ctx, 31, 0x31B154u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31B14Cu, 0x31B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B154u;
label_31b154:
    // 0x31b154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31b154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31b158: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31B158u;
    SET_GPR_U32(ctx, 31, 0x31B160u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31B158u, 0x31B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B160u;
label_31b160:
    // 0x31b160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31b160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31b164: 0x0  nop
    ctx->pc = 0x31b164u;
    // NOP
    ctx->pc = 0x31b168u;
}
