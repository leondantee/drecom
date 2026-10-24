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

// Function: Em0d_R1_br_mv03
// Address: 0x239c50 - 0x239de4
void Em0d_R1_br_mv03_0x239c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_br_mv03_0x239c50");
#endif

    switch (ctx->pc) {
        case 0x239cb0u: goto label_239cb0;
        case 0x239d40u: goto label_239d40;
        case 0x239d84u: goto label_239d84;
        default: break;
    }

    ctx->pc = 0x239c50u;

    // 0x239c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239c54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x239c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x239c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239c5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x239c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x239c60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x239c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x239c64: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x239c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x239c68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c6c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x239c70: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x239C70u;
    {
        const bool branch_taken_0x239c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239c70) {
            ctx->pc = 0x239CD4u;
            goto label_239cd4;
        }
    }
    ctx->pc = 0x239C78u;
    // 0x239c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x239c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x239c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c8c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x239c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x239c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c94: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x239c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x239c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c9c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x239c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239ca0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ca4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x239ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x239ca8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239CA8u;
    SET_GPR_U32(ctx, 31, 0x239CB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239CA8u, 0x239CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CB0u;
label_239cb0:
    // 0x239cb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239cb4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x239cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x239cb8: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x239cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x239cbc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x239cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239cc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239cc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239cc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239cc8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x239cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x239ccc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x239CCCu;
    {
        const bool branch_taken_0x239ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ccc) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239CD4u;
label_239cd4:
    // 0x239cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239cd8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x239cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x239cdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239ce0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x239ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x239ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ce8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239cec: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x239cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239cf4: 0x0  nop
    ctx->pc = 0x239cf4u;
    // NOP
    // 0x239cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x239cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239cfc: 0x0  nop
    ctx->pc = 0x239cfcu;
    // NOP
    // 0x239d00: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239D08u;
    // 0x239d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x239d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x239d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d1c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x239d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x239d20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d24: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x239d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x239d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x239d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239d30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x239d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x239d38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239D38u;
    SET_GPR_U32(ctx, 31, 0x239D40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239D38u, 0x239D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D40u;
label_239d40:
    // 0x239d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239d44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x239d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x239d48: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x239d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x239d4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x239d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239d50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239d50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239d54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d58: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x239d58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_239d5c:
    // 0x239d5c: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x239d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x239d60: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x239d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x239d64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d70: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x239d74: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x239d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239d78: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239d7c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239D7Cu;
    SET_GPR_U32(ctx, 31, 0x239D84u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239D7Cu, 0x239D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D84u;
label_239d84:
    // 0x239d84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239DD0u;
            goto label_239dd0;
        }
    }
    ctx->pc = 0x239D8Cu;
    // 0x239d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239d94: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x239d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x239d98: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x239D98u;
    {
        const bool branch_taken_0x239d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d98) {
            ctx->pc = 0x239DD0u;
            goto label_239dd0;
        }
    }
    ctx->pc = 0x239DA0u;
    // 0x239da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x239da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x239dac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x239dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239db0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239db4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239db8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x239dc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_239dd0:
    // 0x239dd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x239dd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239dd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x239DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239DE4u;
}
