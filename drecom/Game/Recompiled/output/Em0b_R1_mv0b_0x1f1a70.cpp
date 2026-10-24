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

// Function: Em0b_R1_mv0b
// Address: 0x1f1a70 - 0x1f2658
void Em0b_R1_mv0b_0x1f1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv0b_0x1f1a70");
#endif

    switch (ctx->pc) {
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1c3cu: goto label_1f1c3c;
        case 0x1f1c60u: goto label_1f1c60;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d20u: goto label_1f1d20;
        case 0x1f1d38u: goto label_1f1d38;
        case 0x1f1d48u: goto label_1f1d48;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1dd8u: goto label_1f1dd8;
        case 0x1f1eb8u: goto label_1f1eb8;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f34u: goto label_1f1f34;
        case 0x1f1f70u: goto label_1f1f70;
        case 0x1f2058u: goto label_1f2058;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f21b4u: goto label_1f21b4;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c4u: goto label_1f22c4;
        case 0x1f234cu: goto label_1f234c;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f2390u: goto label_1f2390;
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23ccu: goto label_1f23cc;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f2430u: goto label_1f2430;
        case 0x1f2488u: goto label_1f2488;
        case 0x1f249cu: goto label_1f249c;
        default: break;
    }

    ctx->pc = 0x1f1a70u;

    // 0x1f1a70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f1a74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f1a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f1a78: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1f1a7c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1a80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1a84: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1a88: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f1a8c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1F1A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A94u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1F1A8Cu, 0x1F1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A94u;
label_1f1a94:
    // 0x1f1a94: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1f1a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1f1a98: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1A98u;
    SET_GPR_U32(ctx, 31, 0x1F1AA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1A98u, 0x1F1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA0u;
label_1f1aa0:
    // 0x1f1aa0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1aa4: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x1f1aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1f1aa8: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1f1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1f1aac: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f1aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f1ab0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f1ab4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ab8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1abc: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x1f1abcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f1ac0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ac4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f1ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f1ac8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1f1ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1acc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1ad0: 0x10c30268  beq         $a2, $v1, . + 4 + (0x268 << 2)
    ctx->pc = 0x1F1AD0u;
    {
        const bool branch_taken_0x1f1ad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1ad0) {
            ctx->pc = 0x1F2474u;
            goto label_1f2474;
        }
    }
    ctx->pc = 0x1F1AD8u;
    // 0x1f1ad8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1adc: 0x10c400dc  beq         $a2, $a0, . + 4 + (0xDC << 2)
    ctx->pc = 0x1F1ADCu;
    {
        const bool branch_taken_0x1f1adc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f1adc) {
            ctx->pc = 0x1F1E50u;
            goto label_1f1e50;
        }
    }
    ctx->pc = 0x1F1AE4u;
    // 0x1f1ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1ae8: 0x10c5005d  beq         $a2, $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1F1AE8u;
    {
        const bool branch_taken_0x1f1ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f1ae8) {
            ctx->pc = 0x1F1C60u;
            goto label_1f1c60;
        }
    }
    ctx->pc = 0x1F1AF0u;
    // 0x1f1af0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1AF0u;
    {
        const bool branch_taken_0x1f1af0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1af0) {
            ctx->pc = 0x1F1B00u;
            goto label_1f1b00;
        }
    }
    ctx->pc = 0x1F1AF8u;
    // 0x1f1af8: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x1F1AF8u;
    {
        const bool branch_taken_0x1f1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1af8) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F1B00u;
