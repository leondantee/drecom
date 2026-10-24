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

// Function: entry_002f1988
// Address: 0x2f1988 - 0x2f1af0
void entry_002f1988_0x2f1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1988_0x2f1988");
#endif

    switch (ctx->pc) {
        case 0x2f1994u: goto label_2f1994;
        case 0x2f19c4u: goto label_2f19c4;
        case 0x2f1a28u: goto label_2f1a28;
        case 0x2f1ac4u: goto label_2f1ac4;
        default: break;
    }

    ctx->pc = 0x2f1988u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x2F1AF0u;
}
