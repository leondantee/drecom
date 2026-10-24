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

// Function: Em02_R1_br_mv03
// Address: 0x29ee50 - 0x29f16c
void Em02_R1_br_mv03_0x29ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_br_mv03_0x29ee50");
#endif

    switch (ctx->pc) {
        case 0x29eec0u: goto label_29eec0;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef98u: goto label_29ef98;
        case 0x29f090u: goto label_29f090;
        case 0x29f0c4u: goto label_29f0c4;
        default: break;
    }

    ctx->pc = 0x29ee50u;

    // 0x29ee50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ee54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29ee58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x29ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x29ee5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ee60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ee64: 0x94630042  lhu         $v1, 0x42($v1)
    ctx->pc = 0x29ee64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x29ee68: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x29EE68u;
    {
        const bool branch_taken_0x29ee68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ee68) {
            ctx->pc = 0x29EF68u;
            goto label_29ef68;
        }
    }
    ctx->pc = 0x29EE70u;
    // 0x29ee70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ee74: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ee78: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29ee7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ee7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ee80: 0x0  nop
    ctx->pc = 0x29ee80u;
    // NOP
    // 0x29ee84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ee84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ee88: 0x0  nop
    ctx->pc = 0x29ee88u;
    // NOP
    // 0x29ee8c: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x29EE8Cu;
    {
        const bool branch_taken_0x29ee8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ee8c) {
            ctx->pc = 0x29EF68u;
            goto label_29ef68;
        }
    }
    ctx->pc = 0x29EE94u;
    // 0x29ee94: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x29ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x29ee98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29ee9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ee9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29eea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eea4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x29eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eea8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x29eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x29eeac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x29eeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29eeb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29eeb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29eeb8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29EEB8u;
    SET_GPR_U32(ctx, 31, 0x29EEC0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29EEB8u, 0x29EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEC0u;
label_29eec0:
    // 0x29eec0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29EEC0u;
    {
        const bool branch_taken_0x29eec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eec0) {
            ctx->pc = 0x29EF68u;
            goto label_29ef68;
        }
    }
    ctx->pc = 0x29EEC8u;
    // 0x29eec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eed0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29eed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29eed4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x29eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29eed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eedc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29eedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29eee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eee4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29eee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29eee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eeec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29eef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eef4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29eef8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eefc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ef00: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29ef04: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29ef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29ef08: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29EF08u;
    {
        const bool branch_taken_0x29ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef08) {
            ctx->pc = 0x29EF68u;
            goto label_29ef68;
        }
    }
    ctx->pc = 0x29EF10u;
    // 0x29ef10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EF10u;
    SET_GPR_U32(ctx, 31, 0x29EF18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EF10u, 0x29EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF18u;
label_29ef18:
    // 0x29ef18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ef1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x29ef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29ef20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29EF20u;
    {
        const bool branch_taken_0x29ef20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef20) {
            ctx->pc = 0x29EF38u;
            goto label_29ef38;
        }
    }
    ctx->pc = 0x29EF28u;
    // 0x29ef28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29ef28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29ef2c: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x29ef2cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x29ef30: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29EF30u;
    {
        const bool branch_taken_0x29ef30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef30) {
            ctx->pc = 0x29EF68u;
            goto label_29ef68;
        }
    }
    ctx->pc = 0x29EF38u;
