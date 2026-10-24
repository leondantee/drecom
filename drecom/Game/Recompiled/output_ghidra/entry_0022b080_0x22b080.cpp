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

// Function: entry_0022b080
// Address: 0x22b080 - 0x22b148
void entry_0022b080_0x22b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b080_0x22b080");
#endif

    switch (ctx->pc) {
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b124u: goto label_22b124;
        case 0x22b12cu: goto label_22b12c;
        default: break;
    }

    ctx->pc = 0x22b080u;

    // 0x22b080: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x22b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x22b084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b088: 0x0  nop
    ctx->pc = 0x22b088u;
    // NOP
    // 0x22b08c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22b090: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b094: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22b098: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22B098u;
    SET_GPR_U32(ctx, 31, 0x22B0A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22B098u, 0x22B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0A0u;
label_22b0a0:
    // 0x22b0a0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x22B0A0u;
    {
        const bool branch_taken_0x22b0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0a0) {
            ctx->pc = 0x22B1FCu;
            return;
        }
    }
    ctx->pc = 0x22B0A8u;
    // 0x22b0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0ac: 0x0  nop
    ctx->pc = 0x22b0acu;
    // NOP
    // 0x22b0b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22b0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22b0b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22b0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0bc: 0x0  nop
    ctx->pc = 0x22b0bcu;
    // NOP
    // 0x22b0c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22b0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0c8: 0x0  nop
    ctx->pc = 0x22b0c8u;
    // NOP
    // 0x22b0cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22b0d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22b0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0d8: 0x0  nop
    ctx->pc = 0x22b0d8u;
    // NOP
    // 0x22b0dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22b0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22b0e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b0e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22b0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b0e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22b0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22b0ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b0f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22b0f4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x22b0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b0f8: 0x853824  and         $a3, $a0, $a1
    ctx->pc = 0x22b0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22b0fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x22b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x22b100: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b104: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b108: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22b10c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b114: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b118: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b118u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b11c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B11Cu;
    SET_GPR_U32(ctx, 31, 0x22B124u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B11Cu, 0x22B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B124u;
label_22b124:
    // 0x22b124: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B124u;
    SET_GPR_U32(ctx, 31, 0x22B12Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B124u, 0x22B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B12Cu;
label_22b12c:
    // 0x22b12c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B12Cu;
    {
        const bool branch_taken_0x22b12c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22b12c) {
            ctx->pc = 0x22B148u;
            return;
        }
    }
    ctx->pc = 0x22B134u;
    // 0x22b134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b138: 0x0  nop
    ctx->pc = 0x22b138u;
    // NOP
    // 0x22b13c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B140u;
    {
        const bool branch_taken_0x22b140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b140) {
            ctx->pc = 0x22B164u;
            return;
        }
    }
    ctx->pc = 0x22B148u;
}
