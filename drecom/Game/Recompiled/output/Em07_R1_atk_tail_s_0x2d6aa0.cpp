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

// Function: Em07_R1_atk_tail_s
// Address: 0x2d6aa0 - 0x2d7030
void Em07_R1_atk_tail_s_0x2d6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_atk_tail_s_0x2d6aa0");
#endif

    switch (ctx->pc) {
        case 0x2d6af8u: goto label_2d6af8;
        case 0x2d6b3cu: goto label_2d6b3c;
        case 0x2d6b70u: goto label_2d6b70;
        case 0x2d6b90u: goto label_2d6b90;
        case 0x2d6be8u: goto label_2d6be8;
        case 0x2d6c1cu: goto label_2d6c1c;
        case 0x2d6c3cu: goto label_2d6c3c;
        case 0x2d6cb4u: goto label_2d6cb4;
        case 0x2d6cd8u: goto label_2d6cd8;
        case 0x2d6cfcu: goto label_2d6cfc;
        case 0x2d6d20u: goto label_2d6d20;
        case 0x2d6d44u: goto label_2d6d44;
        case 0x2d6d68u: goto label_2d6d68;
        case 0x2d6d8cu: goto label_2d6d8c;
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6dd4u: goto label_2d6dd4;
        case 0x2d6e28u: goto label_2d6e28;
        case 0x2d6fa8u: goto label_2d6fa8;
        default: break;
    }

    ctx->pc = 0x2d6aa0u;

    // 0x2d6aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6aa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d6aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d6aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6aac: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d6aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d6ab0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ab4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d6ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6ab8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d6ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d6abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6ac0: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2D6AC0u;
    {
        const bool branch_taken_0x2d6ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d6ac0) {
            ctx->pc = 0x2D6C7Cu;
            goto label_2d6c7c;
        }
    }
    ctx->pc = 0x2D6AC8u;
    // 0x2d6ac8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6AC8u;
    {
        const bool branch_taken_0x2d6ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ac8) {
            ctx->pc = 0x2D6AD8u;
            goto label_2d6ad8;
        }
    }
    ctx->pc = 0x2D6AD0u;
    // 0x2d6ad0: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x2D6AD0u;
    {
        const bool branch_taken_0x2d6ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ad0) {
            ctx->pc = 0x2D701Cu;
            goto label_2d701c;
        }
    }
    ctx->pc = 0x2D6AD8u;
