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

// Function: Em18_R1_punch
// Address: 0x2dbb30 - 0x2dc0d4
void Em18_R1_punch_0x2dbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_punch_0x2dbb30");
#endif

    switch (ctx->pc) {
        case 0x2dbbb8u: goto label_2dbbb8;
        case 0x2dbc10u: goto label_2dbc10;
        case 0x2dbc3cu: goto label_2dbc3c;
        case 0x2dbc54u: goto label_2dbc54;
        case 0x2dbc60u: goto label_2dbc60;
        case 0x2dbc70u: goto label_2dbc70;
        case 0x2dbc7cu: goto label_2dbc7c;
        case 0x2dbc88u: goto label_2dbc88;
        case 0x2dbd00u: goto label_2dbd00;
        case 0x2dbd34u: goto label_2dbd34;
        case 0x2dbd44u: goto label_2dbd44;
        case 0x2dbd6cu: goto label_2dbd6c;
        case 0x2dbe70u: goto label_2dbe70;
        case 0x2dbebcu: goto label_2dbebc;
        case 0x2dbee8u: goto label_2dbee8;
        case 0x2dbf00u: goto label_2dbf00;
        case 0x2dbf0cu: goto label_2dbf0c;
        case 0x2dbf1cu: goto label_2dbf1c;
        case 0x2dbf28u: goto label_2dbf28;
        case 0x2dbf34u: goto label_2dbf34;
        case 0x2dbfacu: goto label_2dbfac;
        case 0x2dbfe0u: goto label_2dbfe0;
        case 0x2dbff0u: goto label_2dbff0;
        case 0x2dc02cu: goto label_2dc02c;
        default: break;
    }

    ctx->pc = 0x2dbb30u;

    // 0x2dbb30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dbb34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2dbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2dbb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbb3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbb40: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2dbb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2dbb44: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2dbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2dbb48: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x2dbb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2dbb4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbb50: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2dbb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2dbb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbb58: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2dbb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dbb5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dbb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dbb64: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2DBB64u;
    {
        const bool branch_taken_0x2dbb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dbb64) {
            ctx->pc = 0x2DBE8Cu;
            goto label_2dbe8c;
        }
    }
    ctx->pc = 0x2DBB6Cu;
    // 0x2dbb6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbb70: 0x108300b7  beq         $a0, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2DBB70u;
    {
        const bool branch_taken_0x2dbb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dbb70) {
            ctx->pc = 0x2DBE50u;
            goto label_2dbe50;
        }
    }
    ctx->pc = 0x2DBB78u;
    // 0x2dbb78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbb7c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DBB7Cu;
    {
        const bool branch_taken_0x2dbb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dbb7c) {
            ctx->pc = 0x2DBBE0u;
            goto label_2dbbe0;
        }
    }
    ctx->pc = 0x2DBB84u;
    // 0x2dbb84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBB84u;
    {
        const bool branch_taken_0x2dbb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb84) {
            ctx->pc = 0x2DBB94u;
            goto label_2dbb94;
        }
    }
    ctx->pc = 0x2DBB8Cu;
    // 0x2dbb8c: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x2DBB8Cu;
    {
        const bool branch_taken_0x2dbb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbb8c) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBB94u;
