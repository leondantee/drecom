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

// Function: Em0c_R1_mv16
// Address: 0x22de50 - 0x22dff4
void Em0c_R1_mv16_0x22de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv16_0x22de50");
#endif

    switch (ctx->pc) {
        case 0x22df38u: goto label_22df38;
        case 0x22df48u: goto label_22df48;
        case 0x22df54u: goto label_22df54;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfc0u: goto label_22dfc0;
        default: break;
    }

    ctx->pc = 0x22de50u;

    // 0x22de50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22de54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x22de58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22de5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x22de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x22de60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22de64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22de68: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x22de6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22de70: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22de70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22de74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22de74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22de78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22de7c: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22DE7Cu;
    {
        const bool branch_taken_0x22de7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22de7c) {
            ctx->pc = 0x22DF38u;
            goto label_22df38;
        }
    }
    ctx->pc = 0x22DE84u;
    // 0x22de84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DE84u;
    {
        const bool branch_taken_0x22de84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de84) {
            ctx->pc = 0x22DE94u;
            goto label_22de94;
        }
    }
    ctx->pc = 0x22DE8Cu;
    // 0x22de8c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x22DE8Cu;
    {
        const bool branch_taken_0x22de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de8c) {
            ctx->pc = 0x22DFE0u;
            goto label_22dfe0;
        }
    }
    ctx->pc = 0x22DE94u;
label_22de94:
    // 0x22de94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22de98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22de9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22dea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dea4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dea8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22deac: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22deb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22deb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22deb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22deb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22debc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22dec0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dec8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22decc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ded0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22ded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22ded4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22ded8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dee0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dee4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22dee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22dee8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22deec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22def0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22def0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22def4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22def8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22defc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22df00: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x22df04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22df08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22df0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22df14: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22df14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22df18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df20: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22df24: 0x24060826  addiu       $a2, $zero, 0x826
    ctx->pc = 0x22df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2086));
    // 0x22df28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22df2c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22df30: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DF30u;
    SET_GPR_U32(ctx, 31, 0x22DF38u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DF30u, 0x22DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF38u;
label_22df38:
    // 0x22df38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22df40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22DF40u;
    SET_GPR_U32(ctx, 31, 0x22DF48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22DF40u, 0x22DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF48u;
label_22df48:
    // 0x22df48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df4c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22DF4Cu;
    SET_GPR_U32(ctx, 31, 0x22DF54u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22DF4Cu, 0x22DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF54u;
label_22df54:
    // 0x22df54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df58: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22df58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22df5c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22DF5Cu;
    {
        const bool branch_taken_0x22df5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df5c) {
            ctx->pc = 0x22DFE0u;
            goto label_22dfe0;
        }
    }
    ctx->pc = 0x22DF64u;
    // 0x22df64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22df68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df6c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22df70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22df70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22df74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df78: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22df78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22df7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df80: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22df80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22df84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df88: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22df88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22df8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22df90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22df94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DF94u;
    SET_GPR_U32(ctx, 31, 0x22DF9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DF94u, 0x22DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF9Cu;
label_22df9c:
    // 0x22df9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22dfa0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22dfa4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x22dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22dfa8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22dfac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22dfacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22dfb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dfb4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22dfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22dfb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DFB8u;
    SET_GPR_U32(ctx, 31, 0x22DFC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DFB8u, 0x22DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFC0u;
label_22dfc0:
    // 0x22dfc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22dfc4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22dfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22dfc8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22dfcc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22dfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22dfd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22dfd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22dfd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22dfd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22dfdc: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22dfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22dfe0:
    // 0x22dfe0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22dfe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22dfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dfe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x22DFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DFF4u;
}
