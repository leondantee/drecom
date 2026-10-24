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

// Function: Trajectory_atari_check
// Address: 0x1b1ba0 - 0x1b237c
void Trajectory_atari_check_0x1b1ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trajectory_atari_check_0x1b1ba0");
#endif

    switch (ctx->pc) {
        case 0x1b1c1cu: goto label_1b1c1c;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1e04u: goto label_1b1e04;
        case 0x1b1e18u: goto label_1b1e18;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1ff8u: goto label_1b1ff8;
        case 0x1b2130u: goto label_1b2130;
        case 0x1b2154u: goto label_1b2154;
        case 0x1b21b4u: goto label_1b21b4;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2240u: goto label_1b2240;
        case 0x1b2250u: goto label_1b2250;
        case 0x1b228cu: goto label_1b228c;
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22e8u: goto label_1b22e8;
        case 0x1b2310u: goto label_1b2310;
        default: break;
    }

    ctx->pc = 0x1b1ba0u;

    // 0x1b1ba0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1b1ba4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b1ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b1ba8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b1ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b1bac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b1bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b1bb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b1bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b1bb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b1bbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1bc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1bcc: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x1b1bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x1b1bd0: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x1b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
    // 0x1b1bd4: 0xafa60178  sw          $a2, 0x178($sp)
    ctx->pc = 0x1b1bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 6));
    // 0x1b1bd8: 0xe7ac0180  swc1        $f12, 0x180($sp)
    ctx->pc = 0x1b1bd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1b1bdc: 0xafa70188  sw          $a3, 0x188($sp)
    ctx->pc = 0x1b1bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 7));
    // 0x1b1be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b1be4: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b1be8: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1b1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b1bec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1b1becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b1bf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b1bf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b1bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b1bf8: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1b1bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1b1bfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b1c00: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b1c04: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1b1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1b1c08: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1b1c0c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1b1c10: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b1c14: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B1C14u;
    SET_GPR_U32(ctx, 31, 0x1B1C1Cu);
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B1C14u, 0x1B1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C1Cu;
label_1b1c1c:
    // 0x1b1c1c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1b1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1b1c20: 0x241e0005  addiu       $fp, $zero, 0x5
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1c24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B1C24u;
    {
        const bool branch_taken_0x1b1c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c24) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b1c30: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b1c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c38: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x1b1c3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b1c40: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b1c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1c48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1c4c: 0x0  nop
    ctx->pc = 0x1b1c4cu;
    // NOP
label_1b1c50:
    // 0x1b1c50: 0x73c01628  paddub      $v0, $fp, $zero
    ctx->pc = 0x1b1c50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1b1c54: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1c58: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B1C58u;
    {
        const bool branch_taken_0x1b1c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c58) {
            ctx->pc = 0x1B1C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1c2c;
        }
    }
    ctx->pc = 0x1B1C60u;
    // 0x1b1c60: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1b1c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1c64: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b1c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1b1c68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c6c: 0x0  nop
    ctx->pc = 0x1b1c6cu;
    // NOP
    // 0x1b1c70: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1b1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1b1c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c78: 0x0  nop
    ctx->pc = 0x1b1c78u;
    // NOP
    // 0x1b1c7c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1b1c80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c88: 0x0  nop
    ctx->pc = 0x1b1c88u;
    // NOP
    // 0x1b1c8c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1b1c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1b1c90: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1c94: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1b1c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1c98: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1c9c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1CA4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1CA4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1CA4u) { return; }
    ctx->pc = 0x1B1CA4u;