label_2dbb94:
    // 0x2dbb94: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dbb94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbb98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbb9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbba0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dbba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dbba4: 0x24060a3d  addiu       $a2, $zero, 0xA3D
    ctx->pc = 0x2dbba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2621));
    // 0x2dbba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dbba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dbbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dbbb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DBBB0u;
    SET_GPR_U32(ctx, 31, 0x2DBBB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DBBB0u, 0x2DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBBB8u;
label_2dbbb8:
    // 0x2dbbb8: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dbbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbbbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbc0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2dbbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbbc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbbc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbcc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dbbccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbbd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dbbd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dbbd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbbdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dbbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dbbe0:
    // 0x2dbbe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbe4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dbbe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dbbe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dbbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dbbec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dbbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dbbf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBBF0u;
    {
        const bool branch_taken_0x2dbbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbf0) {
            ctx->pc = 0x2DBC44u;
            goto label_2dbc44;
        }
    }
    ctx->pc = 0x2DBBF8u;
    // 0x2dbbf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbbfc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dbc00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dbc04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dbc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dbc08: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DBC08u;
    SET_GPR_U32(ctx, 31, 0x2DBC10u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DBC08u, 0x2DBC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC10u;
label_2dbc10:
    // 0x2dbc10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc14: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dbc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dbc18: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dbc1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dbc20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dbc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dbc24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc2c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2dbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dbc30: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2dbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dbc34: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DBC34u;
    SET_GPR_U32(ctx, 31, 0x2DBC3Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DBC34u, 0x2DBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC3Cu;
label_2dbc3c:
    // 0x2dbc3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc40: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dbc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2dbc44:
    // 0x2dbc44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbc48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbc4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DBC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DBC4Cu, 0x2DBC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC54u;
label_2dbc54:
    // 0x2dbc54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DBC58u;
    SET_GPR_U32(ctx, 31, 0x2DBC60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DBC58u, 0x2DBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC60u;
label_2dbc60:
    // 0x2dbc60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbc64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbc68: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DBC68u;
    SET_GPR_U32(ctx, 31, 0x2DBC70u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DBC68u, 0x2DBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC70u;
label_2dbc70:
    // 0x2dbc70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc74: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DBC74u;
    SET_GPR_U32(ctx, 31, 0x2DBC7Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DBC74u, 0x2DBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC7Cu;
label_2dbc7c:
    // 0x2dbc7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc80: 0xc0c8da4  jal         func_323690
    ctx->pc = 0x2DBC80u;
    SET_GPR_U32(ctx, 31, 0x2DBC88u);
    ctx->pc = 0x323690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323690u, 0x2DBC80u, 0x2DBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC88u;
label_2dbc88:
    // 0x2dbc88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc8c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dbc8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dbc90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC90u;
    {
        const bool branch_taken_0x2dbc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc90) {
            ctx->pc = 0x2DBCC0u;
            goto label_2dbcc0;
        }
    }
    ctx->pc = 0x2DBC98u;
    // 0x2dbc98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbc9c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbc9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dbca0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dbca4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbca4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbca8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcac: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbcb0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dbcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dbcb4: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBCB8u;
    {
        const bool branch_taken_0x2dbcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbcb8) {
            ctx->pc = 0x2DBD4Cu;
            goto label_2dbd4c;
        }
    }
    ctx->pc = 0x2DBCC0u;
label_2dbcc0:
    // 0x2dbcc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcc4: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbcc8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dbccc: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbcccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcd4: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbcd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbcdc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dbcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dbce0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DBCE0u;
    {
        const bool branch_taken_0x2dbce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbce0) {
            ctx->pc = 0x2DBD4Cu;
            goto label_2dbd4c;
        }
    }
    ctx->pc = 0x2DBCE8u;
    // 0x2dbce8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dbcec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbcf0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dbcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbcf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbcf8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DBCF8u;
    SET_GPR_U32(ctx, 31, 0x2DBD00u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DBCF8u, 0x2DBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD00u;
label_2dbd00:
    // 0x2dbd00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd04: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dbd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dbd08: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBD08u;
    {
        const bool branch_taken_0x2dbd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd08) {
            ctx->pc = 0x2DBD4Cu;
            goto label_2dbd4c;
        }
    }
    ctx->pc = 0x2DBD10u;
    // 0x2dbd10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd18: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dbd1c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2dbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2dbd20: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dbd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbd24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dbd28: 0x24478dd0  addiu       $a3, $v0, -0x7230
    ctx->pc = 0x2dbd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2dbd2c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DBD2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD34u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DBD2Cu, 0x2DBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD34u;
label_2dbd34:
    // 0x2dbd34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBD34u;
    {
        const bool branch_taken_0x2dbd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd34) {
            ctx->pc = 0x2DBD4Cu;
            goto label_2dbd4c;
        }
    }
    ctx->pc = 0x2DBD3Cu;
    // 0x2dbd3c: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DBD3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD44u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DBD3Cu, 0x2DBD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD44u;
label_2dbd44:
    // 0x2dbd44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd48: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dbd48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dbd4c:
    // 0x2dbd4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd50: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbd54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbd58: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dbd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dbd5c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DBD5Cu;
    {
        const bool branch_taken_0x2dbd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd5c) {
            ctx->pc = 0x2DBDCCu;
            goto label_2dbdcc;
        }
    }
    ctx->pc = 0x2DBD64u;
    // 0x2dbd64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DBD64u;
    SET_GPR_U32(ctx, 31, 0x2DBD6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DBD64u, 0x2DBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD6Cu;
label_2dbd6c:
    // 0x2dbd6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dbd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dbd70: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2dbd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2dbd74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBD74u;
    {
        const bool branch_taken_0x2dbd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd74) {
            ctx->pc = 0x2DBD94u;
            goto label_2dbd94;
        }
    }
    ctx->pc = 0x2DBD7Cu;
    // 0x2dbd7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dbd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dbd84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbd88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dbd88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dbd8c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2DBD8Cu;
    {
        const bool branch_taken_0x2dbd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd8c) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBD94u;
