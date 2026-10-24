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

// Function: Em0d_R1_mv0b
// Address: 0x23cee0 - 0x23daf4
void Em0d_R1_mv0b_0x23cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv0b_0x23cee0");
#endif

    switch (ctx->pc) {
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d104u: goto label_23d104;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d234u: goto label_23d234;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d408u: goto label_23d408;
        case 0x23d420u: goto label_23d420;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d484u: goto label_23d484;
        case 0x23d520u: goto label_23d520;
        case 0x23d574u: goto label_23d574;
        case 0x23d604u: goto label_23d604;
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d734u: goto label_23d734;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d804u: goto label_23d804;
        case 0x23d824u: goto label_23d824;
        case 0x23d830u: goto label_23d830;
        case 0x23d898u: goto label_23d898;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23da30u: goto label_23da30;
        case 0x23da48u: goto label_23da48;
        case 0x23da60u: goto label_23da60;
        case 0x23daa8u: goto label_23daa8;
        default: break;
    }

    ctx->pc = 0x23cee0u;

    // 0x23cee0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23cee4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x23cee8: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x23cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x23ceec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cef4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23cef8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x23cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x23cefc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x23CEFCu;
    SET_GPR_U32(ctx, 31, 0x23CF04u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x23CEFCu, 0x23CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF04u;
label_23cf04:
    // 0x23cf04: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x23cf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x23cf08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23CF08u;
    SET_GPR_U32(ctx, 31, 0x23CF10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23CF08u, 0x23CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF10u;
label_23cf10:
    // 0x23cf10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23cf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23cf14: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23cf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23cf18: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23cf1c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23cf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cf20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23cf20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23cf24: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x23cf24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf28: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x23cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23cf2c: 0xa483005e  sh          $v1, 0x5E($a0)
    ctx->pc = 0x23cf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cf30: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf34: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x23cf34u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x23cf38: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x23cf38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x23cf3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cf40: 0x11020233  beq         $t0, $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x23CF40u;
    {
        const bool branch_taken_0x23cf40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cf40) {
            ctx->pc = 0x23D810u;
            goto label_23d810;
        }
    }
    ctx->pc = 0x23CF48u;
    // 0x23cf48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23cf4c: 0x110200ea  beq         $t0, $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x23CF4Cu;
    {
        const bool branch_taken_0x23cf4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cf4c) {
            ctx->pc = 0x23D2F8u;
            goto label_23d2f8;
        }
    }
    ctx->pc = 0x23CF54u;
    // 0x23cf54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cf58: 0x1102006a  beq         $t0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x23CF58u;
    {
        const bool branch_taken_0x23cf58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cf58) {
            ctx->pc = 0x23D104u;
            goto label_23d104;
        }
    }
    ctx->pc = 0x23CF60u;
    // 0x23cf60: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CF60u;
    {
        const bool branch_taken_0x23cf60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf60) {
            ctx->pc = 0x23CF70u;
            goto label_23cf70;
        }
    }
    ctx->pc = 0x23CF68u;
    // 0x23cf68: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x23CF68u;
    {
        const bool branch_taken_0x23cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf68) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23CF70u;