label_29ef38:
    // 0x29ef38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ef3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ef44: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29ef48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ef50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ef54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ef58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ef60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29ef68:
    // 0x29ef68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29ef6c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x29ef70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29ef74: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29EF74u;
    {
        const bool branch_taken_0x29ef74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ef74) {
            ctx->pc = 0x29EFF4u;
            goto label_29eff4;
        }
    }
    ctx->pc = 0x29EF7Cu;
    // 0x29ef7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ef84: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x29ef84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x29ef88: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29EF88u;
    {
        const bool branch_taken_0x29ef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ef88) {
            ctx->pc = 0x29EFF4u;
            goto label_29eff4;
        }
    }
    ctx->pc = 0x29EF90u;
    // 0x29ef90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EF90u;
    SET_GPR_U32(ctx, 31, 0x29EF98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EF90u, 0x29EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF98u;
label_29ef98:
    // 0x29ef98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ef9c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x29ef9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29efa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29efa4: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29EFA4u;
    {
        const bool branch_taken_0x29efa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29efa4) {
            ctx->pc = 0x29EFF4u;
            goto label_29eff4;
        }
    }
    ctx->pc = 0x29EFACu;
    // 0x29efac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29efb4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29efb8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29efbc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29EFBCu;
    {
        const bool branch_taken_0x29efbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29efbc) {
            ctx->pc = 0x29EFF4u;
            goto label_29eff4;
        }
    }
    ctx->pc = 0x29EFC4u;
    // 0x29efc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29efc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efcc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29efccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29efd0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29efd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efd8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29efd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29efdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efe0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29efe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29efe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29efe8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29efe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29efec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eff0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29eff4:
    // 0x29eff4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29eff8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29effc: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29f000: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29F000u;
    {
        const bool branch_taken_0x29f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f000) {
            ctx->pc = 0x29F054u;
            goto label_29f054;
        }
    }
    ctx->pc = 0x29F008u;
    // 0x29f008: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f00c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f010: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29f010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29f014: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f018: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29f018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29f01c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F01Cu;
    {
        const bool branch_taken_0x29f01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f01c) {
            ctx->pc = 0x29F054u;
            goto label_29f054;
        }
    }
    ctx->pc = 0x29F024u;
    // 0x29f024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f028: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f02c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f030: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29f034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f038: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f040: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f048: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f04c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f050: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f054:
    // 0x29f054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f058: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f05c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29f060: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f068: 0x0  nop
    ctx->pc = 0x29f068u;
    // NOP
    // 0x29f06c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f070: 0x0  nop
    ctx->pc = 0x29f070u;
    // NOP
    // 0x29f074: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29F074u;
    {
        const bool branch_taken_0x29f074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f074) {
            ctx->pc = 0x29F110u;
            goto label_29f110;
        }
    }
    ctx->pc = 0x29F07Cu;
    // 0x29f07c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f080: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29f084: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f088: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29F088u;
    SET_GPR_U32(ctx, 31, 0x29F090u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29F088u, 0x29F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F090u;
label_29f090:
    // 0x29f090: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29F090u;
    {
        const bool branch_taken_0x29f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f090) {
            ctx->pc = 0x29F110u;
            goto label_29f110;
        }
    }
    ctx->pc = 0x29F098u;
    // 0x29f098: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f09c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0a0: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29f0a4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29f0a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29f0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f0ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f0b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f0b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f0b8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f0bc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29F0BCu;
    SET_GPR_U32(ctx, 31, 0x29F0C4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29F0BCu, 0x29F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0C4u;
label_29f0c4:
    // 0x29f0c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29F0C4u;
    {
        const bool branch_taken_0x29f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0c4) {
            ctx->pc = 0x29F110u;
            goto label_29f110;
        }
    }
    ctx->pc = 0x29F0CCu;
    // 0x29f0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f0d4: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29f0d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29f0d8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F0D8u;
    {
        const bool branch_taken_0x29f0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f0d8) {
            ctx->pc = 0x29F110u;
            goto label_29f110;
        }
    }
    ctx->pc = 0x29F0E0u;
    // 0x29f0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f0e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f0ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29f0f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f0f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f104: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f10c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f110:
    // 0x29f110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f114: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f118: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29f118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29f11c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f120: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29f124: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F124u;
    {
        const bool branch_taken_0x29f124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f124) {
            ctx->pc = 0x29F15Cu;
            goto label_29f15c;
        }
    }
    ctx->pc = 0x29F12Cu;
    // 0x29f12c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f134: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f138: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f140: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f144: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f148: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f150: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f158: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f15c:
    // 0x29f15c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29f15cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f160: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29f164: 0x3e00008  jr          $ra
    ctx->pc = 0x29F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F16Cu;
}