label_2dbd94:
    // 0x2dbd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dbd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbda0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2dbda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbda4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbda8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dbda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbdac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdb0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dbdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbdb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dbdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbdbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dbdc4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2DBDC4u;
    {
        const bool branch_taken_0x2dbdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdc4) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBDCCu;
label_2dbdcc:
    // 0x2dbdcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dbdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dbdd4: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2DBDD4u;
    {
        const bool branch_taken_0x2dbdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdd4) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBDDCu;
    // 0x2dbddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbde0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2dbde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbde4: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2dbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2dbde8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2dbde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2dbdec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbdecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbdf0: 0x0  nop
    ctx->pc = 0x2dbdf0u;
    // NOP
    // 0x2dbdf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dbdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbdf8: 0x0  nop
    ctx->pc = 0x2dbdf8u;
    // NOP
    // 0x2dbdfc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBDFCu;
    {
        const bool branch_taken_0x2dbdfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbdfc) {
            ctx->pc = 0x2DBE1Cu;
            goto label_2dbe1c;
        }
    }
    ctx->pc = 0x2DBE04u;
    // 0x2dbe04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dbe08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dbe0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbe10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dbe10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dbe14: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2DBE14u;
    {
        const bool branch_taken_0x2dbe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe14) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBE1Cu;
label_2dbe1c:
    // 0x2dbe1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dbe24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbe28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dbe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dbe34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dbe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dbe48: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2DBE48u;
    {
        const bool branch_taken_0x2dbe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe48) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DBE50u;
