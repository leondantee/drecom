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

// Function: entry_002efa98
// Address: 0x2efa98 - 0x2efc7c
void entry_002efa98_0x2efa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efa98_0x2efa98");
#endif

    switch (ctx->pc) {
        case 0x2efb9cu: goto label_2efb9c;
        default: break;
    }

    ctx->pc = 0x2efa98u;

    // 0x2efa98: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2efa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2efa9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efaa0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2efaa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2efaa4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2efaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2efaa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efaac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efaacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efab0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2efab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2efab4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efab8: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x2efab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x2efabc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efac0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2efac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2efac4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2efac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2efac8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2efac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2efacc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efad0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2efad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2efad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efad8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2efad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efadc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2efadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2efae0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efae4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efae8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efaec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efaf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efaf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efaf8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2efaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efafc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2efafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2efb00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efb08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efb0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efb10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efb14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efb18: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2efb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2efb1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2efb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2efb20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb24: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efb28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efb2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efb30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efb34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efb38: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2efb38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2efb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2efb40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2efb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2efb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2efb48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2efb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2efb4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2efb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2efb50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2efb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2efb54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2efb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2efb58: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2efb58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2efb5c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2efb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2efb60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efb64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efb68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efb6c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2efb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2efb70: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2efb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x2efb74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2efb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efb78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2efb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2efb7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efb80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2efb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2efb84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2efb88: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2efb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2efb8c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2efb8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2efb90: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2efb90u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2efb94: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2EFB94u;
    SET_GPR_U32(ctx, 31, 0x2EFB9Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2EFB94u, 0x2EFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB9Cu;
label_2efb9c:
    // 0x2efb9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2efb9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2efba0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2efba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2efba4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2efba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2efba8: 0x12030034  beq         $s0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EFBA8u;
    {
        const bool branch_taken_0x2efba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efba8) {
            ctx->pc = 0x2EFC7Cu;
            return;
        }
    }
    ctx->pc = 0x2EFBB0u;
    // 0x2efbb0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2efbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2efbb4: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x2efbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efbb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efbbc: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x2efbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efbc0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efbc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efbc8: 0x0  nop
    ctx->pc = 0x2efbc8u;
    // NOP
    // 0x2efbcc: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2efbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2efbd0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efbd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efbd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efbd8: 0x0  nop
    ctx->pc = 0x2efbd8u;
    // NOP
    // 0x2efbdc: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2efbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2efbe0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efbe8: 0x0  nop
    ctx->pc = 0x2efbe8u;
    // NOP
    // 0x2efbec: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2efbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2efbf0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2efbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2efbf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efbf8: 0x0  nop
    ctx->pc = 0x2efbf8u;
    // NOP
    // 0x2efbfc: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2efbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2efc00: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc04: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2efc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2efc08: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2efc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2efc0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2efc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2efc10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2efc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efc14: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2efc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efc18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2efc1c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2efc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2efc20: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2efc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc24: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2efc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2efc28: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2efc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc2c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2efc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2efc30: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2efc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc34: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2efc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2efc38: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2efc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2efc3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2efc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc40: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2efc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2efc44: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2efc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2efc48: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2efc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc4c: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2efc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2efc50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2efc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2efc54: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2efc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc58: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2efc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2efc5c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2efc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2efc60: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2efc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2efc64: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2efc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2efc68: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2efc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2efc6c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2efc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2efc70: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2efc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x2efc74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EFC74u;
    {
        const bool branch_taken_0x2efc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc74) {
            ctx->pc = 0x2EFC84u;
            return;
        }
    }
    ctx->pc = 0x2EFC7Cu;
}