label_1f1b00:
    // 0x1f1b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f1b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b10: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f1b18: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x1f1b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x1f1b1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1b20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1b24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1B24u;
    SET_GPR_U32(ctx, 31, 0x1F1B2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1B24u, 0x1F1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B2Cu;
label_1f1b2c:
    // 0x1f1b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b30: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b34: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1b38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f1b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f1b3c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b44: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b48: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f1b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1b4c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x1f1b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x1f1b50: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b58: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b5c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b60: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f1b64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f1b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f1b78: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f1b7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1b88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1b8c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f1b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f1b90: 0x3c043bc9  lui         $a0, 0x3BC9
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1b94: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1f1b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1f1b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1b9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ba0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1ba4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f1ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f1ba8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bb0: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x1f1bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1bb4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1f1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1f1bb8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1f1bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bc0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bc4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1bc8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x1f1bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x1f1bcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f1bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bd4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bd8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f1bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1bdc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f1bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1f1be0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1be4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1be8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f1bec: 0x344200b8  ori         $v0, $v0, 0xB8
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)184);
    // 0x1f1bf0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f1bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1bf8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1bfc: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f1bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x1f1c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1c04: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c08: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1f1c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1f1c0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c10: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x1f1c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1c14: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1c18: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x1f1c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1f1c1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1c20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c24: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f1c28: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f1c2c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1f1c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1f1c30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1c30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1c34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1C34u;
    SET_GPR_U32(ctx, 31, 0x1F1C3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1C34u, 0x1F1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C3Cu;
label_1f1c3c:
    // 0x1f1c3c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c40: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1c44: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1f1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1f1c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f1c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1c4c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f1c50: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f1c54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1c54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1c58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1C58u;
    SET_GPR_U32(ctx, 31, 0x1F1C60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1C58u, 0x1F1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C60u;
label_1f1c60:
    // 0x1f1c60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1c64: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1c64u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1c68: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1c70: 0x0  nop
    ctx->pc = 0x1f1c70u;
    // NOP
    // 0x1f1c74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1c78: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1c7c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1c80: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c84: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c88: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1c8c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f1c90: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1c94: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1f1c94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f1c98: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1c9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f1ca0: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x1f1ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f1ca4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f1ca8: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x1f1ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1cac: 0xc4ad00d0  lwc1        $f13, 0xD0($a1)
    ctx->pc = 0x1f1cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1cb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1cb8: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x1f1cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1f1cbc: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f1cc0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x1F1CC0u;
    SET_GPR_U32(ctx, 31, 0x1F1CC8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x1F1CC0u, 0x1F1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC8u;
label_1f1cc8:
    // 0x1f1cc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ccc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1cccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1cd0: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1cd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1cd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1cd8: 0x0  nop
    ctx->pc = 0x1f1cd8u;
    // NOP
    // 0x1f1cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ce0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ce4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1ce8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1cec: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1f1cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1cf0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f1cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1cf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1cf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1CF8u;
    SET_GPR_U32(ctx, 31, 0x1F1D00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1CF8u, 0x1F1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D00u;
label_1f1d00:
    // 0x1f1d00: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d04: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f1d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f1d08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d0c: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x1f1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1d10: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1d14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1d14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1d18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1D18u;
    SET_GPR_U32(ctx, 31, 0x1F1D20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1D18u, 0x1F1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D20u;
label_1f1d20:
    // 0x1f1d20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d24: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1f1d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x1f1d28: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d2c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1d30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F1D30u;
    SET_GPR_U32(ctx, 31, 0x1F1D38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F1D30u, 0x1F1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D38u;
label_1f1d38:
    // 0x1f1d38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F1D40u;
    SET_GPR_U32(ctx, 31, 0x1F1D48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F1D40u, 0x1F1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D48u;
label_1f1d48:
    // 0x1f1d48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f1d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f1d54: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F1D54u;
    {
        const bool branch_taken_0x1f1d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d54) {
            ctx->pc = 0x1F1DDCu;
            goto label_1f1ddc;
        }
    }
    ctx->pc = 0x1F1D5Cu;
    // 0x1f1d5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1d60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d64: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f1d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1d68: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d6c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f1d74: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x1f1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x1f1d78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1d7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1d80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1D80u;
    SET_GPR_U32(ctx, 31, 0x1F1D88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1D80u, 0x1F1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D88u;
label_1f1d88:
    // 0x1f1d88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1d88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1d8c: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x1f1d90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1d90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1d94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1d98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1d9c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f1da0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1da8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1dac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1db0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f1db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f1db4: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x1f1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
    // 0x1f1db8: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1f1db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1f1dbc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1dc0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1dc4: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x1f1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x1f1dc8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1dcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1dccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1dd0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1DD0u;
    SET_GPR_U32(ctx, 31, 0x1F1DD8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1DD0u, 0x1F1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DD8u;
label_1f1dd8:
    // 0x1f1dd8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1dd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f1ddc:
    // 0x1f1ddc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1de0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1de4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1de8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1df0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f1df4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1df8: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x1f1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1dfc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f1e00: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f1e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f1e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e08: 0x0  nop
    ctx->pc = 0x1f1e08u;
    // NOP
    // 0x1f1e0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1e10: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x1f1e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x1f1e14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e18: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1e1c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1f1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1e20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1e20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e24: 0x0  nop
    ctx->pc = 0x1f1e24u;
    // NOP
    // 0x1f1e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f1e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1e2c: 0x0  nop
    ctx->pc = 0x1f1e2cu;
    // NOP
    // 0x1f1e30: 0x450101bd  bc1t        . + 4 + (0x1BD << 2)
    ctx->pc = 0x1F1E30u;
    {
        const bool branch_taken_0x1f1e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1e30) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F1E38u;
    // 0x1f1e38: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e40: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e44: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f1e48: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1F1E48u;
    {
        const bool branch_taken_0x1f1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e48) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F1E50u;
label_1f1e50:
    // 0x1f1e50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1e54: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1e54u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1e58: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e60: 0x0  nop
    ctx->pc = 0x1f1e60u;
    // NOP
    // 0x1f1e64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1e68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1e6c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1e70: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x1f1e74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f1e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f1e78: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1f1e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f1e7c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e80: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e88: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x1f1e8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1e90: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1f1e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f1e94: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f1e98: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1e9c: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x1f1e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1ea0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ea4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1ea8: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1f1eac: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f1eb0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x1F1EB0u;
    SET_GPR_U32(ctx, 31, 0x1F1EB8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x1F1EB0u, 0x1F1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EB8u;
label_1f1eb8:
    // 0x1f1eb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ebc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f1ebcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1ec0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f1ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1ec8: 0x0  nop
    ctx->pc = 0x1f1ec8u;
    // NOP
    // 0x1f1ecc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ed0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1ed4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x1f1ed8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1edc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1ee0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f1ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ee4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1ee4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1ee8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1EE8u;
    SET_GPR_U32(ctx, 31, 0x1F1EF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1EE8u, 0x1F1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EF0u;
label_1f1ef0:
    // 0x1f1ef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1ef4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f1ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f1ef8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1efc: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1f1efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1f00: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1f1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1f04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1f04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1f08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1F08u;
    SET_GPR_U32(ctx, 31, 0x1F1F10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1F08u, 0x1F1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f14: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f1f18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f1c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f1f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1f20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F1F20u;
    SET_GPR_U32(ctx, 31, 0x1F1F28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F1F20u, 0x1F1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F28u;
label_1f1f28:
    // 0x1f1f28: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f2c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F1F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F34u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F1F2Cu, 0x1F1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F34u;
label_1f1f34:
    // 0x1f1f34: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f38: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x1f1f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x1f1f3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1FD4u;
            goto label_1f1fd4;
        }
    }
    ctx->pc = 0x1F1F44u;
    // 0x1f1f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1f48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f4c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f1f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1f50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f54: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f1f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f1f5c: 0x24063c29  addiu       $a2, $zero, 0x3C29
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15401));
    // 0x1f1f60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1f64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f1f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f1f68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F1F68u;
    SET_GPR_U32(ctx, 31, 0x1F1F70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F1F68u, 0x1F1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F70u;
label_1f1f70:
    // 0x1f1f70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1f7c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1f80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f1f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1f8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1f90: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f1f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f1f94: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1f1f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1f9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fa0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fa4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f1fa8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f1fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1fb0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fb8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f1fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f1fbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fc0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1fc4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f1fc8: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f1fcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f1fd0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1f1fd4:
    // 0x1f1fd4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fd8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f1fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f1fdc: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x1F1FDCu;
    {
        const bool branch_taken_0x1f1fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fdc) {
            ctx->pc = 0x1F239Cu;
            goto label_1f239c;
        }
    }
    ctx->pc = 0x1F1FE4u;
    // 0x1f1fe4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1fe8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f1fec: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f1ff0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1f1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1f1ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1ff8: 0x0  nop
    ctx->pc = 0x1f1ff8u;
    // NOP
    // 0x1f1ffc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f1ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f2000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2004: 0x0  nop
    ctx->pc = 0x1f2004u;
    // NOP
    // 0x1f2008: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f2008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f200c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f200cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2010: 0x0  nop
    ctx->pc = 0x1f2010u;
    // NOP
    // 0x1f2014: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f2014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f2018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2020: 0x0  nop
    ctx->pc = 0x1f2020u;
    // NOP
    // 0x1f2024: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f2024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f2028: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f202c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f202cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2030: 0x0  nop
    ctx->pc = 0x1f2030u;
    // NOP
    // 0x1f2034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f2038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f203c: 0xa7a20084  sh          $v0, 0x84($sp)
    ctx->pc = 0x1f203cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2040: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f2040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2044: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f2044u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2048: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f204c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2050: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F2050u;
    SET_GPR_U32(ctx, 31, 0x1F2058u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F2050u, 0x1F2058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2058u;
label_1f2058:
    // 0x1f2058: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F2058u;
    {
        const bool branch_taken_0x1f2058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2058) {
            ctx->pc = 0x1F21C4u;
            goto label_1f21c4;
        }
    }
    ctx->pc = 0x1F2060u;
    // 0x1f2060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2064: 0x0  nop
    ctx->pc = 0x1f2064u;
    // NOP
    // 0x1f2068: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f2068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f206c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f206cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2070: 0x0  nop
    ctx->pc = 0x1f2070u;
    // NOP
    // 0x1f2074: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f207c: 0x0  nop
    ctx->pc = 0x1f207cu;
    // NOP
    // 0x1f2080: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f2080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f2084: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f208c: 0x0  nop
    ctx->pc = 0x1f208cu;
    // NOP
    // 0x1f2090: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f2090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f2094: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2098: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f2098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f209c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f209cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f20a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f20a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f20a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f20a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f20a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f20a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f20ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f20acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f20b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f20b4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f20b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f20b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f20bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f20c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f20c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f20c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f20c8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f20cc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f20ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f20d0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F20D0u;
    SET_GPR_U32(ctx, 31, 0x1F20D8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F20D0u, 0x1F20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20D8u;
label_1f20d8:
    // 0x1f20d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F20D8u;
    SET_GPR_U32(ctx, 31, 0x1F20E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F20D8u, 0x1F20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20E0u;
label_1f20e0:
    // 0x1f20e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F20E0u;
    {
        const bool branch_taken_0x1f20e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f20e0) {
            ctx->pc = 0x1F20FCu;
            goto label_1f20fc;
        }
    }
    ctx->pc = 0x1F20E8u;
    // 0x1f20e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f20ec: 0x0  nop
    ctx->pc = 0x1f20ecu;
    // NOP
    // 0x1f20f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f20f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f20f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F20F4u;
    {
        const bool branch_taken_0x1f20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f20f4) {
            ctx->pc = 0x1F2118u;
            goto label_1f2118;
        }
    }
    ctx->pc = 0x1F20FCu;
label_1f20fc:
    // 0x1f20fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1f20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f2100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f2100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f2104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f2108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f210c: 0x0  nop
    ctx->pc = 0x1f210cu;
    // NOP
    // 0x1f2110: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f2110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f2114: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f2114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f2118:
    // 0x1f2118: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f211c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f211cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2120: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2124: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2128: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f2128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f212c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f212cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f2130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f2130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2134: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f2138: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f213c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2140: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2144: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f2148: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f214c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f2150: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f2154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2158: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f2158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f215c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f215cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2160: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F2160u;
    SET_GPR_U32(ctx, 31, 0x1F2168u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F2160u, 0x1F2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2168u;
label_1f2168:
    // 0x1f2168: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f2168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f216c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f2170: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2170u;
    SET_GPR_U32(ctx, 31, 0x1F2178u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2170u, 0x1F2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2178u;
label_1f2178:
    // 0x1f2178: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f2178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f217c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f2180: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2180u;
    SET_GPR_U32(ctx, 31, 0x1F2188u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2180u, 0x1F2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2188u;
label_1f2188:
    // 0x1f2188: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f218c: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1f2190: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x1f2190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1f2194: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2198: 0x24050511  addiu       $a1, $zero, 0x511
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f219c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f219cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f21a0: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f21a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f21a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f21a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f21a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f21ac: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F21ACu;
    SET_GPR_U32(ctx, 31, 0x1F21B4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F21ACu, 0x1F21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21B4u;
label_1f21b4:
    // 0x1f21b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f21b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f21b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f21bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f21c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x1f21c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_1f21c4:
    // 0x1f21c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f21c8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1f21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1f21cc: 0x24630880  addiu       $v1, $v1, 0x880
    ctx->pc = 0x1f21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f21d0: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1f21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1f21d4: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1f21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1f21d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f21d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21dc: 0x0  nop
    ctx->pc = 0x1f21dcu;
    // NOP
    // 0x1f21e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f21e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f21e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f21e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21e8: 0x0  nop
    ctx->pc = 0x1f21e8u;
    // NOP
    // 0x1f21ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f21f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f21f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f21f4: 0x0  nop
    ctx->pc = 0x1f21f4u;
    // NOP
    // 0x1f21f8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f21f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f21fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2204: 0x0  nop
    ctx->pc = 0x1f2204u;
    // NOP
    // 0x1f2208: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f2208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f220c: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x1f220cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
    // 0x1f2210: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f2210u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2214: 0x0  nop
    ctx->pc = 0x1f2214u;
    // NOP
    // 0x1f2218: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1f2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f221c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f221cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2220: 0xa7a30084  sh          $v1, 0x84($sp)
    ctx->pc = 0x1f2220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2224: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x1f2224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2228: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x1f2228u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f222c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2230: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1f2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f2234: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F2234u;
    SET_GPR_U32(ctx, 31, 0x1F223Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F2234u, 0x1F223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F223Cu;
label_1f223c:
    // 0x1f223c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F223Cu;
    {
        const bool branch_taken_0x1f223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f223c) {
            ctx->pc = 0x1F239Cu;
            goto label_1f239c;
        }
    }
    ctx->pc = 0x1F2244u;
    // 0x1f2244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2248: 0x0  nop
    ctx->pc = 0x1f2248u;
    // NOP
    // 0x1f224c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f2250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2254: 0x0  nop
    ctx->pc = 0x1f2254u;
    // NOP
    // 0x1f2258: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f225c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2260: 0x0  nop
    ctx->pc = 0x1f2260u;
    // NOP
    // 0x1f2264: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f2264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f2268: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f2268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f226c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f226cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2270: 0x0  nop
    ctx->pc = 0x1f2270u;
    // NOP
    // 0x1f2274: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f2274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1f2278: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f227c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1f227cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2280: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f2280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f2284: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1f2284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2288: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x1f2288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x1f228c: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x1f228cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1f2290: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x1f2290u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1f2294: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1f2294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1f2298: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f229c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f22a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f22a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f22a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f22a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f22ac: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f22acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f22b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f22b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f22b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F22B4u;
    SET_GPR_U32(ctx, 31, 0x1F22BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F22B4u, 0x1F22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22BCu;
label_1f22bc:
    // 0x1f22bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F22BCu;
    SET_GPR_U32(ctx, 31, 0x1F22C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F22BCu, 0x1F22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C4u;
label_1f22c4:
    // 0x1f22c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F22C4u;
    {
        const bool branch_taken_0x1f22c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f22c4) {
            ctx->pc = 0x1F22E0u;
            goto label_1f22e0;
        }
    }
    ctx->pc = 0x1F22CCu;
    // 0x1f22cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f22ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f22d0: 0x0  nop
    ctx->pc = 0x1f22d0u;
    // NOP
    // 0x1f22d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f22d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f22d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F22D8u;
    {
        const bool branch_taken_0x1f22d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22d8) {
            ctx->pc = 0x1F22FCu;
            goto label_1f22fc;
        }
    }
    ctx->pc = 0x1F22E0u;
label_1f22e0:
    // 0x1f22e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1f22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f22e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f22e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f22e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f22ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f22ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f22f0: 0x0  nop
    ctx->pc = 0x1f22f0u;
    // NOP
    // 0x1f22f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f22f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f22f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f22f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f22fc:
    // 0x1f22fc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f22fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2304: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1f2304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f2308: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f230c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2310: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f2310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f2314: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2318: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f231c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f2320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f2320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2328: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f2328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f232c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2330: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f2334: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f2338: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2338u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f233c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1f233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f2340: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f2340u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2344: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F2344u;
    SET_GPR_U32(ctx, 31, 0x1F234Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F2344u, 0x1F234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F234Cu;
label_1f234c:
    // 0x1f234c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f2350: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f2350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f2354: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2354u;
    SET_GPR_U32(ctx, 31, 0x1F235Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2354u, 0x1F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F235Cu;
label_1f235c:
    // 0x1f235c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f235cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f2360: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f2360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f2364: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F2364u;
    SET_GPR_U32(ctx, 31, 0x1F236Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F2364u, 0x1F236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F236Cu;
label_1f236c:
    // 0x1f236c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2370: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f2374: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f2378: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f237c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f2380: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f2380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f2384: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f2384u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2388: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F2388u;
    SET_GPR_U32(ctx, 31, 0x1F2390u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F2388u, 0x1F2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2390u;
label_1f2390:
    // 0x1f2390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2394: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2398: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1f2398u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1f239c:
    // 0x1f239c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23a4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F23A4u;
    SET_GPR_U32(ctx, 31, 0x1F23ACu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F23ACu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23ACu) { return; }
    ctx->pc = 0x1F23ACu;
label_1f23ac:
    // 0x1f23ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f23b4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23c0: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x1f23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f23c4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F23C4u;
    SET_GPR_U32(ctx, 31, 0x1F23CCu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F23CCu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23CCu) { return; }
    ctx->pc = 0x1F23CCu;
label_1f23cc:
    // 0x1f23cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f23d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23d8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f23dc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1F23DCu;
    SET_GPR_U32(ctx, 31, 0x1F23E4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1F23E4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23E4u) { return; }
    ctx->pc = 0x1F23E4u;
label_1f23e4:
    // 0x1f23e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f23e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23e8: 0x0  nop
    ctx->pc = 0x1f23e8u;
    // NOP
    // 0x1f23ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f23f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f23f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23f4: 0x0  nop
    ctx->pc = 0x1f23f4u;
    // NOP
    // 0x1f23f8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f23fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2400: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2404: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f2404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f2408: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f240c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f240cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2410: 0x0  nop
    ctx->pc = 0x1f2410u;
    // NOP
    // 0x1f2414: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f2414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f2418: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f241c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1f241cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f2420: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f2424: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f2428: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F2428u;
    SET_GPR_U32(ctx, 31, 0x1F2430u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F2430u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F2430u) { return; }
    ctx->pc = 0x1F2430u;
label_1f2430:
    // 0x1f2430: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2434: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1f2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2438: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f243c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f243cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2440: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f2440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f2444: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2448: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f244c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1f244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2454: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f2458: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f245c: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x1f245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2460: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1f2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2464: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2468: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x1f2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x1f246c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1F246Cu;
    {
        const bool branch_taken_0x1f246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f246c) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F2474u;
label_1f2474:
    // 0x1f2474: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2478: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f2478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f247c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2480: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2480u;
    SET_GPR_U32(ctx, 31, 0x1F2488u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2480u, 0x1F2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2488u;
label_1f2488:
    // 0x1f2488: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1f2488u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f248c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x1f248cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2490: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1f2490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f2494: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2494u;
    SET_GPR_U32(ctx, 31, 0x1F249Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2494u, 0x1F249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F249Cu;
label_1f249c:
    // 0x1f249c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24a0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f24a4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f24a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f24a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f24a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f24ac: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f24b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f24b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f24b4: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f24b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1f24b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f24bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f24c0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F24C0u;
    {
        const bool branch_taken_0x1f24c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24c0) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F24C8u;
    // 0x1f24c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f24cc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24d0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1f24d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f24d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f24d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24dc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1f24dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f24e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f24e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f24ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f24f0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f24f8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f24fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2500: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f2500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2504: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2508: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f250c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f250cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2510: 0x2406ff47  addiu       $a2, $zero, -0xB9
    ctx->pc = 0x1f2510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f2514: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x1f2514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1f2518: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1f2518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1f251c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f251cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2520: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2524: 0xe50000d0  swc1        $f0, 0xD0($t0)
    ctx->pc = 0x1f2524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
label_1f2528:
    // 0x1f2528: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f252c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2530: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2534: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2538: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f253c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f253cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2540: 0x0  nop
    ctx->pc = 0x1f2540u;
    // NOP
    // 0x1f2544: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x1F2544u;
    {
        const bool branch_taken_0x1f2544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2544) {
            ctx->pc = 0x1F2648u;
            goto label_1f2648;
        }
    }
    ctx->pc = 0x1F254Cu;
    // 0x1f254c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2550: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2554: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2558: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f255c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f2560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2564: 0x0  nop
    ctx->pc = 0x1f2564u;
    // NOP
    // 0x1f2568: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F25C4u;
            goto label_1f25c4;
        }
    }
    ctx->pc = 0x1F2570u;
    // 0x1f2570: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2574: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2578: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f257c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2580: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f2584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f2588: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f258c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2590: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2594: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1f2594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2598: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f259c: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x1f259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f25a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f25a4: 0x0  nop
    ctx->pc = 0x1f25a4u;
    // NOP
    // 0x1f25a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F25A8u;
    {
        const bool branch_taken_0x1f25a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f25a8) {
            ctx->pc = 0x1F25C4u;
            goto label_1f25c4;
        }
    }
    ctx->pc = 0x1F25B0u;
    // 0x1f25b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f25b8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f25b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25c0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f25c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f25c4:
    // 0x1f25c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f25c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25c8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f25cc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f25ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f25d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25d4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f25d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f25dc: 0x0  nop
    ctx->pc = 0x1f25dcu;
    // NOP
    // 0x1f25e0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F25E0u;
    {
        const bool branch_taken_0x1f25e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f25e0) {
            ctx->pc = 0x1F2648u;
            goto label_1f2648;
        }
    }
    ctx->pc = 0x1F25E8u;
    // 0x1f25e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f25ec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f25f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f25f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f25f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f25f8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1f25f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f25fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f25fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f2600: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2604: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f2608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f260c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f2610: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2614: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2618: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f261c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2620: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2628: 0x0  nop
    ctx->pc = 0x1f2628u;
    // NOP
    // 0x1f262c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F262Cu;
    {
        const bool branch_taken_0x1f262c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f262c) {
            ctx->pc = 0x1F2648u;
            goto label_1f2648;
        }
    }
    ctx->pc = 0x1F2634u;
    // 0x1f2634: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2638: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f263c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1f263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2640: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2644: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_1f2648:
    // 0x1f2648: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f2648u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f264c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1f264cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f2650: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2658u;
}