label_2dbe50:
    // 0x2dbe50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dbe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dbe5c: 0x2406053f  addiu       $a2, $zero, 0x53F
    ctx->pc = 0x2dbe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1343));
    // 0x2dbe60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dbe60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dbe64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dbe68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DBE68u;
    SET_GPR_U32(ctx, 31, 0x2DBE70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DBE68u, 0x2DBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE70u;
label_2dbe70:
    // 0x2dbe70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbe74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe78: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dbe78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbe7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe80: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dbe80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dbe84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbe88: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2dbe88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2dbe8c:
    // 0x2dbe8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe90: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dbe90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dbe94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dbe98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2dbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2dbe9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBE9Cu;
    {
        const bool branch_taken_0x2dbe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe9c) {
            ctx->pc = 0x2DBEF0u;
            goto label_2dbef0;
        }
    }
    ctx->pc = 0x2DBEA4u;
    // 0x2dbea4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbea8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2dbea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2dbeac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2dbeb0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2dbeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2dbeb4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x2DBEB4u;
    SET_GPR_U32(ctx, 31, 0x2DBEBCu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x2DBEB4u, 0x2DBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEBCu;
label_2dbebc:
    // 0x2dbebc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbec0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2dbec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2dbec4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbecc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2dbed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dbed4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dbed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dbed8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2dbed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dbedc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2dbedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dbee0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DBEE0u;
    SET_GPR_U32(ctx, 31, 0x2DBEE8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DBEE0u, 0x2DBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEE8u;
label_2dbee8:
    // 0x2dbee8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbeec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2dbeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2dbef0:
    // 0x2dbef0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbef8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DBEF8u;
    SET_GPR_U32(ctx, 31, 0x2DBF00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DBEF8u, 0x2DBF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF00u;
label_2dbf00:
    // 0x2dbf00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf04: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DBF04u;
    SET_GPR_U32(ctx, 31, 0x2DBF0Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DBF04u, 0x2DBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF0Cu;
label_2dbf0c:
    // 0x2dbf0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dbf10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dbf14: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DBF14u;
    SET_GPR_U32(ctx, 31, 0x2DBF1Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DBF14u, 0x2DBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF1Cu;
label_2dbf1c:
    // 0x2dbf1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DBF20u;
    SET_GPR_U32(ctx, 31, 0x2DBF28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DBF20u, 0x2DBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF28u;
label_2dbf28:
    // 0x2dbf28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf2c: 0xc0c8e3c  jal         func_3238F0
    ctx->pc = 0x2DBF2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBF34u);
    ctx->pc = 0x3238F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238F0u, 0x2DBF2Cu, 0x2DBF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBF34u;
label_2dbf34:
    // 0x2dbf34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf38: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dbf3c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBF3Cu;
    {
        const bool branch_taken_0x2dbf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf3c) {
            ctx->pc = 0x2DBF6Cu;
            goto label_2dbf6c;
        }
    }
    ctx->pc = 0x2DBF44u;
    // 0x2dbf44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf48: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbf48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2dbf4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dbf50: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2dbf50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf58: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbf5c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2dbf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2dbf60: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf64: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DBF64u;
    {
        const bool branch_taken_0x2dbf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf64) {
            ctx->pc = 0x2DBFF8u;
            goto label_2dbff8;
        }
    }
    ctx->pc = 0x2DBF6Cu;
label_2dbf6c:
    // 0x2dbf6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf70: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x2dbf74: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x2dbf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
    // 0x2dbf78: 0xa48309e0  sh          $v1, 0x9E0($a0)
    ctx->pc = 0x2dbf78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbf7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf80: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dbf84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dbf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dbf88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dbf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dbf8c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DBF8Cu;
    {
        const bool branch_taken_0x2dbf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbf8c) {
            ctx->pc = 0x2DBFF8u;
            goto label_2dbff8;
        }
    }
    ctx->pc = 0x2DBF94u;
    // 0x2dbf94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2dbf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dbf98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbf9c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2dbf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbfa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbfa4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DBFA4u;
    SET_GPR_U32(ctx, 31, 0x2DBFACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DBFA4u, 0x2DBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFACu;
label_2dbfac:
    // 0x2dbfac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfb0: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dbfb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dbfb4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBFB4u;
    {
        const bool branch_taken_0x2dbfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfb4) {
            ctx->pc = 0x2DBFF8u;
            goto label_2dbff8;
        }
    }
    ctx->pc = 0x2DBFBCu;
    // 0x2dbfbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbfc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dbfc8: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dbfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2dbfcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dbfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dbfd0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dbfd4: 0x24478dd0  addiu       $a3, $v0, -0x7230
    ctx->pc = 0x2dbfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2dbfd8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DBFD8u;
    SET_GPR_U32(ctx, 31, 0x2DBFE0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DBFD8u, 0x2DBFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFE0u;
label_2dbfe0:
    // 0x2dbfe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBFE0u;
    {
        const bool branch_taken_0x2dbfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfe0) {
            ctx->pc = 0x2DBFF8u;
            goto label_2dbff8;
        }
    }
    ctx->pc = 0x2DBFE8u;
    // 0x2dbfe8: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DBFE8u;
    SET_GPR_U32(ctx, 31, 0x2DBFF0u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DBFE8u, 0x2DBFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFF0u;
label_2dbff0:
    // 0x2dbff0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbff4: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dbff4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2dbff8:
    // 0x2dbff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbffc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2dbffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2dc000: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc004: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2dc004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2dc008: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DC008u;
    {
        const bool branch_taken_0x2dc008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc008) {
            ctx->pc = 0x2DC080u;
            goto label_2dc080;
        }
    }
    ctx->pc = 0x2DC010u;
    // 0x2dc010: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2dc010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2dc014: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2dc014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dc018: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2dc018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc01c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DC01Cu;
    {
        const bool branch_taken_0x2dc01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc01c) {
            ctx->pc = 0x2DC080u;
            goto label_2dc080;
        }
    }
    ctx->pc = 0x2DC024u;
    // 0x2dc024: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DC024u;
    SET_GPR_U32(ctx, 31, 0x2DC02Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DC024u, 0x2DC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC02Cu;
label_2dc02c:
    // 0x2dc02c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dc02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dc030: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dc030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dc034: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC034u;
    {
        const bool branch_taken_0x2dc034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc034) {
            ctx->pc = 0x2DC080u;
            goto label_2dc080;
        }
    }
    ctx->pc = 0x2DC03Cu;
    // 0x2dc03c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc044: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc048: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2dc048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc04c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc050: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dc050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc058: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc05c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc060: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc064: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc068: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dc06c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2dc06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc074: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dc074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc078: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC078u;
    {
        const bool branch_taken_0x2dc078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc078) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DC080u;
label_2dc080:
    // 0x2dc080: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc084: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dc084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dc088: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC0BCu;
            goto label_2dc0bc;
        }
    }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dc090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc094: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dc098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc09c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2dc0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dc0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dc0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc0b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dc0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2dc0bc:
    // 0x2dc0bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dc0bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc0c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dc0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dc0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0D4u;
}