label_1b1ca4:
    // 0x1b1ca4: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1ca8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b1cac: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1cb0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1cb4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B1CB4u;
    SET_GPR_U32(ctx, 31, 0x1B1CBCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B1CB4u, 0x1B1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CBCu;
label_1b1cbc:
    // 0x1b1cbc: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1cc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1cc4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1cc8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1ccc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1b1cd0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1B1CD0u;
    SET_GPR_U32(ctx, 31, 0x1B1CD8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B1CD0u, 0x1B1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CD8u;
label_1b1cd8:
    // 0x1b1cd8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b1cdc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1b1ce0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1CE0u;
    {
        const bool branch_taken_0x1b1ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ce0) {
            ctx->pc = 0x1B1CF8u;
            goto label_1b1cf8;
        }
    }
    ctx->pc = 0x1B1CE8u;
    // 0x1b1ce8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1cec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b1cf0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1CF0u;
    SET_GPR_U32(ctx, 31, 0x1B1CF8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1CF8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1CF8u) { return; }
    ctx->pc = 0x1B1CF8u;
label_1b1cf8:
    // 0x1b1cf8: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1b1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1b1cfc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1D00u;
    SET_GPR_U32(ctx, 31, 0x1B1D08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1D08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1D08u) { return; }
    ctx->pc = 0x1B1D08u;
label_1b1d08:
    // 0x1b1d08: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1d0c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d10: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d14: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b1d18: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B1D18u;
    SET_GPR_U32(ctx, 31, 0x1B1D20u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B1D18u, 0x1B1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D20u;
label_1b1d20:
    // 0x1b1d20: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1d24: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B1D24u;
    SET_GPR_U32(ctx, 31, 0x1B1D2Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B1D24u, 0x1B1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D2Cu;
label_1b1d2c:
    // 0x1b1d2c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1b1d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1b1d30: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1d34: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b1d38: 0xc040c44  jal         func_103110
    ctx->pc = 0x1B1D38u;
    SET_GPR_U32(ctx, 31, 0x1B1D40u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1B1D40u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1D40u) { return; }
    ctx->pc = 0x1B1D40u;
label_1b1d40:
    // 0x1b1d40: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b1d40u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1d44: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1B1D44u;
    {
        const bool branch_taken_0x1b1d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d44) {
            ctx->pc = 0x1B2138u;
            goto label_1b2138;
        }
    }
    ctx->pc = 0x1B1D4Cu;
label_1b1d4c:
    // 0x1b1d4c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b1d50: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1b1d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1d58: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1b1d58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1d5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1d60: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1b1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1b1d64: 0x8ea21228  lw          $v0, 0x1228($s5)
    ctx->pc = 0x1b1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4648)));
    // 0x1b1d68: 0x2450ffe0  addiu       $s0, $v0, -0x20
    ctx->pc = 0x1b1d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b1d6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1d70: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1b1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1b1d74: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b1d78: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b1d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1d80: 0x0  nop
    ctx->pc = 0x1b1d80u;
    // NOP
    // 0x1b1d84: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1d88: 0x8eb6121c  lw          $s6, 0x121C($s5)
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4636)));
    // 0x1b1d8c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b1d8cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1d90: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1B1D90u;
    {
        const bool branch_taken_0x1b1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d90) {
            ctx->pc = 0x1B1FB8u;
            goto label_1b1fb8;
        }
    }
    ctx->pc = 0x1B1D98u;
label_1b1d98:
    // 0x1b1d98: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b1d9c: 0x12c0008c  beqz        $s6, . + 4 + (0x8C << 2)
    ctx->pc = 0x1B1D9Cu;
    {
        const bool branch_taken_0x1b1d9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d9c) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1DA4u;
    // 0x1b1da4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b1da8: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b1dac: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b1dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b1db0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1B1DB0u;
    {
        const bool branch_taken_0x1b1db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1db0) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1DB8u;
    // 0x1b1db8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b1dbc: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b1dbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b1dc0: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b1dc4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b1dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1dcc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1dd0: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B1DD0u;
    {
        const bool branch_taken_0x1b1dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1dd0) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1DD8u;
    // 0x1b1dd8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b1dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1ddc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1de0: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1b1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1b1de4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1de8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b1dec: 0x8ea20130  lw          $v0, 0x130($s5)
    ctx->pc = 0x1b1decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
    // 0x1b1df0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1df4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1df8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b1dfc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1DFCu;
    SET_GPR_U32(ctx, 31, 0x1B1E04u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1E04u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1E04u) { return; }
    ctx->pc = 0x1B1E04u;
label_1b1e04:
    // 0x1b1e04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1e08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1e0c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1b1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1e10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B1E10u;
    SET_GPR_U32(ctx, 31, 0x1B1E18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B1E18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1E18u) { return; }
    ctx->pc = 0x1B1E18u;
