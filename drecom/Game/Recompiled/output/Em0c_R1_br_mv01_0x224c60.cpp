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

// Function: Em0c_R1_br_mv01
// Address: 0x224c60 - 0x2252cc
void Em0c_R1_br_mv01_0x224c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv01_0x224c60");
#endif

    switch (ctx->pc) {
        case 0x224cfcu: goto label_224cfc;
        case 0x224da0u: goto label_224da0;
        case 0x224dc4u: goto label_224dc4;
        case 0x224e64u: goto label_224e64;
        case 0x224f44u: goto label_224f44;
        case 0x224fc4u: goto label_224fc4;
        case 0x225074u: goto label_225074;
        case 0x225198u: goto label_225198;
        default: break;
    }

    ctx->pc = 0x224c60u;

    // 0x224c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224c64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x224c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x224c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x224c6c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x224c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x224c70: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x224c74: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x224c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x224c78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224c7c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x224c80: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x224C80u;
    {
        const bool branch_taken_0x224c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224c80) {
            ctx->pc = 0x224D20u;
            goto label_224d20;
        }
    }
    ctx->pc = 0x224C88u;
    // 0x224c88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224c8c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224c90: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x224c94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x224c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x224c98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224c9c: 0x0  nop
    ctx->pc = 0x224c9cu;
    // NOP
    // 0x224ca0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224ca4: 0x0  nop
    ctx->pc = 0x224ca4u;
    // NOP
    // 0x224ca8: 0x45000087  bc1f        . + 4 + (0x87 << 2)
    ctx->pc = 0x224CA8u;
    {
        const bool branch_taken_0x224ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224ca8) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224CB0u;
    // 0x224cb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224cb4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224cb8: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x224cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x224cbc: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x224CBCu;
    {
        const bool branch_taken_0x224cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224cbc) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224CC4u;
    // 0x224cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ccc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x224cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224cd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224cd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224cd8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x224cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x224cdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ce0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x224ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ce8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x224ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224cec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224cf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x224cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x224cf4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224CF4u;
    SET_GPR_U32(ctx, 31, 0x224CFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224CF4u, 0x224CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CFCu;
label_224cfc:
    // 0x224cfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x224cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224d00: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x224d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x224d04: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x224d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x224d08: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x224d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x224d0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x224d0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x224d10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d14: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x224d14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x224d18: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x224D18u;
    {
        const bool branch_taken_0x224d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d18) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224D20u;
label_224d20:
    // 0x224d20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x224d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d24: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x224d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x224d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x224d2c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x224d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x224d30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d34: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224d38: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x224d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x224d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224d40: 0x0  nop
    ctx->pc = 0x224d40u;
    // NOP
    // 0x224d44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224d48: 0x0  nop
    ctx->pc = 0x224d48u;
    // NOP
    // 0x224d4c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x224D4Cu;
    {
        const bool branch_taken_0x224d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224d4c) {
            ctx->pc = 0x224E04u;
            goto label_224e04;
        }
    }
    ctx->pc = 0x224D54u;
    // 0x224d54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224d5c: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x224d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x224d60: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x224D60u;
    {
        const bool branch_taken_0x224d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224d60) {
            ctx->pc = 0x224E04u;
            goto label_224e04;
        }
    }
    ctx->pc = 0x224D68u;
    // 0x224d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224d6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x224d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x224d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224d78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d7c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x224d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x224d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d84: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x224d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224d88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d8c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x224d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224d90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224d94: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x224d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x224d98: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224D98u;
    SET_GPR_U32(ctx, 31, 0x224DA0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224D98u, 0x224DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DA0u;
label_224da0:
    // 0x224da0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224da4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x224da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x224da8: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x224dac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x224dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x224db0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x224db0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x224db4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224db8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x224db8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x224dbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224DBCu;
    SET_GPR_U32(ctx, 31, 0x224DC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224DBCu, 0x224DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DC4u;
label_224dc4:
    // 0x224dc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x224dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224dc8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x224dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x224dcc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x224DCCu;
    {
        const bool branch_taken_0x224dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224dcc) {
            ctx->pc = 0x224E04u;
            goto label_224e04;
        }
    }
    ctx->pc = 0x224DD4u;
    // 0x224dd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ddc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x224ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x224de0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x224de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224de8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x224de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x224dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224df0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x224df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224df8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x224df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x224e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_224e04:
    // 0x224e04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224e0c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x224e0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x224e10: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x224E10u;
    {
        const bool branch_taken_0x224e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e10) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224E18u;
    // 0x224e18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e1c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224e20: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x224e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224e28: 0x0  nop
    ctx->pc = 0x224e28u;
    // NOP
    // 0x224e2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224e30: 0x0  nop
    ctx->pc = 0x224e30u;
    // NOP
    // 0x224e34: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x224E34u;
    {
        const bool branch_taken_0x224e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224e34) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224E3Cu;
    // 0x224e3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x224e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e44: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x224e48: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224e4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x224e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224e50: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x224e54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x224e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224e58: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x224e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x224e5c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x224E5Cu;
    SET_GPR_U32(ctx, 31, 0x224E64u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x224E5Cu, 0x224E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E64u;
label_224e64:
    // 0x224e64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x224E64u;
    {
        const bool branch_taken_0x224e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e64) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224E6Cu;
    // 0x224e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224e70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224e74: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224e78: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x224e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x224e7c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x224E7Cu;
    {
        const bool branch_taken_0x224e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e7c) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224E84u;
    // 0x224e84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x224e88: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x224e8c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x224e90: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x224E90u;
    {
        const bool branch_taken_0x224e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e90) {
            ctx->pc = 0x224EC8u;
            goto label_224ec8;
        }
    }
    ctx->pc = 0x224E98u;
    // 0x224e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224e9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ea0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x224ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x224ea4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x224ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224eac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x224eacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x224eb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224eb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x224eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224eb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ebc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x224ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224ec0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ec4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x224ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_224ec8:
    // 0x224ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ecc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224ed0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224ed4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x224ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x224ed8: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x224ED8u;
    {
        const bool branch_taken_0x224ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224ed8) {
            ctx->pc = 0x225010u;
            goto label_225010;
        }
    }
    ctx->pc = 0x224EE0u;
    // 0x224ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224ee8: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x224ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x224eec: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x224EECu;
    {
        const bool branch_taken_0x224eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224eec) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224EF4u;
    // 0x224ef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ef8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224efc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x224efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x224f00: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x224f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x224f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224f08: 0x0  nop
    ctx->pc = 0x224f08u;
    // NOP
    // 0x224f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f10: 0x0  nop
    ctx->pc = 0x224f10u;
    // NOP
    // 0x224f14: 0x45000070  bc1f        . + 4 + (0x70 << 2)
    ctx->pc = 0x224F14u;
    {
        const bool branch_taken_0x224f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224f14) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224F1Cu;
    // 0x224f1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x224f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f24: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x224f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x224f28: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224f2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x224f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224f30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x224f34: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x224f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224f38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x224f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x224f3c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x224F3Cu;
    SET_GPR_U32(ctx, 31, 0x224F44u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x224F3Cu, 0x224F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F44u;
label_224f44:
    // 0x224f44: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x224F44u;
    {
        const bool branch_taken_0x224f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f44) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224F4Cu;
    // 0x224f4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224f54: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x224f58: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x224F58u;
    {
        const bool branch_taken_0x224f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f58) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224F60u;
    // 0x224f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224f68: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224f6c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x224f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x224f70: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x224F70u;
    {
        const bool branch_taken_0x224f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f70) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224F78u;
    // 0x224f78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x224f7c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x224f80: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x224f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x224f84: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x224F84u;
    {
        const bool branch_taken_0x224f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f84) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224F8Cu;
    // 0x224f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x224f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224f98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fa0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x224fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x224fa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fa8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x224fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x224fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x224fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x224fbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224FBCu;
    SET_GPR_U32(ctx, 31, 0x224FC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224FBCu, 0x224FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FC4u;
label_224fc4:
    // 0x224fc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x224fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224fc8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x224fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x224fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fd0: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x224FD0u;
    {
        const bool branch_taken_0x224fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x224fd0) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x224FD8u;
    // 0x224fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x224fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x224fe4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x224fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x224fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x224fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x224ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ff4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x224ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224ff8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ffc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x224ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x225008: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x225008u;
    {
        const bool branch_taken_0x225008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225008) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x225010u;
label_225010:
    // 0x225010: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225018: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x22501c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22501Cu;
    {
        const bool branch_taken_0x22501c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22501c) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x225024u;
    // 0x225024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225028: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22502c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x22502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x225030: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x225030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x225034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225038: 0x0  nop
    ctx->pc = 0x225038u;
    // NOP
    // 0x22503c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22503cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225040: 0x0  nop
    ctx->pc = 0x225040u;
    // NOP
    // 0x225044: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x225044u;
    {
        const bool branch_taken_0x225044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225044) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x22504Cu;
    // 0x22504c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225050: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225054: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x225054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x225058: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22505c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x225060: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225064: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x225064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225068: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x225068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x22506c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x22506Cu;
    SET_GPR_U32(ctx, 31, 0x225074u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x22506Cu, 0x225074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225074u;
label_225074:
    // 0x225074: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225074u;
    {
        const bool branch_taken_0x225074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225074) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x22507Cu;
    // 0x22507c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225084: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x225088: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x225088u;
    {
        const bool branch_taken_0x225088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225088) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x225090u;
    // 0x225090: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225094: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225098: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x225098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22509c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x22509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2250a0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2250A0u;
    {
        const bool branch_taken_0x2250a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2250a0) {
            ctx->pc = 0x2250D8u;
            goto label_2250d8;
        }
    }
    ctx->pc = 0x2250A8u;
    // 0x2250a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2250a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2250ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2250b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2250b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2250b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2250b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2250bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2250c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2250c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2250c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2250ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2250d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2250d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2250d8:
    // 0x2250d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2250dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2250e0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2250e4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2250e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2250e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2250E8u;
    {
        const bool branch_taken_0x2250e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2250e8) {
            ctx->pc = 0x225120u;
            goto label_225120;
        }
    }
    ctx->pc = 0x2250F0u;
    // 0x2250f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2250f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2250f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2250f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2250fc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2250fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x225100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225104: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225108: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22510c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22510cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225110: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225114: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22511c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22511cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225120:
    // 0x225120: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225124: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x225128: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22512c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x22512Cu;
    {
        const bool branch_taken_0x22512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22512c) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x225134u;
    // 0x225134: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225138: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22513c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225140: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x225140u;
    {
        const bool branch_taken_0x225140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225140) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x225148u;
    // 0x225148: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22514c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225150: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x225154: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x225154u;
    {
        const bool branch_taken_0x225154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225154) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x22515Cu;
    // 0x22515c: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x225160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225164: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x225164u;
    {
        const bool branch_taken_0x225164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225164) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x22516Cu;
    // 0x22516c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225170: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225174: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x225174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x225178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22517c: 0x0  nop
    ctx->pc = 0x22517cu;
    // NOP
    // 0x225180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225184: 0x0  nop
    ctx->pc = 0x225184u;
    // NOP
    // 0x225188: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x225188u;
    {
        const bool branch_taken_0x225188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225188) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x225190u;
    // 0x225190: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 31, 0x225198u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225190u, 0x225198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225198u;
label_225198:
    // 0x225198: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22519c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2251a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2251a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251a4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2251A4u;
    {
        const bool branch_taken_0x2251a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2251a4) {
            ctx->pc = 0x2251DCu;
            goto label_2251dc;
        }
    }
    ctx->pc = 0x2251ACu;
    // 0x2251ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2251acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2251b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2251b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2251b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2251bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2251c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2251c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2251c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2251cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2251d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2251d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2251d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2251dc:
    // 0x2251dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2251dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2251e0: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2251e4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2251e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2251e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2251e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2251ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2251ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2251f0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2251F0u;
    {
        const bool branch_taken_0x2251f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251f0) {
            ctx->pc = 0x225228u;
            goto label_225228;
        }
    }
    ctx->pc = 0x2251F8u;
    // 0x2251f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225208: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22520c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22520cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225214: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22521c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22521cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225220: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225224: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225228:
    // 0x225228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22522c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225230: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x225234: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x225234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x225238: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22523c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22523Cu;
    {
        const bool branch_taken_0x22523c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22523c) {
            ctx->pc = 0x225274u;
            goto label_225274;
        }
    }
    ctx->pc = 0x225244u;
    // 0x225244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22524c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22524cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225250: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x225254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225258: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22525c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225260: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225264: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225268: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225268u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22526c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225270: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_225274:
    // 0x225274: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x225278: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x225278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22527c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22527cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225280: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x225280) {
            ctx->pc = 0x2252B8u;
            goto label_2252b8;
        }
    }
    ctx->pc = 0x225288u;
    // 0x225288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22528c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225290: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225294: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x225298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22529c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22529cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2252a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2252a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2252a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2252acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2252b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2252b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2252b8:
    // 0x2252b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2252b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2252bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2252bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2252c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2252c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2252c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2252C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2252C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2252CCu;
}