label_2d6ad8:
    // 0x2d6ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d6ae4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6ae8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6aec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6af0: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D6AF0u;
    SET_GPR_U32(ctx, 31, 0x2D6AF8u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D6AF0u, 0x2D6AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AF8u;
label_2d6af8:
    // 0x2d6af8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d6afc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6b00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d6b00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6b04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b08: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d6b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d6b0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b10: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d6b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d6b14: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D6B14u;
    {
        const bool branch_taken_0x2d6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b14) {
            ctx->pc = 0x2D6BC8u;
            goto label_2d6bc8;
        }
    }
    ctx->pc = 0x2D6B1Cu;
    // 0x2d6b1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6b28: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2d6b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2d6b2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6b30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6b34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6B34u;
    SET_GPR_U32(ctx, 31, 0x2D6B3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6B34u, 0x2D6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B3Cu;
label_2d6b3c:
    // 0x2d6b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b44: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6b48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6b4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b50: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d6b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6b54: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d6b58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d6b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b60: 0x0  nop
    ctx->pc = 0x2d6b60u;
    // NOP
    // 0x2d6b64: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d6b64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6b68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D6B68u;
    SET_GPR_U32(ctx, 31, 0x2D6B70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D6B68u, 0x2D6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B70u;
label_2d6b70:
    // 0x2d6b70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6b78: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d6b7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d6b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6b80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6b84: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6b88: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6B88u;
    SET_GPR_U32(ctx, 31, 0x2D6B90u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6B88u, 0x2D6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B90u;
label_2d6b90:
    // 0x2d6b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b94: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6b98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6b9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ba0: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6ba4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d6ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6bac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6bb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6bb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6bb4: 0x0  nop
    ctx->pc = 0x2d6bb4u;
    // NOP
    // 0x2d6bb8: 0x0  nop
    ctx->pc = 0x2d6bb8u;
    // NOP
    // 0x2d6bbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d6bc0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D6BC0u;
    {
        const bool branch_taken_0x2d6bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6bc0) {
            ctx->pc = 0x2D6C64u;
            goto label_2d6c64;
        }
    }
    ctx->pc = 0x2D6BC8u;
label_2d6bc8:
    // 0x2d6bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bcc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6bd4: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2d6bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2d6bd8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d6bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d6bdc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6be0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6BE0u;
    SET_GPR_U32(ctx, 31, 0x2D6BE8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6BE0u, 0x2D6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6BE8u;
label_2d6be8:
    // 0x2d6be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bf0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6bf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6bfc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6c00: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d6c04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d6c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d6c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6c0c: 0x0  nop
    ctx->pc = 0x2d6c0cu;
    // NOP
    // 0x2d6c10: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2d6c10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6c14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D6C14u;
    SET_GPR_U32(ctx, 31, 0x2D6C1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D6C14u, 0x2D6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C1Cu;
label_2d6c1c:
    // 0x2d6c1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6c24: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d6c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d6c28: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d6c28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6c30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6c34: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6C34u;
    SET_GPR_U32(ctx, 31, 0x2D6C3Cu);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6C34u, 0x2D6C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C3Cu;
label_2d6c3c:
    // 0x2d6c3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c40: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6c44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6c48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c4c: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6c50: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d6c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6c5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6c5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6c60: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d6c64:
    // 0x2d6c64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c68: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d6c68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d6c6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d6c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6c78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d6c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d6c7c:
    // 0x2d6c7c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d6c80: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x2d6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x2d6c84: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6c88: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d6c88u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398960u));
    // 0x2d6c8c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d6c90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6c98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6c9c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2d6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d6ca0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6ca4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6ca8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cac: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CACu;
    SET_GPR_U32(ctx, 31, 0x2D6CB4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CACu, 0x2D6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CB4u;
label_2d6cb4:
    // 0x2d6cb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6cbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cc0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d6cc4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6cc8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6ccc: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cd0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CD0u;
    SET_GPR_U32(ctx, 31, 0x2D6CD8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CD0u, 0x2D6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CD8u;
label_2d6cd8:
    // 0x2d6cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6cdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6ce0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ce4: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d6ce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6cec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6cf0: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6cf4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6CF4u;
    SET_GPR_U32(ctx, 31, 0x2D6CFCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6CF4u, 0x2D6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6CFCu;
label_2d6cfc:
    // 0x2d6cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d08: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x2d6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2d6d0c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d10: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d14: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d18: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D18u;
    SET_GPR_U32(ctx, 31, 0x2D6D20u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D18u, 0x2D6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D20u;
label_2d6d20:
    // 0x2d6d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d2c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2d6d30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d38: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d3c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D44u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D3Cu, 0x2D6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D44u;
label_2d6d44:
    // 0x2d6d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d48: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d50: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d6d54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d58: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d5c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d60: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D60u;
    SET_GPR_U32(ctx, 31, 0x2D6D68u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D60u, 0x2D6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D68u;
label_2d6d68:
    // 0x2d6d68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d74: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x2d6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2d6d78: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6d7c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6d80: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6d84: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6D84u;
    SET_GPR_U32(ctx, 31, 0x2D6D8Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6D84u, 0x2D6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D8Cu;
label_2d6d8c:
    // 0x2d6d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6d94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6d98: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x2d6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2d6d9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6da0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6da4: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6da8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6DA8u;
    SET_GPR_U32(ctx, 31, 0x2D6DB0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6DA8u, 0x2D6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DB0u;
label_2d6db0:
    // 0x2d6db0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6db4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6db8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6dbc: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x2d6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2d6dc0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6dc4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6dc8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d6dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d6dcc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6DCCu;
    SET_GPR_U32(ctx, 31, 0x2D6DD4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6DCCu, 0x2D6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6DD4u;
label_2d6dd4:
    // 0x2d6dd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6dd8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d6ddc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6DDCu;
    {
        const bool branch_taken_0x2d6ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ddc) {
            ctx->pc = 0x2D6E3Cu;
            goto label_2d6e3c;
        }
    }
    ctx->pc = 0x2D6DE4u;
    // 0x2d6de4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d6de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6dec: 0x0  nop
    ctx->pc = 0x2d6decu;
    // NOP
    // 0x2d6df0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d6df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d6df4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x2d6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x2d6df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6dfc: 0x0  nop
    ctx->pc = 0x2d6dfcu;
    // NOP
    // 0x2d6e00: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d6e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d6e04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e08: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6e0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e10: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d6e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d6e14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6e18: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d6e1c: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d6e20: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6E20u;
    SET_GPR_U32(ctx, 31, 0x2D6E28u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6E20u, 0x2D6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E28u;
label_2d6e28:
    // 0x2d6e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6E28u;
    {
        const bool branch_taken_0x2d6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e28) {
            ctx->pc = 0x2D6E3Cu;
            goto label_2d6e3c;
        }
    }
    ctx->pc = 0x2D6E30u;
    // 0x2d6e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6e34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e38: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6e38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d6e3c:
    // 0x2d6e3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6e44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6e48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d6e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d6e4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6E4Cu;
    {
        const bool branch_taken_0x2d6e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e4c) {
            ctx->pc = 0x2D6E7Cu;
            goto label_2d6e7c;
        }
    }
    ctx->pc = 0x2D6E54u;
    // 0x2d6e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e58: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6e5c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e64: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6e68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6e70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6e74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6E74u;
    {
        const bool branch_taken_0x2d6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6e74) {
            ctx->pc = 0x2D6E9Cu;
            goto label_2d6e9c;
        }
    }
    ctx->pc = 0x2D6E7Cu;
label_2d6e7c:
    // 0x2d6e7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e80: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6e84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e8c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6e90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d6e98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d6e9c:
    // 0x2d6e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ea0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6ea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6eac: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D6EACu;
    {
        const bool branch_taken_0x2d6eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6eac) {
            ctx->pc = 0x2D6F58u;
            goto label_2d6f58;
        }
    }
    ctx->pc = 0x2D6EB4u;
    // 0x2d6eb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6eb8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d6ebc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D6EBCu;
    {
        const bool branch_taken_0x2d6ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ebc) {
            ctx->pc = 0x2D6F4Cu;
            goto label_2d6f4c;
        }
    }
    ctx->pc = 0x2D6EC4u;
    // 0x2d6ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6ec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ecc: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6ed8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2d6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2d6edc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ee0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ee8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6eec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ef0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6ef8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6efc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f00: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6f04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6f08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f10: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6f14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6f18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d6f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6f20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6f28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d6f2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6f34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d6f4c:
    // 0x2d6f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6f50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f54: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d6f58:
    // 0x2d6f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f5c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6f60: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d6f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f68: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6f6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6f74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f78: 0x24431344  addiu       $v1, $v0, 0x1344
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6f7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d6f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6f84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6f88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6f8c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d6f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6f90: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6f94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6f98: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6f9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fa0: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D6FA0u;
    SET_GPR_U32(ctx, 31, 0x2D6FA8u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D6FA0u, 0x2D6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FA8u;
label_2d6fa8:
    // 0x2d6fa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6fb0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D6FB0u;
    {
        const bool branch_taken_0x2d6fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6fb0) {
            ctx->pc = 0x2D701Cu;
            goto label_2d701c;
        }
    }
    ctx->pc = 0x2D6FB8u;
    // 0x2d6fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fbc: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6fc0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6fc4: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6fc8: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6fcc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6fd0: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6fd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6fd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6fe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6fe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fe8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6fec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6ffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7008: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d700c: 0x247004b0  addiu       $s0, $v1, 0x4B0
    ctx->pc = 0x2d700cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x2d7010: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7014: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7018: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_2d701c:
    // 0x2d701c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d701cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7024: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d7024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d7028: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7030u;
}
