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

// Function: entry_00224d20
// Address: 0x224d20 - 0x224e04
void entry_00224d20_0x224d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224d20_0x224d20");
#endif

    switch (ctx->pc) {
        case 0x224da0u: goto label_224da0;
        case 0x224dc4u: goto label_224dc4;
        default: break;
    }

    ctx->pc = 0x224d20u;

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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x224e04u;
}