label_1b1e18:
    // 0x1b1e18: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1e20: 0x0  nop
    ctx->pc = 0x1b1e20u;
    // NOP
    // 0x1b1e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e28: 0x0  nop
    ctx->pc = 0x1b1e28u;
    // NOP
    // 0x1b1e2c: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x1B1E2Cu;
    {
        const bool branch_taken_0x1b1e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1e2c) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1E34u;
    // 0x1b1e34: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b1e38: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B1E38u;
    SET_GPR_U32(ctx, 31, 0x1B1E40u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B1E38u, 0x1B1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E40u;
label_1b1e40:
    // 0x1b1e40: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1b1e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b1e48: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1b1e4c: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1b1e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e50: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1b1e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e58: 0x0  nop
    ctx->pc = 0x1b1e58u;
    // NOP
    // 0x1b1e5c: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x1B1E5Cu;
    {
        const bool branch_taken_0x1b1e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1e5c) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1E64u;
    // 0x1b1e64: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1e68: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1e74: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1b1e78: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1e7c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1e80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1e88: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b1e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1e90: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b1e90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b1e94: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1b1e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1e9c: 0x0  nop
    ctx->pc = 0x1b1e9cu;
    // NOP
    // 0x1b1ea0: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x1B1EA0u;
    {
        const bool branch_taken_0x1b1ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1ea0) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1EA8u;
    // 0x1b1ea8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1eac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b1eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1eb0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b1eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1eb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1eb8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ebc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b1ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1ec0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1b1ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ec4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1ec8: 0x0  nop
    ctx->pc = 0x1b1ec8u;
    // NOP
    // 0x1b1ecc: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1B1ECCu;
    {
        const bool branch_taken_0x1b1ecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1ecc) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1ED4u;
    // 0x1b1ed4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1ed8: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1b1ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1edc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1ee4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1b1ee8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1eec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1ef0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b1ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1ef4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b1ef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1ef8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1efc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b1efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b1f00: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1b1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f08: 0x0  nop
    ctx->pc = 0x1b1f08u;
    // NOP
    // 0x1b1f0c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1B1F0Cu;
    {
        const bool branch_taken_0x1b1f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f0c) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1F14u;
    // 0x1b1f14: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1f18: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1b1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b1f1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b1f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1f20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1f24: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1b1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1f28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1f2c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1b1f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b1f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f34: 0x0  nop
    ctx->pc = 0x1b1f34u;
    // NOP
    // 0x1b1f38: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B1F38u;
    {
        const bool branch_taken_0x1b1f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f38) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1F40u;
    // 0x1b1f40: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b1f44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1f48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b1f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1F4Cu;
    {
        const bool branch_taken_0x1b1f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f4c) {
            ctx->pc = 0x1B1F78u;
            goto label_1b1f78;
        }
    }
    ctx->pc = 0x1B1F54u;
    // 0x1b1f54: 0xafb40158  sw          $s4, 0x158($sp)
    ctx->pc = 0x1b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 20));
    // 0x1b1f58: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f5c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1f60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b1f64: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1f68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1F70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1F70u) { return; }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1F70u;
    {
        const bool branch_taken_0x1b1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f70) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1F78u;
label_1b1f78:
    // 0x1b1f78: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1b1f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1f7c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1f84: 0x0  nop
    ctx->pc = 0x1b1f84u;
    // NOP
    // 0x1b1f88: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1F88u;
    {
        const bool branch_taken_0x1b1f88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1f88) {
            ctx->pc = 0x1B1FB0u;
            goto label_1b1fb0;
        }
    }
    ctx->pc = 0x1B1F90u;
    // 0x1b1f90: 0xafb40158  sw          $s4, 0x158($sp)
    ctx->pc = 0x1b1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 20));
    // 0x1b1f94: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1f98: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1f9c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b1fa0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1b1fa4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B1FA4u;
    SET_GPR_U32(ctx, 31, 0x1B1FACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B1FACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B1FACu) { return; }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x0  nop
    ctx->pc = 0x1b1facu;
    // NOP
