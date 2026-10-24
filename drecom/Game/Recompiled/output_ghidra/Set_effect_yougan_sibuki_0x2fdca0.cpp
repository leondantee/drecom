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

// Function: Set_effect_yougan_sibuki
// Address: 0x2fdca0 - 0x2fe010
void Set_effect_yougan_sibuki_0x2fdca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_yougan_sibuki_0x2fdca0");
#endif

    switch (ctx->pc) {
        case 0x2fdd24u: goto label_2fdd24;
        case 0x2fddb8u: goto label_2fddb8;
        case 0x2fde6cu: goto label_2fde6c;
        case 0x2fdf00u: goto label_2fdf00;
        default: break;
    }

    ctx->pc = 0x2fdca0u;

    // 0x2fdca0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2fdca4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2fdca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2fdca8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2fdca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2fdcac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2fdcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2fdcb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fdcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2fdcb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fdcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fdcb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fdcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fdcbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fdcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fdcc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fdcc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fdcc8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2fdcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2fdccc: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x2fdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x2fdcd0: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x2fdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x2fdcd4: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x2fdcd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2fdcd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fdcd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdcdc: 0x0  nop
    ctx->pc = 0x2fdcdcu;
    // NOP
    // 0x2fdce0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fdce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fdce4: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x2fdce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fdce8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2fdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fdcec: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2FDCECu;
    {
        const bool branch_taken_0x2fdcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdcec) {
            ctx->pc = 0x2FDE14u;
            goto label_2fde14;
        }
    }
    ctx->pc = 0x2FDCF4u;
    // 0x2fdcf4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2fdcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2fdcf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fdcf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fdcfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fdcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fdd00: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fdd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fdd04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fdd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fdd08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fdd08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fdd0c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fdd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fdd10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fdd10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdd14: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2fdd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fdd18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fdd18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdd1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FDD1Cu;
    SET_GPR_U32(ctx, 31, 0x2FDD24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FDD1Cu, 0x2FDD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD24u;
label_2fdd24:
    // 0x2fdd24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd28: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2fdd2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd34: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2fdd34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fdd3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd44: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2fdd44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fdd48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd4c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd50: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2fdd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd58: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd5c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2fdd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd68: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2fdd68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd74: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2fdd74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd80: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2fdd80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd8c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2fdd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdd94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdd98: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2fdd98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdd9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdda0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdda4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2fdda4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdda8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fddac: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2fddacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fddb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FDDB0u;
    SET_GPR_U32(ctx, 31, 0x2FDDB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FDDB0u, 0x2FDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDB8u;
label_2fddb8:
    // 0x2fddb8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fddb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fddbc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2fddbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2fddc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fddc4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2fddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fddc8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fddcc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fddd0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDDD0u;
    {
        const bool branch_taken_0x2fddd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fddd0) {
            ctx->pc = 0x2FDDE4u;
            goto label_2fdde4;
        }
    }
    ctx->pc = 0x2FDDD8u;
    // 0x2fddd8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2fddd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDDDCu;
    {
        const bool branch_taken_0x2fdddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdddc) {
            ctx->pc = 0x2FDE00u;
            goto label_2fde00;
        }
    }
    ctx->pc = 0x2FDDE4u;
label_2fdde4:
    // 0x2fdde4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdde8: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fddec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fddf0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fddf4: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x2fddf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2fddf8: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2fddf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fddfc: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2fddfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2fde00:
    // 0x2fde00: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fde00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fde04: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2fde04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2fde08: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2fde08u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fde0c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2FDE0Cu;
    {
        const bool branch_taken_0x2fde0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde0c) {
            ctx->pc = 0x2FDF58u;
            goto label_2fdf58;
        }
    }
    ctx->pc = 0x2FDE14u;
