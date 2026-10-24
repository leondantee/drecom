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

// Function: Set_effect_pl00_kemuri01
// Address: 0x2f1940 - 0x2f217c
void Set_effect_pl00_kemuri01_0x2f1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_kemuri01_0x2f1940");
#endif

    switch (ctx->pc) {
        case 0x2f1988u: goto label_2f1988;
        case 0x2f1994u: goto label_2f1994;
        case 0x2f19c4u: goto label_2f19c4;
        case 0x2f1a28u: goto label_2f1a28;
        case 0x2f1ac4u: goto label_2f1ac4;
        case 0x2f1b84u: goto label_2f1b84;
        case 0x2f1ba8u: goto label_2f1ba8;
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1be0u: goto label_2f1be0;
        case 0x2f1c1cu: goto label_2f1c1c;
        case 0x2f1c4cu: goto label_2f1c4c;
        case 0x2f1d30u: goto label_2f1d30;
        case 0x2f1d50u: goto label_2f1d50;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f2100u: goto label_2f2100;
        default: break;
    }

    ctx->pc = 0x2f1940u;

    // 0x2f1940: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f1944: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2f1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2f1948: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2f194c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f1950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f1950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f1954: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f1958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f195c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1968: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2f1968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2f196c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x2f196cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x2f1970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1974: 0x0  nop
    ctx->pc = 0x2f1974u;
    // NOP
    // 0x2f1978: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f197c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f197cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1980: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2F1980u;
    {
        const bool branch_taken_0x2f1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1980) {
            ctx->pc = 0x2F1D90u;
            goto label_2f1d90;
        }
    }
    ctx->pc = 0x2F1988u;
label_2f1988:
    // 0x2f1988: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f198c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F198Cu;
    SET_GPR_U32(ctx, 31, 0x2F1994u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F198Cu, 0x2F1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1994u;
label_2f1994:
    // 0x2f1994: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2f1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2f1998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f199c: 0x0  nop
    ctx->pc = 0x2f199cu;
    // NOP
    // 0x2f19a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f19a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f19a4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2f19a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2f19a8: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x2f19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x2f19ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f19acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f19b0: 0x0  nop
    ctx->pc = 0x2f19b0u;
    // NOP
    // 0x2f19b4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2f19b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2f19b8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f19bc: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F19BCu;
    SET_GPR_U32(ctx, 31, 0x2F19C4u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F19BCu, 0x2F19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19C4u;
label_2f19c4:
    // 0x2f19c4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2f19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2f19c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f19c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f19cc: 0x0  nop
    ctx->pc = 0x2f19ccu;
    // NOP
    // 0x2f19d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f19d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f19d4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2f19d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2f19d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f19dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f19dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f19e0: 0x0  nop
    ctx->pc = 0x2f19e0u;
    // NOP
    // 0x2f19e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2f19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2f19e8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f19ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f19f0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f19f4: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f19f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f19fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f19fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1a00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f1a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f1a04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f1a08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f1a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f1a0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f1a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f1a10: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f1a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f1a14: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f1a18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f1a18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1a1c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f1a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1a20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F1A20u;
    SET_GPR_U32(ctx, 31, 0x2F1A28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F1A20u, 0x2F1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A28u;
label_2f1a28:
    // 0x2f1a28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a2c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f1a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1a34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a38: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a3c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1a40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1a44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a4c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f1a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1a50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a58: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1a60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a68: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f1a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1a6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a74: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1a74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1a78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a80: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1a84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a8c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f1a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1a90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1a94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1a98: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f1a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1a9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1aa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1aa4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1aa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1aac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1ab0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1ab4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1ab8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f1ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1abc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F1ABCu;
    SET_GPR_U32(ctx, 31, 0x2F1AC4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F1ABCu, 0x2F1AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1AC4u;
label_2f1ac4:
    // 0x2f1ac4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1ac8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f1ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f1acc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1ad0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ad4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1ad8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1adc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1ADCu;
    {
        const bool branch_taken_0x2f1adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1adc) {
            ctx->pc = 0x2F1AF0u;
            goto label_2f1af0;
        }
    }
    ctx->pc = 0x2F1AE4u;
    // 0x2f1ae4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f1ae4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1ae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1AE8u;
    {
        const bool branch_taken_0x2f1ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ae8) {
            ctx->pc = 0x2F1B10u;
            goto label_2f1b10;
        }
    }
    ctx->pc = 0x2F1AF0u;
label_2f1af0:
    // 0x2f1af0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1af4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1af8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1afc: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1b00: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2f1b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f1b04: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2f1b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f1b08: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2f1b08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f1b0c: 0x0  nop
    ctx->pc = 0x2f1b0cu;
    // NOP
label_2f1b10:
    // 0x2f1b10: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f1b14: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2f1b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f1b18: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2f1b18u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1b1c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1b20: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1b24: 0x12030090  beq         $s0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2F1B24u;
    {
        const bool branch_taken_0x2f1b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1b24) {
            ctx->pc = 0x2F1D68u;
            goto label_2f1d68;
        }
    }
    ctx->pc = 0x2F1B2Cu;
    // 0x2f1b2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f1b30: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f1b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1b34: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f1b38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b40: 0x0  nop
    ctx->pc = 0x2f1b40u;
    // NOP
    // 0x2f1b44: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1b48: 0x3c02417c  lui         $v0, 0x417C
    ctx->pc = 0x2f1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16764 << 16));
    // 0x2f1b4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b54: 0x0  nop
    ctx->pc = 0x2f1b54u;
    // NOP
    // 0x2f1b58: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1b5c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f1b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b64: 0x0  nop
    ctx->pc = 0x2f1b64u;
    // NOP
    // 0x2f1b68: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1b6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f1b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1b74: 0x0  nop
    ctx->pc = 0x2f1b74u;
    // NOP
    // 0x2f1b78: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1b7c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B84u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1B7Cu, 0x2F1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B84u;