label_1b1fb0:
    // 0x1b1fb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b1fb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b1fb4: 0x0  nop
    ctx->pc = 0x1b1fb4u;
    // NOP
label_1b1fb8:
    // 0x1b1fb8: 0x92a21219  lbu         $v0, 0x1219($s5)
    ctx->pc = 0x1b1fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4633)));
    // 0x1b1fbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1fc0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1fc4: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1B1FC4u;
    {
        const bool branch_taken_0x1b1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fc4) {
            ctx->pc = 0x1B1D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1d98;
        }
    }
    ctx->pc = 0x1B1FCCu;
    // 0x1b1fcc: 0x0  nop
    ctx->pc = 0x1b1fccu;
    // NOP
label_1b1fd0:
    // 0x1b1fd0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1b1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b1fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1fd8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B1FD8u;
    {
        const bool branch_taken_0x1b1fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1fd8) {
            ctx->pc = 0x1B2130u;
            goto label_1b2130;
        }
    }
    ctx->pc = 0x1B1FE0u;
    // 0x1b1fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1fe4: 0x0  nop
    ctx->pc = 0x1b1fe4u;
    // NOP
    // 0x1b1fe8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b1fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1b1fec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b1fecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1ff0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B1FF0u;
    {
        const bool branch_taken_0x1b1ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ff0) {
            ctx->pc = 0x1B2088u;
            goto label_1b2088;
        }
    }
    ctx->pc = 0x1B1FF8u;
label_1b1ff8:
    // 0x1b1ff8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b1ffc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2000: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2008: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b200c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2010: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b2010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2018: 0x0  nop
    ctx->pc = 0x1b2018u;
    // NOP
    // 0x1b201c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b201cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2020: 0x0  nop
    ctx->pc = 0x1b2020u;
    // NOP
    // 0x1b2024: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2024u;
    {
        const bool branch_taken_0x1b2024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2024) {
            ctx->pc = 0x1B2038u;
            goto label_1b2038;
        }
    }
    ctx->pc = 0x1B202Cu;
    // 0x1b202c: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x1b202cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b2030: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B2030u;
    {
        const bool branch_taken_0x1b2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2030) {
            ctx->pc = 0x1B2098u;
            goto label_1b2098;
        }
    }
    ctx->pc = 0x1B2038u;
label_1b2038:
    // 0x1b2038: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b203c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2040: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2048: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b204c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2054: 0x0  nop
    ctx->pc = 0x1b2054u;
    // NOP
    // 0x1b2058: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2058u;
    {
        const bool branch_taken_0x1b2058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2058) {
            ctx->pc = 0x1B2080u;
            goto label_1b2080;
        }
    }
    ctx->pc = 0x1B2060u;
    // 0x1b2060: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1b2060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1b2064: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2068: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b206c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2070: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b2070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2074: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1b2074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1b2078: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x1b2078u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b207c: 0x0  nop
    ctx->pc = 0x1b207cu;
    // NOP
label_1b2080:
    // 0x1b2080: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b2080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b2084: 0x0  nop
    ctx->pc = 0x1b2084u;
    // NOP
label_1b2088:
    // 0x1b2088: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1b2088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b208c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1B208Cu;
    {
        const bool branch_taken_0x1b208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b208c) {
            ctx->pc = 0x1B1FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ff8;
        }
    }
    ctx->pc = 0x1B2094u;
    // 0x1b2094: 0x0  nop
    ctx->pc = 0x1b2094u;
    // NOP
label_1b2098:
    // 0x1b2098: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x1b2098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b209c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B209Cu;
    {
        const bool branch_taken_0x1b209c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b209c) {
            ctx->pc = 0x1B2130u;
            goto label_1b2130;
        }
    }
    ctx->pc = 0x1B20A4u;
    // 0x1b20a4: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20ac: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b20b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b20b8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b20b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b20bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b20bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b20c0: 0x0  nop
    ctx->pc = 0x1b20c0u;
    // NOP
    // 0x1b20c4: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B20C4u;
    {
        const bool branch_taken_0x1b20c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b20c4) {
            ctx->pc = 0x1B2130u;
            goto label_1b2130;
        }
    }
    ctx->pc = 0x1B20CCu;
    // 0x1b20cc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1b20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b20d0: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20d8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b20e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b20e4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1b20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b20e8: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b20ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b20f0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b20f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b20f8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b20fc: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2100: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2104: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b210c: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x1b210cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x1b2110: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b2110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2114: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2118: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b211c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2120: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2124: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2128: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2128u;
    SET_GPR_U32(ctx, 31, 0x1B2130u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2130u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2130u) { return; }
    ctx->pc = 0x1B2130u;
