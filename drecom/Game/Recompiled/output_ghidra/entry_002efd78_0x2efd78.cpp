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

// Function: entry_002efd78
// Address: 0x2efd78 - 0x2eff5c
void entry_002efd78_0x2efd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efd78_0x2efd78");
#endif

    switch (ctx->pc) {
        case 0x2efe7cu: goto label_2efe7c;
        default: break;
    }

    ctx->pc = 0x2efd78u;

    // 0x2efd78: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2efd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2efd7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efd80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2efd80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2efd84: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2efd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2efd88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efd8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efd8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efd90: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2efd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2efd94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efd98: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x2efd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x2efd9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efda0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2efda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2efda4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2efda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2efda8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2efda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2efdac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2efdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2efdb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdb8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2efdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efdbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2efdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2efdc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efdc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efdc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efdcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efdd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efdd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efdd8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2efdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efddc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2efddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2efde0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efde4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efde8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efdec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efdf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efdf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efdf8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2efdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2efdfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2efdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2efe00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efe08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efe0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efe10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efe14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efe18: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2efe18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2efe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efe20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efe28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efe2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efe30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efe34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efe34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efe38: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2efe38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2efe3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2efe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2efe40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efe44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efe48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efe4c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2efe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2efe50: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x2efe54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efe58: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2efe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2efe5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efe60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efe64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efe68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2efe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efe6c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2efe6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efe70: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2efe70u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2efe74: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2EFE74u;
    SET_GPR_U32(ctx, 31, 0x2EFE7Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EFE74u, 0x2EFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE7Cu;
label_2efe7c:
    // 0x2efe7c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2efe7cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2efe80: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2efe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2efe84: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2efe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2efe88: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EFE88u;
    {
        const bool branch_taken_0x2efe88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efe88) {
            ctx->pc = 0x2EFF5Cu;
            return;
        }
    }
    ctx->pc = 0x2EFE90u;
    // 0x2efe90: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2efe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2efe94: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x2efe94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efe98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efe9c: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x2efe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efea0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2efea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2efea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efea8: 0x0  nop
    ctx->pc = 0x2efea8u;
    // NOP
    // 0x2efeac: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2efeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2efeb0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2efeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efeb8: 0x0  nop
    ctx->pc = 0x2efeb8u;
    // NOP
    // 0x2efebc: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2efebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2efec0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efec8: 0x0  nop
    ctx->pc = 0x2efec8u;
    // NOP
    // 0x2efecc: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2efeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2efed0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efed8: 0x0  nop
    ctx->pc = 0x2efed8u;
    // NOP
    // 0x2efedc: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2efedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2efee0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efee4: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2efee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2efee8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2efee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2efeec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2efeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2efef0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2efef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efef4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efef8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2efefc: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2efefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2eff00: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff04: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2eff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2eff08: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff0c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2eff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2eff10: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2eff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff14: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2eff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2eff18: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2eff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff20: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2eff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2eff24: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff28: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2eff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff2c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2eff2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2eff30: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2eff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eff34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2eff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff38: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2eff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2eff3c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2eff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eff40: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2eff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2eff44: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2eff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2eff48: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2eff48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eff4c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eff50: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2eff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x2eff54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFF54u;
    {
        const bool branch_taken_0x2eff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff54) {
            ctx->pc = 0x2EFF64u;
            return;
        }
    }
    ctx->pc = 0x2EFF5Cu;
}