label_2f1b84:
    // 0x2f1b84: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f1b88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1b8c: 0x0  nop
    ctx->pc = 0x2f1b8cu;
    // NOP
    // 0x2f1b90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1b94: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1b98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1b9c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1ba0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BA0u;
    SET_GPR_U32(ctx, 31, 0x2F1BA8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BA0u, 0x2F1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BA8u;
label_2f1ba8:
    // 0x2f1ba8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f1bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1bb0: 0x0  nop
    ctx->pc = 0x2f1bb0u;
    // NOP
    // 0x2f1bb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bb8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1bbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1bc0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1bc4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BC4u;
    SET_GPR_U32(ctx, 31, 0x2F1BCCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BC4u, 0x2F1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BCCu;
label_2f1bcc:
    // 0x2f1bcc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2f1bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bd4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1bd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1BD8u;
    SET_GPR_U32(ctx, 31, 0x2F1BE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1BD8u, 0x2F1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BE0u;
label_2f1be0:
    // 0x2f1be0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1be8: 0x0  nop
    ctx->pc = 0x2f1be8u;
    // NOP
    // 0x2f1bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1bf0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1bf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1bf8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1bfc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f1c00: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f1c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c08: 0x0  nop
    ctx->pc = 0x2f1c08u;
    // NOP
    // 0x2f1c0c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f1c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f1c10: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1c14: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F1C14u;
    SET_GPR_U32(ctx, 31, 0x2F1C1Cu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F1C14u, 0x2F1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C1Cu;
label_2f1c1c:
    // 0x2f1c1c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1c20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1c24: 0x0  nop
    ctx->pc = 0x2f1c24u;
    // NOP
    // 0x2f1c28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1c2c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f1c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f1c30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f1c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c38: 0x0  nop
    ctx->pc = 0x2f1c38u;
    // NOP
    // 0x2f1c3c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f1c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f1c40: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1c44: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F1C44u;
    SET_GPR_U32(ctx, 31, 0x2F1C4Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F1C44u, 0x2F1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C4Cu;
label_2f1c4c:
    // 0x2f1c4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f1c50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1c54: 0x0  nop
    ctx->pc = 0x2f1c54u;
    // NOP
    // 0x2f1c58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1c5c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f1c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f1c60: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2f1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2f1c64: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2f1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2f1c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c6c: 0x0  nop
    ctx->pc = 0x2f1c6cu;
    // NOP
    // 0x2f1c70: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f1c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f1c74: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f1c78: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f1c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c80: 0x0  nop
    ctx->pc = 0x2f1c80u;
    // NOP
    // 0x2f1c84: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f1c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f1c88: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x2f1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x2f1c8c: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x2f1c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x2f1c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1c94: 0x0  nop
    ctx->pc = 0x2f1c94u;
    // NOP
    // 0x2f1c98: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f1c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f1c9c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f1ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1ca4: 0x0  nop
    ctx->pc = 0x2f1ca4u;
    // NOP
    // 0x2f1ca8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f1ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f1cac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2f1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2f1cb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1cb8: 0x0  nop
    ctx->pc = 0x2f1cb8u;
    // NOP
    // 0x2f1cbc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f1cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f1cc0: 0x3c023f61  lui         $v0, 0x3F61
    ctx->pc = 0x2f1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16225 << 16));
    // 0x2f1cc4: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x2f1cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x2f1cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1ccc: 0x0  nop
    ctx->pc = 0x2f1cccu;
    // NOP
    // 0x2f1cd0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f1cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f1cd4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1cd8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f1cdc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f1cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1ce0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f1ce4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1ce8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1cec: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f1cf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1cf4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f1cf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f1cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f1cfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f1d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1d04: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f1d08: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f1d0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f1d10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f1d14: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f1d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f1d18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1d1c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2f1d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2f1d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f1d24: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2f1d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1d28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1D28u;
    SET_GPR_U32(ctx, 31, 0x2F1D30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1D28u, 0x2F1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D30u;
label_2f1d30:
    // 0x2f1d30: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f1d34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f1d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1d3c: 0x0  nop
    ctx->pc = 0x2f1d3cu;
    // NOP
    // 0x2f1d40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f1d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f1d48: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1D48u;
    SET_GPR_U32(ctx, 31, 0x2F1D50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1D48u, 0x2F1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D50u;
label_2f1d50:
    // 0x2f1d50: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f1d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f1d54: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f1d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f1d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f1d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1d5c: 0x0  nop
    ctx->pc = 0x2f1d5cu;
    // NOP
    // 0x2f1d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d64: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f1d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2f1d68:
    // 0x2f1d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f1d6c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1d70: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x2f1d74: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f1d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f1d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1d7c: 0x0  nop
    ctx->pc = 0x2f1d7cu;
    // NOP
    // 0x2f1d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d84: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1d88: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f1d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f1d8c: 0x0  nop
    ctx->pc = 0x2f1d8cu;
    // NOP
label_2f1d90:
    // 0x2f1d90: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2f1d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f1d94: 0x1460fefc  bnez        $v1, . + 4 + (-0x104 << 2)
    ctx->pc = 0x2F1D94u;
    {
        const bool branch_taken_0x2f1d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1d94) {
            ctx->pc = 0x2F1988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1988;
        }
    }
    ctx->pc = 0x2F1D9Cu;
    // 0x2f1d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1da0: 0x0  nop
    ctx->pc = 0x2f1da0u;
    // NOP
    // 0x2f1da4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1da8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f1da8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1dac: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2F1DACu;
    {
        const bool branch_taken_0x2f1dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1dac) {
            ctx->pc = 0x2F2140u;
            goto label_2f2140;
        }
    }
    ctx->pc = 0x2F1DB4u;
label_2f1db4:
    // 0x2f1db4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1db8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f1dbc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f1dc0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f1dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1dc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f1dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1dcc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f1dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f1dd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f1dd4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f1dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f1dd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f1dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f1ddc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f1ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f1de0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f1de4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f1de4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1de8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f1de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f1dec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F1DECu;
    SET_GPR_U32(ctx, 31, 0x2F1DF4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F1DECu, 0x2F1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DF4u;
label_2f1df4:
    // 0x2f1df4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1df8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f1dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1e00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e08: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1e10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e14: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e18: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f1e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e20: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e24: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f1e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1e2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e34: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f1e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1e38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e3c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e40: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e48: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e4c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e54: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e58: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f1e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e5c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e60: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e64: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f1e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e6c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e70: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e7c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1e80: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e84: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1e88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F1E88u;
    SET_GPR_U32(ctx, 31, 0x2F1E90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F1E88u, 0x2F1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E90u;
label_2f1e90:
    // 0x2f1e90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e94: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f1e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f1e98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1e9c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ea0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1ea4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1ea8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1EA8u;
    {
        const bool branch_taken_0x2f1ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1ea8) {
            ctx->pc = 0x2F1EBCu;
            goto label_2f1ebc;
        }
    }
    ctx->pc = 0x2F1EB0u;
    // 0x2f1eb0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f1eb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F1EB4u;
    {
        const bool branch_taken_0x2f1eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1eb4) {
            ctx->pc = 0x2F1ED8u;
            goto label_2f1ed8;
        }
    }
    ctx->pc = 0x2F1EBCu;
label_2f1ebc:
    // 0x2f1ebc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1ec0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ec4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1ec8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ecc: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2f1eccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f1ed0: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2f1ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f1ed4: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2f1ed4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f1ed8:
    // 0x2f1ed8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f1edc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2f1edcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f1ee0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2f1ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1ee4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f1ee8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f1ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1eec: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2F1EECu;
    {
        const bool branch_taken_0x2f1eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1eec) {
            ctx->pc = 0x2F2118u;
            goto label_2f2118;
        }
    }
    ctx->pc = 0x2F1EF4u;
    // 0x2f1ef4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f1ef8: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f1ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f1efc: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x2f1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x2f1f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f04: 0x0  nop
    ctx->pc = 0x2f1f04u;
    // NOP
    // 0x2f1f08: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1f0c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2f1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2f1f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f14: 0x0  nop
    ctx->pc = 0x2f1f14u;
    // NOP
    // 0x2f1f18: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1f1c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2f1f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f24: 0x0  nop
    ctx->pc = 0x2f1f24u;
    // NOP
    // 0x2f1f28: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1f2c: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2f1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2f1f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1f34: 0x0  nop
    ctx->pc = 0x2f1f34u;
    // NOP
    // 0x2f1f38: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1f3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F3Cu, 0x2F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F44u;
label_2f1f44:
    // 0x2f1f44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f4c: 0x0  nop
    ctx->pc = 0x2f1f4cu;
    // NOP
    // 0x2f1f50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f54: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1f5c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f1f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f1f60: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F60u;
    SET_GPR_U32(ctx, 31, 0x2F1F68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F60u, 0x2F1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F68u;
label_2f1f68:
    // 0x2f1f68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f70: 0x0  nop
    ctx->pc = 0x2f1f70u;
    // NOP
    // 0x2f1f74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f78: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1f80: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f1f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f1f84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1F84u;
    SET_GPR_U32(ctx, 31, 0x2F1F8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1F84u, 0x2F1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F8Cu;
label_2f1f8c:
    // 0x2f1f8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1f94: 0x0  nop
    ctx->pc = 0x2f1f94u;
    // NOP
    // 0x2f1f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1f9c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1fa4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f1fa8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F1FA8u;
    SET_GPR_U32(ctx, 31, 0x2F1FB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F1FA8u, 0x2F1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FB0u;
label_2f1fb0:
    // 0x2f1fb0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f1fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1fb8: 0x0  nop
    ctx->pc = 0x2f1fb8u;
    // NOP
    // 0x2f1fbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f1fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1fc0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1fc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f1fc8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f1fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f1fcc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2f1fd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f1fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f1fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1fd8: 0x0  nop
    ctx->pc = 0x2f1fd8u;
    // NOP
    // 0x2f1fdc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f1fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f1fe0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f1fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f1fe4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2F1FE4u;
    SET_GPR_U32(ctx, 31, 0x2F1FECu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2F1FE4u, 0x2F1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FECu;
label_2f1fec:
    // 0x2f1fec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f1ff0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f1ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f1ff4: 0x0  nop
    ctx->pc = 0x2f1ff4u;
    // NOP
    // 0x2f1ff8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f1ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f1ffc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2f1ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2f2000: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2f2000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2f2004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2008: 0x0  nop
    ctx->pc = 0x2f2008u;
    // NOP
    // 0x2f200c: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2f200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2f2010: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2f2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2014: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2F2014u;
    SET_GPR_U32(ctx, 31, 0x2F201Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2F2014u, 0x2F201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F201Cu;
label_2f201c:
    // 0x2f201c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f2020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2024: 0x0  nop
    ctx->pc = 0x2f2024u;
    // NOP
    // 0x2f2028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f202c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2f202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2f2030: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f2030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f2034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2038: 0x0  nop
    ctx->pc = 0x2f2038u;
    // NOP
    // 0x2f203c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2f203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2f2040: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f2040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2048: 0x0  nop
    ctx->pc = 0x2f2048u;
    // NOP
    // 0x2f204c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2f204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2f2050: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2f2050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2f2054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2058: 0x0  nop
    ctx->pc = 0x2f2058u;
    // NOP
    // 0x2f205c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2f205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2f2060: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2f2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2f2064: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f2064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f2068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f206c: 0x0  nop
    ctx->pc = 0x2f206cu;
    // NOP
    // 0x2f2070: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f2074: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2f2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2f2078: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2f207c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2080: 0x0  nop
    ctx->pc = 0x2f2080u;
    // NOP
    // 0x2f2084: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f2084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f2088: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2f2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2f208c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f2090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2094: 0x0  nop
    ctx->pc = 0x2f2094u;
    // NOP
    // 0x2f2098: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f2098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f209c: 0xa2000138  sb          $zero, 0x138($s0)
    ctx->pc = 0x2f209cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f20a0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f20a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20a8: 0x0  nop
    ctx->pc = 0x2f20a8u;
    // NOP
    // 0x2f20ac: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f20acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f20b0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f20b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f20b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f20b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20bc: 0x0  nop
    ctx->pc = 0x2f20bcu;
    // NOP
    // 0x2f20c0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f20c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f20c4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2f20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2f20c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f20cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f20ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f20d0: 0x0  nop
    ctx->pc = 0x2f20d0u;
    // NOP
    // 0x2f20d4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2f20d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2f20d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F20D8u;
    SET_GPR_U32(ctx, 31, 0x2F20E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F20D8u, 0x2F20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20E0u;
label_2f20e0:
    // 0x2f20e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f20e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f20e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f20e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f20ec: 0x0  nop
    ctx->pc = 0x2f20ecu;
    // NOP
    // 0x2f20f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f20f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f20f4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2f20f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2f20f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F20F8u;
    SET_GPR_U32(ctx, 31, 0x2F2100u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F20F8u, 0x2F2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2100u;
label_2f2100:
    // 0x2f2100: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2f2100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2f2104: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2f2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2f2108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f2108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f210c: 0x0  nop
    ctx->pc = 0x2f210cu;
    // NOP
    // 0x2f2110: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f2110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2114: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2f2114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2f2118:
    // 0x2f2118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f211c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2120: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2f2124: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f2128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f2128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f212c: 0x0  nop
    ctx->pc = 0x2f212cu;
    // NOP
    // 0x2f2130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f2130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f2134: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f2134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f2138: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2f2138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2f213c: 0x0  nop
    ctx->pc = 0x2f213cu;
    // NOP
label_2f2140:
    // 0x2f2140: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2f2140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f2144: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x2F2144u;
    {
        const bool branch_taken_0x2f2144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2144) {
            ctx->pc = 0x2F1DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1db4;
        }
    }
    ctx->pc = 0x2F214Cu;
    // 0x2f214c: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2f214cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2150: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f2150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2154: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f2154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2158: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f2158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f215c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f215cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f216c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f216cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2170: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f2174: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F217Cu;
}