label_1b2130:
    // 0x1b2130: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b2134: 0x0  nop
    ctx->pc = 0x1b2134u;
    // NOP
label_1b2138:
    // 0x1b2138: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b213c: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1b213cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2140: 0x1440ff02  bnez        $v0, . + 4 + (-0xFE << 2)
    ctx->pc = 0x1B2140u;
    {
        const bool branch_taken_0x1b2140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2140) {
            ctx->pc = 0x1B1D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1d4c;
        }
    }
    ctx->pc = 0x1B2148u;
    // 0x1b2148: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b2148u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b214c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B214Cu;
    {
        const bool branch_taken_0x1b214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b214c) {
            ctx->pc = 0x1B2190u;
            goto label_1b2190;
        }
    }
    ctx->pc = 0x1B2154u;
label_1b2154:
    // 0x1b2154: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x1b2154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x1b2158: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b215c: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2168: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b216c: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2174: 0x0  nop
    ctx->pc = 0x1b2174u;
    // NOP
    // 0x1b2178: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b2178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b217c: 0x0  nop
    ctx->pc = 0x1b217cu;
    // NOP
    // 0x1b2180: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2180u;
    {
        const bool branch_taken_0x1b2180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2180) {
            ctx->pc = 0x1B21A0u;
            goto label_1b21a0;
        }
    }
    ctx->pc = 0x1B2188u;
    // 0x1b2188: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b2188u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b218c: 0x0  nop
    ctx->pc = 0x1b218cu;
    // NOP
label_1b2190:
    // 0x1b2190: 0x2bc20005  slti        $v0, $fp, 0x5
    ctx->pc = 0x1b2190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2194: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B2194u;
    {
        const bool branch_taken_0x1b2194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2194) {
            ctx->pc = 0x1B2154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2154;
        }
    }
    ctx->pc = 0x1B219Cu;
    // 0x1b219c: 0x0  nop
    ctx->pc = 0x1b219cu;
    // NOP
label_1b21a0:
    // 0x1b21a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b21a4: 0x2453b8d0  addiu       $s3, $v0, -0x4730
    ctx->pc = 0x1b21a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b21a8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b21a8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b21ac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B21ACu;
    {
        const bool branch_taken_0x1b21ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21ac) {
            ctx->pc = 0x1B2270u;
            goto label_1b2270;
        }
    }
    ctx->pc = 0x1B21B4u;
label_1b21b4:
    // 0x1b21b4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1b21b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b21b8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b21bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1B21BCu;
    {
        const bool branch_taken_0x1b21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21bc) {
            ctx->pc = 0x1B2258u;
            goto label_1b2258;
        }
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b21c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b21c8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b21cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b21d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b21d4: 0x0  nop
    ctx->pc = 0x1b21d4u;
    // NOP
    // 0x1b21d8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B21D8u;
    {
        const bool branch_taken_0x1b21d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b21d8) {
            ctx->pc = 0x1B2250u;
            goto label_1b2250;
        }
    }
    ctx->pc = 0x1B21E0u;
    // 0x1b21e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21e4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1b21e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1b21e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b21f0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b21f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b21fc: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1b21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x1b2200: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b2204: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1b2204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1b2208: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1b220c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b220cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b2210: 0x8e750008  lw          $s5, 0x8($s3)
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b2214: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b2218: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b2218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b221c: 0xae350008  sw          $s5, 0x8($s1)
    ctx->pc = 0x1b221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x1b2220: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b2220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2224: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1b2224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b2228: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2228u;
    SET_GPR_U32(ctx, 31, 0x1B2230u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2230u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2230u) { return; }
    ctx->pc = 0x1B2230u;