label_2fde14:
    // 0x2fde14: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2fde14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2fde18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fde18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fde1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fde1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fde20: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2fde20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2fde24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fde24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fde28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fde28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fde2c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fde2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fde30: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2fde30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fde34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2fde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fde38: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2fde38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2fde3c: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2fde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2fde40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fde44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fde48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fde48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fde4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fde4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fde50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fde50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fde54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fde54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fde58: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fde58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fde5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fde5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fde60: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fde64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FDE64u;
    SET_GPR_U32(ctx, 31, 0x2FDE6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FDE64u, 0x2FDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE6Cu;
label_2fde6c:
    // 0x2fde6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde70: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2fde74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde78: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde7c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2fde7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fde80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fde80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fde84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde8c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2fde8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fde90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fde94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fde94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fde98: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2fde98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fde9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdea0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdea4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2fdea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdea8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdeac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdeb0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2fdeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdeb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdeb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdebc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2fdebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdec0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdec4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdec8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2fdec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdecc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fded0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fded0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fded4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2fded4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fded8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fded8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdedc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdee0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2fdee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdee4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdee8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdeec: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2fdeecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fdef0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdef4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2fdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2fdef8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FDEF8u;
    SET_GPR_U32(ctx, 31, 0x2FDF00u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FDEF8u, 0x2FDF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF00u;
label_2fdf00:
    // 0x2fdf00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf04: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2fdf04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2fdf08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf0c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2fdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fdf14: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fdf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fdf18: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF18u;
    {
        const bool branch_taken_0x2fdf18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fdf18) {
            ctx->pc = 0x2FDF2Cu;
            goto label_2fdf2c;
        }
    }
    ctx->pc = 0x2FDF20u;
    // 0x2fdf20: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2fdf20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fdf24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FDF24u;
    {
        const bool branch_taken_0x2fdf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf24) {
            ctx->pc = 0x2FDF48u;
            goto label_2fdf48;
        }
    }
    ctx->pc = 0x2FDF2Cu;
label_2fdf2c:
    // 0x2fdf2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf30: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fdf30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf34: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2fdf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf38: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2fdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf3c: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x2fdf3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2fdf40: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x2fdf40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fdf44: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x2fdf44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2fdf48:
    // 0x2fdf48: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fdf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf4c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2fdf4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2fdf50: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2fdf50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf54: 0x0  nop
    ctx->pc = 0x2fdf54u;
    // NOP
label_2fdf58:
    // 0x2fdf58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fdf5c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fdf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fdf60: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FDF60u;
    {
        const bool branch_taken_0x2fdf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fdf60) {
            ctx->pc = 0x2FDFE0u;
            goto label_2fdfe0;
        }
    }
    ctx->pc = 0x2FDF68u;
    // 0x2fdf68: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2fdf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2fdf6c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2fdf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fdf70: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf78: 0x0  nop
    ctx->pc = 0x2fdf78u;
    // NOP
    // 0x2fdf7c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fdf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fdf80: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf84: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2fdf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2fdf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf8c: 0x0  nop
    ctx->pc = 0x2fdf8cu;
    // NOP
    // 0x2fdf90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fdf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fdf94: 0x3c0342bc  lui         $v1, 0x42BC
    ctx->pc = 0x2fdf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17084 << 16));
    // 0x2fdf98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdf98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf9c: 0x0  nop
    ctx->pc = 0x2fdf9cu;
    // NOP
    // 0x2fdfa0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fdfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fdfa4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2fdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2fdfa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdfa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdfac: 0x0  nop
    ctx->pc = 0x2fdfacu;
    // NOP
    // 0x2fdfb0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fdfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fdfb4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2fdfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdfb8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fdfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fdfbc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2fdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2fdfc0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2fdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2fdfc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fdfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdfc8: 0xa203011e  sb          $v1, 0x11E($s0)
    ctx->pc = 0x2fdfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fdfcc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2fdfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2fdfd0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2fdfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2fdfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fdfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdfd8: 0x0  nop
    ctx->pc = 0x2fdfd8u;
    // NOP
    // 0x2fdfdc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2fdfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_2fdfe0:
    // 0x2fdfe0: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2fdfe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fdfe4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2fdfe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fdfe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fdfe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fdfec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fdfecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fdff0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fdff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fdff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fdff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fdff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe004: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2fe004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2fe008: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE010u;
}
