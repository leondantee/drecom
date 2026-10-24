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

// Function: entry_0023bb7c
// Address: 0x23bb7c - 0x23bd1c
void entry_0023bb7c_0x23bb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bb7c_0x23bb7c");
#endif

    switch (ctx->pc) {
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bd00u: goto label_23bd00;
        default: break;
    }

    ctx->pc = 0x23bb7cu;

    // 0x23bb7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb80: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb84: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb8c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23bb90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23bb94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23bb98: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23bb9c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23bba0: 0xc05c848  jal         func_172120
    ctx->pc = 0x23BBA0u;
    SET_GPR_U32(ctx, 31, 0x23BBA8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23BBA0u, 0x23BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBA8u;
label_23bba8:
    // 0x23bba8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23bbac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbb0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bbb4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x23bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bbb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23bbb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bbbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23BBBCu;
    SET_GPR_U32(ctx, 31, 0x23BBC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23BBBCu, 0x23BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBC4u;
label_23bbc4:
    // 0x23bbc4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23bbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23bbcc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbd0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23bbd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23BBD4u;
    SET_GPR_U32(ctx, 31, 0x23BBDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23BBD4u, 0x23BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBDCu;
label_23bbdc:
    // 0x23bbdc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbe0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23BBE0u;
    SET_GPR_U32(ctx, 31, 0x23BBE8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23BBE0u, 0x23BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBE8u;
label_23bbe8:
    // 0x23bbe8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23bbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23bbf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23bbf4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23bbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23bbf8: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23BBF8u;
    {
        const bool branch_taken_0x23bbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbf8) {
            ctx->pc = 0x23BDCCu;
            return;
        }
    }
    ctx->pc = 0x23BC00u;
    // 0x23bc00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bc04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bc08: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bc0c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23bc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc14: 0x0  nop
    ctx->pc = 0x23bc14u;
    // NOP
    // 0x23bc18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23bc1c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23bc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc24: 0x0  nop
    ctx->pc = 0x23bc24u;
    // NOP
    // 0x23bc28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23bc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc30: 0x0  nop
    ctx->pc = 0x23bc30u;
    // NOP
    // 0x23bc34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23bc38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23bc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc40: 0x0  nop
    ctx->pc = 0x23bc40u;
    // NOP
    // 0x23bc44: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23bc48: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23bc4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc50: 0x0  nop
    ctx->pc = 0x23bc50u;
    // NOP
    // 0x23bc54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23bc58: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x23bc58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bc5c: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x23bc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bc60: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x23bc60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bc64: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bc68: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23bc6c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23BC6Cu;
    SET_GPR_U32(ctx, 31, 0x23BC74u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23BC6Cu, 0x23BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC74u;
label_23bc74:
    // 0x23bc74: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23BC74u;
    {
        const bool branch_taken_0x23bc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc74) {
            ctx->pc = 0x23BDCCu;
            return;
        }
    }
    ctx->pc = 0x23BC7Cu;
    // 0x23bc7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc80: 0x0  nop
    ctx->pc = 0x23bc80u;
    // NOP
    // 0x23bc84: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23bc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23bc88: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23bc8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc90: 0x0  nop
    ctx->pc = 0x23bc90u;
    // NOP
    // 0x23bc94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23bc98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc9c: 0x0  nop
    ctx->pc = 0x23bc9cu;
    // NOP
    // 0x23bca0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23bca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23bca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bcac: 0x0  nop
    ctx->pc = 0x23bcacu;
    // NOP
    // 0x23bcb0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23bcb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bcb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23bcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bcbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23bcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23bcc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23bcc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23bcc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23bccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23bcd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bcd4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23bcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23bcd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bcdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bce0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23bce4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bce8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23bce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bcec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23bcecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bcf0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23BCF0u;
    SET_GPR_U32(ctx, 31, 0x23BCF8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23BCF0u, 0x23BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCF8u;
label_23bcf8:
    // 0x23bcf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BCF8u;
    SET_GPR_U32(ctx, 31, 0x23BD00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BCF8u, 0x23BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BD00u;
    {
        const bool branch_taken_0x23bd00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23bd00) {
            ctx->pc = 0x23BD1Cu;
            return;
        }
    }
    ctx->pc = 0x23BD08u;
    // 0x23bd08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bd0c: 0x0  nop
    ctx->pc = 0x23bd0cu;
    // NOP
    // 0x23bd10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23bd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23bd14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23BD14u;
    {
        const bool branch_taken_0x23bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd14) {
            ctx->pc = 0x23BD38u;
            return;
        }
    }
    ctx->pc = 0x23BD1Cu;
}
