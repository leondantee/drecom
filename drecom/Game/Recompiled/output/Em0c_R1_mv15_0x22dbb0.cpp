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

// Function: Em0c_R1_mv15
// Address: 0x22dbb0 - 0x22de40
void Em0c_R1_mv15_0x22dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv15_0x22dbb0");
#endif

    switch (ctx->pc) {
        case 0x22dc98u: goto label_22dc98;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dce4u: goto label_22dce4;
        case 0x22dcfcu: goto label_22dcfc;
        case 0x22dd08u: goto label_22dd08;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dda0u: goto label_22dda0;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dde4u: goto label_22dde4;
        default: break;
    }

    ctx->pc = 0x22dbb0u;

    // 0x22dbb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22dbb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22dbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x22dbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22dbbc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x22dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x22dbc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dbc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22dbc8: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x22dbcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dbd0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22dbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22dbd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22dbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22dbd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dbdc: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22DBDCu;
    {
        const bool branch_taken_0x22dbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22dbdc) {
            ctx->pc = 0x22DC98u;
            goto label_22dc98;
        }
    }
    ctx->pc = 0x22DBE4u;
    // 0x22dbe4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DBE4u;
    {
        const bool branch_taken_0x22dbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbe4) {
            ctx->pc = 0x22DBF4u;
            goto label_22dbf4;
        }
    }
    ctx->pc = 0x22DBECu;
    // 0x22dbec: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x22DBECu;
    {
        const bool branch_taken_0x22dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbec) {
            ctx->pc = 0x22DE2Cu;
            goto label_22de2c;
        }
    }
    ctx->pc = 0x22DBF4u;
label_22dbf4:
    // 0x22dbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dbf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dbfc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22dbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22dc00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22dc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22dc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22dc20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22dc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22dc34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22dc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22dc48: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22dc4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22dc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc5c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22dc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22dc60: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x22dc64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22dc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc74: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22dc78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22dc84: 0x24067825  addiu       $a2, $zero, 0x7825
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30757));
    // 0x22dc88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dc8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22dc90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DC90u;
    SET_GPR_U32(ctx, 31, 0x22DC98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DC90u, 0x22DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC98u;
label_22dc98:
    // 0x22dc98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc9c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dca0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dca4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22dca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dcac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dcb0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22dcb4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22dcb8: 0x246508b0  addiu       $a1, $v1, 0x8B0
    ctx->pc = 0x22dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2224));
    // 0x22dcbc: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x22dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22dcc0: 0xc05c848  jal         func_172120
    ctx->pc = 0x22DCC0u;
    SET_GPR_U32(ctx, 31, 0x22DCC8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22DCC0u, 0x22DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCC8u;
label_22dcc8:
    // 0x22dcc8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22dccc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dcd0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dcd4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dcd8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22dcd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22dcdc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22DCDCu;
    SET_GPR_U32(ctx, 31, 0x22DCE4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22DCDCu, 0x22DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCE4u;
label_22dce4:
    // 0x22dce4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dce8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22dce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22dcec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dcf0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22dcf4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22DCF4u;
    SET_GPR_U32(ctx, 31, 0x22DCFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22DCF4u, 0x22DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCFCu;
label_22dcfc:
    // 0x22dcfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dd00: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22DD00u;
    SET_GPR_U32(ctx, 31, 0x22DD08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22DD00u, 0x22DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD08u;
label_22dd08:
    // 0x22dd08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dd0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22dd10: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x22dd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x22dd14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22dd18: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x22dd18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x22dd1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dd20: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x22DD20u;
    {
        const bool branch_taken_0x22dd20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22dd20) {
            ctx->pc = 0x22DDE4u;
            goto label_22dde4;
        }
    }
    ctx->pc = 0x22DD28u;
    // 0x22dd28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dd2c: 0x0  nop
    ctx->pc = 0x22dd2cu;
    // NOP
    // 0x22dd30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22dd34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dd34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dd38: 0x0  nop
    ctx->pc = 0x22dd38u;
    // NOP
    // 0x22dd3c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22dd40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dd40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dd44: 0x0  nop
    ctx->pc = 0x22dd44u;
    // NOP
    // 0x22dd48: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22dd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22dd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dd54: 0x0  nop
    ctx->pc = 0x22dd54u;
    // NOP
    // 0x22dd58: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22dd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22dd5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dd60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22dd64: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x22dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x22dd68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22dd6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22dd70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22dd74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22dd78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22dd7c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x22dd7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22dd80: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x22dd84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22dd84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22dd88: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22dd8c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22DD8Cu;
    SET_GPR_U32(ctx, 31, 0x22DD94u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22DD8Cu, 0x22DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD94u;
label_22dd94:
    // 0x22dd94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22dd94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22dd98: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x22DD98u;
    SET_GPR_U32(ctx, 31, 0x22DDA0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x22DD98u, 0x22DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDA0u;
label_22dda0:
    // 0x22dda0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dda4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22dda8: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x22dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x22ddac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22ddb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22ddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22ddb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22ddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22ddb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22ddbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22ddc0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x22ddc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22ddc4: 0x24040e10  addiu       $a0, $zero, 0xE10
    ctx->pc = 0x22ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x22ddc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22ddc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ddcc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x22ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ddd0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22DDD0u;
    SET_GPR_U32(ctx, 31, 0x22DDD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22DDD0u, 0x22DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDD8u;
label_22ddd8:
    // 0x22ddd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22ddd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22dddc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x22DDDCu;
    SET_GPR_U32(ctx, 31, 0x22DDE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x22DDDCu, 0x22DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDE4u;
label_22dde4:
    // 0x22dde4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dde8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ddec: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x22ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22ddf0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x22ddf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x22ddf4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22DDF4u;
    {
        const bool branch_taken_0x22ddf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ddf4) {
            ctx->pc = 0x22DE2Cu;
            goto label_22de2c;
        }
    }
    ctx->pc = 0x22DDFCu;
    // 0x22ddfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22de00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22de04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22de04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22de08: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x22de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22de0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22de10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22de10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22de14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22de18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22de18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22de1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22de20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22de20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22de24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22de24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22de28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22de28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_22de2c:
    // 0x22de2c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22de2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22de30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22de30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22de34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22de34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22de38: 0x3e00008  jr          $ra
    ctx->pc = 0x22DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DE40u;
}