label_23cf70:
    // 0x23cf70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cf74: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23cf78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cf7c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x23cf80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf84: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x23cf84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cf88: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cf90: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23cf94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23cf98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cf98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23cf9c: 0x34467800  ori         $a2, $v0, 0x7800
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x23cfa0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfa4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23cfa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cfac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23cfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23cfb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23CFB0u;
    SET_GPR_U32(ctx, 31, 0x23CFB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23CFB0u, 0x23CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFB8u;
label_23cfb8:
    // 0x23cfb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23cfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfbc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfc4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23cfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23cfc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23cfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfd0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfd8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23cfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23cfdc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23cfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cfe4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cfe8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23cfec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x23cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x23cff0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23cff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23cff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cff8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23cffc: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d000: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x23d000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x23d004: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d008: 0x34470fdb  ori         $a3, $v0, 0xFDB
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d00c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x23d00cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d010: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d014: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d018: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x23d018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x23d01c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23d020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d028: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d02c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23d030: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23d034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d038: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d03c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d040: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23d040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23d044: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d04c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d050: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d054: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x23d054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x23d058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23d05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d060: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d064: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x23d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d068: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x23d068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x23d06c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d070: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23d074: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x23d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23d078: 0x348500b8  ori         $a1, $a0, 0xB8
    ctx->pc = 0x23d078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)184);
    // 0x23d07c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x23d07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x23d080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d084: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d088: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23d08c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d090: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d094: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x23d094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x23d098: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D098u;
    SET_GPR_U32(ctx, 31, 0x23D0A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D098u, 0x23D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0A0u;
label_23d0a0:
    // 0x23d0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d0a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d0a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23D0A8u;
    {
        const bool branch_taken_0x23d0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0a8) {
            ctx->pc = 0x23D0E0u;
            goto label_23d0e0;
        }
    }
    ctx->pc = 0x23D0B0u;
    // 0x23d0b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d0b4: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x23d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x23d0b8: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x23d0bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d0c0: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x23d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23d0c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x23d0c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23d0c8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23d0cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d0ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d0d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D0D0u;
    SET_GPR_U32(ctx, 31, 0x23D0D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D0D0u, 0x23D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D0D8u;
label_23d0d8:
    // 0x23d0d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23D0D8u;
    {
        const bool branch_taken_0x23d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0d8) {
            ctx->pc = 0x23D104u;
            goto label_23d104;
        }
    }
    ctx->pc = 0x23D0E0u;
