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

// Function: entry_0021cdf4
// Address: 0x21cdf4 - 0x21cf90
void entry_0021cdf4_0x21cdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cdf4_0x21cdf4");
#endif

    switch (ctx->pc) {
        case 0x21cf0cu: goto label_21cf0c;
        default: break;
    }

    ctx->pc = 0x21cdf4u;

    // 0x21cdf4: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x21cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x21cdf8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21cdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cdfc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21cdfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21ce00: 0x32a2000f  andi        $v0, $s5, 0xF
    ctx->pc = 0x21ce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x21ce04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ce08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ce0c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x21ce10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce14: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x21ce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x21ce18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ce1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ce20: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x21ce24: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x21ce24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21ce28: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x21ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x21ce2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ce2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce30: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x21ce34: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x21ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x21ce38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21ce3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ce44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce48: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ce4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21ce50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ce60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ce64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ce68: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ce70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ce80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ce80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ce84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ce88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x21ce8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ce90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ce90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ce94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ce98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21ce9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21cea0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21cea4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21cea8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x21cea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ceac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ceb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ceb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21ceb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21cebc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21cec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21cec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21cec8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x21cec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x21cecc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ced0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ced4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ced8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ced8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21cedc: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x21cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x21cee0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x21cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x21cee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21cee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cee8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21ceec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21cef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21cef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21cef8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cefc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x21cefcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21cf00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x21cf00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x21cf04: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x21CF04u;
    SET_GPR_U32(ctx, 31, 0x21CF0Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x21CF04u, 0x21CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF0Cu;
label_21cf0c:
    // 0x21cf0c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21cf0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21cf10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21cf14: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21cf18: 0x12030049  beq         $s0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x21CF18u;
    {
        const bool branch_taken_0x21cf18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21cf18) {
            ctx->pc = 0x21D040u;
            return;
        }
    }
    ctx->pc = 0x21CF20u;
    // 0x21cf20: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21cf24: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x21cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cf28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cf2c: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x21cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x21cf30: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x21cf30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21cf34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21cf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21cf38: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21CF38u;
    {
        const bool branch_taken_0x21cf38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cf38) {
            ctx->pc = 0x21CF90u;
            return;
        }
    }
    ctx->pc = 0x21CF40u;
    // 0x21cf40: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf48: 0x0  nop
    ctx->pc = 0x21cf48u;
    // NOP
    // 0x21cf4c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21cf50: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf58: 0x0  nop
    ctx->pc = 0x21cf58u;
    // NOP
    // 0x21cf5c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21cf60: 0x3c034364  lui         $v1, 0x4364
    ctx->pc = 0x21cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17252 << 16));
    // 0x21cf64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf68: 0x0  nop
    ctx->pc = 0x21cf68u;
    // NOP
    // 0x21cf6c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21cf6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21cf70: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cf74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf78: 0x0  nop
    ctx->pc = 0x21cf78u;
    // NOP
    // 0x21cf7c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21cf80: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf84: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21cf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x21cf88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21CF88u;
    {
        const bool branch_taken_0x21cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf88) {
            ctx->pc = 0x21CFE4u;
            return;
        }
    }
    ctx->pc = 0x21CF90u;
}