label_1b2230:
    // 0x1b2230: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b2234: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2238: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2238u;
    SET_GPR_U32(ctx, 31, 0x1B2240u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2240u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2240u) { return; }
    ctx->pc = 0x1B2240u;
label_1b2240:
    // 0x1b2240: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2244: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2248: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2248u;
    SET_GPR_U32(ctx, 31, 0x1B2250u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2250u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2250u) { return; }
    ctx->pc = 0x1B2250u;
label_1b2250:
    // 0x1b2250: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b2254: 0x0  nop
    ctx->pc = 0x1b2254u;
    // NOP
label_1b2258:
    // 0x1b2258: 0x25e102a  slt         $v0, $s2, $fp
    ctx->pc = 0x1b2258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b225c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1B225Cu;
    {
        const bool branch_taken_0x1b225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b225c) {
            ctx->pc = 0x1B21C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B2264u;
    // 0x1b2264: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b2264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b2268: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2268u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b226c: 0x0  nop
    ctx->pc = 0x1b226cu;
    // NOP
label_1b2270:
    // 0x1b2270: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1b2274: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b2274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2278: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B2278u;
    {
        const bool branch_taken_0x1b2278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2278) {
            ctx->pc = 0x1B21B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b21b4;
        }
    }
    ctx->pc = 0x1B2280u;
    // 0x1b2280: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2280u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2284: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2284u;
    {
        const bool branch_taken_0x1b2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2284) {
            ctx->pc = 0x1B2318u;
            goto label_1b2318;
        }
    }
    ctx->pc = 0x1B228Cu;
label_1b228c:
    // 0x1b228c: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2290: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2294: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2298: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b229c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b22a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22a4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b22a8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1b22a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b22ac: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B22ACu;
    SET_GPR_U32(ctx, 31, 0x1B22B4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B22ACu, 0x1B22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22B4u;
label_1b22b4:
    // 0x1b22b4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22b8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22bc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B22BCu;
    SET_GPR_U32(ctx, 31, 0x1B22C4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B22C4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B22C4u) { return; }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b22c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b22c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b22cc: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b22d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b22d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1b22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22d8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1b22d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b22dc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b22dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b22e0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B22E0u;
    SET_GPR_U32(ctx, 31, 0x1B22E8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B22E8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B22E8u) { return; }
    ctx->pc = 0x1B22E8u;
label_1b22e8:
    // 0x1b22e8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b22ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b22f0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b22f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b22f8: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x1b22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b22fc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2300: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b2304: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1b2308: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2308u;
    SET_GPR_U32(ctx, 31, 0x1B2310u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2308u, 0x1B2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2310u;
label_1b2310:
    // 0x1b2310: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2314: 0x0  nop
    ctx->pc = 0x1b2314u;
    // NOP
label_1b2318:
    // 0x1b2318: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x1b2318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b231c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B231Cu;
    {
        const bool branch_taken_0x1b231c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b231c) {
            ctx->pc = 0x1B228Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b228c;
        }
    }
    ctx->pc = 0x1B2324u;
    // 0x1b2324: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B2344u;
            goto label_1b2344;
        }
    }
    ctx->pc = 0x1B232Cu;
    // 0x1b232c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1b232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1b2330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2330u;
    {
        const bool branch_taken_0x1b2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2330) {
            ctx->pc = 0x1B2344u;
            goto label_1b2344;
        }
    }
    ctx->pc = 0x1B2338u;
    // 0x1b2338: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b233c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B233Cu;
    {
        const bool branch_taken_0x1b233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b233c) {
            ctx->pc = 0x1B2348u;
            goto label_1b2348;
        }
    }
    ctx->pc = 0x1B2344u;
label_1b2344:
    // 0x1b2344: 0x73c01628  paddub      $v0, $fp, $zero
    ctx->pc = 0x1b2344u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
label_1b2348:
    // 0x1b2348: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b2348u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b234c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b234cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2350: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b2350u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2354: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b2354u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b2358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b235c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b235cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b2360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2370: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1b2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b2374: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B237Cu;
}