label_23d0e0:
    // 0x23d0e0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d0e4: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x23d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x23d0e8: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x23d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x23d0ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d0f0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x23d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x23d0f4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x23d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x23d0f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d0f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d0fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D0FCu;
    SET_GPR_U32(ctx, 31, 0x23D104u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D0FCu, 0x23D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D104u;
label_23d104:
    // 0x23d104: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d108: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d108u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d10c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23d110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d114: 0x0  nop
    ctx->pc = 0x23d114u;
    // NOP
    // 0x23d118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d11c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d120: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d124: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23d128: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d12c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x23d12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x23d130: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d134: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d13c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23d140: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d144: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23d144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23d148: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d14c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d150: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x23d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23d154: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d158: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d15c: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x23d160: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x23d160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x23d164: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x23D164u;
    SET_GPR_U32(ctx, 31, 0x23D16Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x23D164u, 0x23D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D16Cu;
label_23d16c:
    // 0x23d16c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d170: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d170u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d174: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x23d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23d178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23d178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d17c: 0x0  nop
    ctx->pc = 0x23d17cu;
    // NOP
    // 0x23d180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23d180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d184: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d188: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d18c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d190: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d194: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x23d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d198: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d19c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D19Cu;
    SET_GPR_U32(ctx, 31, 0x23D1A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D19Cu, 0x23D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1A4u;
label_23d1a4:
    // 0x23d1a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1a8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23d1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23d1ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1b0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x23d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d1b4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x23d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d1b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d1b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d1bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D1BCu;
    SET_GPR_U32(ctx, 31, 0x23D1C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D1BCu, 0x23D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1C4u;
label_23d1c4:
    // 0x23d1c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x23d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x23d1cc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d1d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D1D4u;
    SET_GPR_U32(ctx, 31, 0x23D1DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D1D4u, 0x23D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1DCu;
label_23d1dc:
    // 0x23d1dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D1E0u;
    SET_GPR_U32(ctx, 31, 0x23D1E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D1E0u, 0x23D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1E8u;
label_23d1e8:
    // 0x23d1e8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d1ec: 0x908209e7  lbu         $v0, 0x9E7($a0)
    ctx->pc = 0x23d1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x23d1f0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23D1F0u;
    {
        const bool branch_taken_0x23d1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1f0) {
            ctx->pc = 0x23D284u;
            goto label_23d284;
        }
    }
    ctx->pc = 0x23D1F8u;
    // 0x23d1f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d1fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d200: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d204: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d208: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d20c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d20cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d210: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d218: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d21c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d220: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d224: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d228: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d22c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D22Cu;
    SET_GPR_U32(ctx, 31, 0x23D234u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D22Cu, 0x23D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D234u;
label_23d234:
    // 0x23d234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d238: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d23c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d240: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d248: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d24c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d250: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23d254: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D254u;
    SET_GPR_U32(ctx, 31, 0x23D25Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D254u, 0x23D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D25Cu;
label_23d25c:
    // 0x23d25c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d260: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23d264: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23d268: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23d268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d26c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d26cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d270: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d274: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23d274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d278: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x23d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x23d27c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d280: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23d280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_23d284:
    // 0x23d284: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d288: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d28c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d290: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x23d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d294: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d298: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x23d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x23d29c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2a0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23d2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d2a4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x23d2a8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x23d2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x23d2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2b0: 0x0  nop
    ctx->pc = 0x23d2b0u;
    // NOP
    // 0x23d2b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d2b8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23d2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23d2bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2c0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d2c4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x23d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x23d2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2cc: 0x0  nop
    ctx->pc = 0x23d2ccu;
    // NOP
    // 0x23d2d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d2d4: 0x0  nop
    ctx->pc = 0x23d2d4u;
    // NOP
    // 0x23d2d8: 0x4501018a  bc1t        . + 4 + (0x18A << 2)
    ctx->pc = 0x23D2D8u;
    {
        const bool branch_taken_0x23d2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d2d8) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D2E0u;
    // 0x23d2e0: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x23d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x23d2e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23d2e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d2e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x23d2f0: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x23D2F0u;
    {
        const bool branch_taken_0x23d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2f0) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D2F8u;
label_23d2f8:
    // 0x23d2f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d2fc: 0x8444127c  lh          $a0, 0x127C($v0)
    ctx->pc = 0x23d2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23d300: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D300u;
    {
        const bool branch_taken_0x23d300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d300) {
            ctx->pc = 0x23D320u;
            goto label_23d320;
        }
    }
    ctx->pc = 0x23D308u;
    // 0x23d308: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d30c: 0x84a2127c  lh          $v0, 0x127C($a1)
    ctx->pc = 0x23d30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x23d310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d314: 0xa4a2127c  sh          $v0, 0x127C($a1)
    ctx->pc = 0x23d314u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d318: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D348u;
            goto label_23d348;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x23d320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x23d324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23d324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d328: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d32c: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23d330: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d334: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d33c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d340: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d344: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x23d344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_23d348:
    // 0x23d348: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d34c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d34cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d350: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x23d354: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23d354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d358: 0x0  nop
    ctx->pc = 0x23d358u;
    // NOP
    // 0x23d35c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d360: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d364: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d368: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d36c: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x23d36cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d370: 0x44867800  mtc1        $a2, $f15
    ctx->pc = 0x23d370u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x23d374: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d378: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d37c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d380: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23d384: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23d388: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23d38c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d390: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d394: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x23d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23d398: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d39c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d3a0: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x23d3a4: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x23d3a8: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x23D3A8u;
    SET_GPR_U32(ctx, 31, 0x23D3B0u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x23D3A8u, 0x23D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3B0u;
label_23d3b0:
    // 0x23d3b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d3b4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23d3b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23d3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d3c0: 0x0  nop
    ctx->pc = 0x23d3c0u;
    // NOP
    // 0x23d3c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23d3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23d3c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d3cc: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x23d3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x23d3d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3d4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3d8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x23d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d3dc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d3dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d3e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D3E0u;
    SET_GPR_U32(ctx, 31, 0x23D3E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D3E0u, 0x23D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D3E8u;
label_23d3e8:
    // 0x23d3e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3ec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23d3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23d3f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d3f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x23d3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d3f8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x23d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d3fc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23d3fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d400: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23D400u;
    SET_GPR_U32(ctx, 31, 0x23D408u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23D400u, 0x23D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D408u;
label_23d408:
    // 0x23d408: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d40c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x23d40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x23d410: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d414: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D418u;
    SET_GPR_U32(ctx, 31, 0x23D420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D418u, 0x23D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D420u;
label_23d420:
    // 0x23d420: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d424: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D424u;
    SET_GPR_U32(ctx, 31, 0x23D42Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D424u, 0x23D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D42Cu;
label_23d42c:
    // 0x23d42c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d430: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23d430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23d434: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23d438: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x23d438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d43c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23D43Cu;
    {
        const bool branch_taken_0x23d43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d43c) {
            ctx->pc = 0x23D4B4u;
            goto label_23d4b4;
        }
    }
    ctx->pc = 0x23D444u;
    // 0x23d444: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d448: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d44c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d44cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d450: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d454: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d458: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d45c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d464: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23d468: 0x34463c00  ori         $a2, $v0, 0x3C00
    ctx->pc = 0x23d468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x23d46c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d470: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d478: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d47c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D47Cu;
    SET_GPR_U32(ctx, 31, 0x23D484u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D47Cu, 0x23D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D484u;
label_23d484:
    // 0x23d484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d488: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d48c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d490: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d494: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d49c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d4a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23d4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d4ac: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4b0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_23d4b4:
    // 0x23d4b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4b8: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x23d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23d4bc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x23d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23d4c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d4c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23d4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23d4c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23d4c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d4cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23d4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23d4d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23d4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d4d4: 0x0  nop
    ctx->pc = 0x23d4d4u;
    // NOP
    // 0x23d4d8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x23D4D8u;
    {
        const bool branch_taken_0x23d4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d4d8) {
            ctx->pc = 0x23D548u;
            goto label_23d548;
        }
    }
    ctx->pc = 0x23D4E0u;
    // 0x23d4e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d4e4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4e8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23d4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d4ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d4f4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x23d4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x23d4f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d4fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d4fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23d500: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23d504: 0x34463c00  ori         $a2, $v0, 0x3C00
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x23d508: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d50c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23d510: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d514: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d518: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D518u;
    SET_GPR_U32(ctx, 31, 0x23D520u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D518u, 0x23D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D520u;
label_23d520:
    // 0x23d520: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23d524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d528: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d52c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d530: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d534: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x23d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x23d538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d53c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d544: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23d548:
    // 0x23d548: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d54c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d550: 0x3c024027  lui         $v0, 0x4027
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16423 << 16));
    // 0x23d554: 0x34428d36  ori         $v0, $v0, 0x8D36
    ctx->pc = 0x23d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36150);
    // 0x23d558: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23d55c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23d560: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23d564: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23d568: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23d56c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23D56Cu;
    SET_GPR_U32(ctx, 31, 0x23D574u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23D56Cu, 0x23D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D574u;
label_23d574:
    // 0x23d574: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23D574u;
    {
        const bool branch_taken_0x23d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d574) {
            ctx->pc = 0x23D62Cu;
            goto label_23d62c;
        }
    }
    ctx->pc = 0x23D57Cu;
    // 0x23d57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d580: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23d580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d584: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x23d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x23d588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d58c: 0x0  nop
    ctx->pc = 0x23d58cu;
    // NOP
    // 0x23d590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d594: 0x0  nop
    ctx->pc = 0x23d594u;
    // NOP
    // 0x23d598: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x23D598u;
    {
        const bool branch_taken_0x23d598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d598) {
            ctx->pc = 0x23D62Cu;
            goto label_23d62c;
        }
    }
    ctx->pc = 0x23D5A0u;
    // 0x23d5a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x23d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d5a8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x23d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x23d5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d5b0: 0x0  nop
    ctx->pc = 0x23d5b0u;
    // NOP
    // 0x23d5b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d5b8: 0x0  nop
    ctx->pc = 0x23d5b8u;
    // NOP
    // 0x23d5bc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x23D5BCu;
    {
        const bool branch_taken_0x23d5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d5bc) {
            ctx->pc = 0x23D62Cu;
            goto label_23d62c;
        }
    }
    ctx->pc = 0x23D5C4u;
    // 0x23d5c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d5c8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5cc: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x23d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23d5d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5d4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5d8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x23d5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x23d5dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23d5e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d5e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d5e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23d5e8: 0x34663c00  ori         $a2, $v1, 0x3C00
    ctx->pc = 0x23d5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x23d5ec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d5f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23d5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23d5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d5f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23d5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23d5fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23D5FCu;
    SET_GPR_U32(ctx, 31, 0x23D604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23D5FCu, 0x23D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D604u;
label_23d604:
    // 0x23d604: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23d608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d60c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d610: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d614: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23d614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23d618: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x23d618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x23d61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d620: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d624: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23d628: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23d628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23d62c:
    // 0x23d62c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d630: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23d634: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d638: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x23d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x23d63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d640: 0x0  nop
    ctx->pc = 0x23d640u;
    // NOP
    // 0x23d644: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x23d644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23d648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d64c: 0x0  nop
    ctx->pc = 0x23d64cu;
    // NOP
    // 0x23d650: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x23d650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x23d654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d658: 0x0  nop
    ctx->pc = 0x23d658u;
    // NOP
    // 0x23d65c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x23d65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x23d660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23d664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d668: 0x0  nop
    ctx->pc = 0x23d668u;
    // NOP
    // 0x23d66c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23d670: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
    // 0x23d674: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23d674u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d678: 0x0  nop
    ctx->pc = 0x23d678u;
    // NOP
    // 0x23d67c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23d680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d684: 0xa7a40084  sh          $a0, 0x84($sp)
    ctx->pc = 0x23d684u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 4));
    // 0x23d688: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x23d688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d68c: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x23d68cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d690: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d694: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x23d694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23d698: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x23d698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d69c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x23d69cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23d6a0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23D6A0u;
    SET_GPR_U32(ctx, 31, 0x23D6A8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23D6A0u, 0x23D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6A8u;
label_23d6a8:
    // 0x23d6a8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x23d6a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d6ac: 0x11000095  beqz        $t0, . + 4 + (0x95 << 2)
    ctx->pc = 0x23D6ACu;
    {
        const bool branch_taken_0x23d6ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d6ac) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D6B4u;
    // 0x23d6b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6b8: 0x0  nop
    ctx->pc = 0x23d6b8u;
    // NOP
    // 0x23d6bc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x23d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6c4: 0x0  nop
    ctx->pc = 0x23d6c4u;
    // NOP
    // 0x23d6c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x23d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23d6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6d0: 0x0  nop
    ctx->pc = 0x23d6d0u;
    // NOP
    // 0x23d6d4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x23d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x23d6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23d6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6e0: 0x0  nop
    ctx->pc = 0x23d6e0u;
    // NOP
    // 0x23d6e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x23d6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x23d6e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d6ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23d6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d6f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23d6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23d6f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d6f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23d6fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d700: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23d704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23d704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d708: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23d708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23d70c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d710: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23d714: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23d718: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d71c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d720: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23d720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d724: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23D724u;
    SET_GPR_U32(ctx, 31, 0x23D72Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23D724u, 0x23D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D72Cu;
label_23d72c:
    // 0x23d72c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D72Cu;
    SET_GPR_U32(ctx, 31, 0x23D734u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D72Cu, 0x23D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D734u;
label_23d734:
    // 0x23d734: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D734u;
    {
        const bool branch_taken_0x23d734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23d734) {
            ctx->pc = 0x23D750u;
            goto label_23d750;
        }
    }
    ctx->pc = 0x23D73Cu;
    // 0x23d73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d740: 0x0  nop
    ctx->pc = 0x23d740u;
    // NOP
    // 0x23d744: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23d744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D76Cu;
            goto label_23d76c;
        }
    }
    ctx->pc = 0x23D750u;
label_23d750:
    // 0x23d750: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23d754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23d758: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23d758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23d75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23d75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d760: 0x0  nop
    ctx->pc = 0x23d760u;
    // NOP
    // 0x23d764: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23d764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d768: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23d768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23d76c:
    // 0x23d76c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x23d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d774: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x23d774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23d778: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d77c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d780: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23d780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23d784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d788: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23d78c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23d794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23d794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d798: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23d798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23d79c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d7a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23d7a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23d7a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d7a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7ac: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23d7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d7b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23d7b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23D7B4u;
    SET_GPR_U32(ctx, 31, 0x23D7BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23D7B4u, 0x23D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7BCu;
label_23d7bc:
    // 0x23d7bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23d7c0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x23d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x23d7c4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23D7C4u;
    SET_GPR_U32(ctx, 31, 0x23D7CCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23D7C4u, 0x23D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7CCu;
label_23d7cc:
    // 0x23d7cc: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23d7d0: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x23d7d4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d7d8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23D7D8u;
    SET_GPR_U32(ctx, 31, 0x23D7E0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23D7D8u, 0x23D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D7E0u;
label_23d7e0:
    // 0x23d7e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x23d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x23d7e4: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x23d7e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d7ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d7f0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23d7f4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23d7f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d7f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d7fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23D7FCu;
    SET_GPR_U32(ctx, 31, 0x23D804u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23D7FCu, 0x23D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D804u;
label_23d804:
    // 0x23d804: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d808: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x23D808u;
    {
        const bool branch_taken_0x23d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d808) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D810u;
label_23d810:
    // 0x23d810: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23d814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d818: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23d81c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23D81Cu;
    SET_GPR_U32(ctx, 31, 0x23D824u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23D81Cu, 0x23D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D824u;
label_23d824:
    // 0x23d824: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d828: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23D828u;
    SET_GPR_U32(ctx, 31, 0x23D830u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23D828u, 0x23D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D830u;
label_23d830:
    // 0x23d830: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23d830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d834: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d838: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x23d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x23d83c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x23d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x23d840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d844: 0xc4a000d0  lwc1        $f0, 0xD0($a1)
    ctx->pc = 0x23d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23d848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23d84c: 0xe4a000d0  swc1        $f0, 0xD0($a1)
    ctx->pc = 0x23d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 208), bits); }
    // 0x23d850: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d854: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x23d854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x23d858: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23D858u;
    {
        const bool branch_taken_0x23d858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d858) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D860u;
    // 0x23d860: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d864: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d868: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x23d868u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23d86c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d870: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d874: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23d874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23d878: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d87c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23d87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d880: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d884: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23d884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d888: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d88c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23d890: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D890u;
    SET_GPR_U32(ctx, 31, 0x23D898u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D890u, 0x23D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D898u;
label_23d898:
    // 0x23d898: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23d898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d89c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x23d89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x23d8a0: 0x30c7001f  andi        $a3, $a2, 0x1F
    ctx->pc = 0x23d8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x23d8a4: 0x24e2008c  addiu       $v0, $a3, 0x8C
    ctx->pc = 0x23d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 140));
    // 0x23d8a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23d8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23d8ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23d8acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23d8b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d8b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D8B8u;
    SET_GPR_U32(ctx, 31, 0x23D8C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D8B8u, 0x23D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8C0u;
label_23d8c0:
    // 0x23d8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23d8c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23d8c8: 0x2444000a  addiu       $a0, $v0, 0xA
    ctx->pc = 0x23d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23d8cc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x23d8ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x23d8d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x23d8d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x23d8d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8d8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d8dc: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x23d8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x23d8e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d8e4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d8e8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23d8ec: 0x2403ff47  addiu       $v1, $zero, -0xB9
    ctx->pc = 0x23d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x23d8f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d8f4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x23d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x23d8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d8fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d900: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x23d900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_23d904:
    // 0x23d904: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d90c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d910: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d914: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d918: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23d918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d91c: 0x0  nop
    ctx->pc = 0x23d91cu;
    // NOP
    // 0x23d920: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x23D920u;
    {
        const bool branch_taken_0x23d920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d920) {
            ctx->pc = 0x23DA24u;
            goto label_23da24;
        }
    }
    ctx->pc = 0x23D928u;
    // 0x23d928: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d92c: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x23d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23d930: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x23d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d934: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d938: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x23d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d93c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d940: 0x0  nop
    ctx->pc = 0x23d940u;
    // NOP
    // 0x23d944: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x23D944u;
    {
        const bool branch_taken_0x23d944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d944) {
            ctx->pc = 0x23D9A0u;
            goto label_23d9a0;
        }
    }
    ctx->pc = 0x23D94Cu;
    // 0x23d94c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x23d94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d950: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x23d950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23d954: 0xc5010024  lwc1        $f1, 0x24($t0)
    ctx->pc = 0x23d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d958: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d95c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d964: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23d968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d96c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d970: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d974: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d978: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d980: 0x0  nop
    ctx->pc = 0x23d980u;
    // NOP
    // 0x23d984: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23D984u;
    {
        const bool branch_taken_0x23d984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d984) {
            ctx->pc = 0x23D9A0u;
            goto label_23d9a0;
        }
    }
    ctx->pc = 0x23D98Cu;
    // 0x23d98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d994: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d998: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d99c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_23d9a0:
    // 0x23d9a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9a8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d9ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9b0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x23d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d9b8: 0x0  nop
    ctx->pc = 0x23d9b8u;
    // NOP
    // 0x23d9bc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x23D9BCu;
    {
        const bool branch_taken_0x23d9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d9bc) {
            ctx->pc = 0x23DA24u;
            goto label_23da24;
        }
    }
    ctx->pc = 0x23D9C4u;
    // 0x23d9c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x23d9d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d9d4: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x23d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23d9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23d9dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d9e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23d9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23d9e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23d9ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d9f4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x23d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d9f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d9fc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23da00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23da04: 0x0  nop
    ctx->pc = 0x23da04u;
    // NOP
    // 0x23da08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23DA08u;
    {
        const bool branch_taken_0x23da08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23da08) {
            ctx->pc = 0x23DA24u;
            goto label_23da24;
        }
    }
    ctx->pc = 0x23DA10u;
    // 0x23da10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23da18: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da1c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da20: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_23da24:
    // 0x23da24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da28: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x23DA28u;
    SET_GPR_U32(ctx, 31, 0x23DA30u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x23DA30u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA30u) { return; }
    ctx->pc = 0x23DA30u;
label_23da30:
    // 0x23da30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da3c: 0xc44c00d0  lwc1        $f12, 0xD0($v0)
    ctx->pc = 0x23da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23da40: 0xc040d0e  jal         func_103438
    ctx->pc = 0x23DA40u;
    SET_GPR_U32(ctx, 31, 0x23DA48u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x23DA48u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA48u) { return; }
    ctx->pc = 0x23DA48u;
label_23da48:
    // 0x23da48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da54: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23da58: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x23DA58u;
    SET_GPR_U32(ctx, 31, 0x23DA60u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x23DA60u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DA60u) { return; }
    ctx->pc = 0x23DA60u;
label_23da60:
    // 0x23da60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23da60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da64: 0x0  nop
    ctx->pc = 0x23da64u;
    // NOP
    // 0x23da68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23da68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23da6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23da6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da70: 0x0  nop
    ctx->pc = 0x23da70u;
    // NOP
    // 0x23da74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23da78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23da7c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23da80: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23da80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23da84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23da88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23da88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23da8c: 0x0  nop
    ctx->pc = 0x23da8cu;
    // NOP
    // 0x23da90: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23da90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23da94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23da98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23da9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23daa0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x23DAA0u;
    SET_GPR_U32(ctx, 31, 0x23DAA8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x23DAA8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23DAA8u) { return; }
    ctx->pc = 0x23DAA8u;
label_23daa8:
    // 0x23daa8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23daac: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x23daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dab0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x23dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dab8: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x23dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x23dabc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23dac0: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x23dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dac4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x23dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dac8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dacc: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x23daccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x23dad0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23dad4: 0xc4610128  lwc1        $f1, 0x128($v1)
    ctx->pc = 0x23dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dad8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x23dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dadc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23dadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dae0: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x23dae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x23dae4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23dae4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dae8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23daec: 0x3e00008  jr          $ra
    ctx->pc = 0x23DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DAF4u;
}
