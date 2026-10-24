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

// Function: entry_00243d60
// Address: 0x243d60 - 0x243e74
void entry_00243d60_0x243d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243d60_0x243d60");
#endif

    switch (ctx->pc) {
        case 0x243decu: goto label_243dec;
        case 0x243e10u: goto label_243e10;
        case 0x243e58u: goto label_243e58;
        default: break;
    }

    ctx->pc = 0x243d60u;

    // 0x243d60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x243d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x243d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x243d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x243d6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x243d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d74: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x243d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x243d78: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x243d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243d7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243d7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243d80: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x243d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x243d84: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x243D84u;
    {
        const bool branch_taken_0x243d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d84) {
            ctx->pc = 0x243EE0u;
            return;
        }
    }
    ctx->pc = 0x243D8Cu;
    // 0x243d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d90: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d94: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x243d98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x243d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243da0: 0x0  nop
    ctx->pc = 0x243da0u;
    // NOP
    // 0x243da4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243da8: 0x0  nop
    ctx->pc = 0x243da8u;
    // NOP
    // 0x243dac: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x243DACu;
    {
        const bool branch_taken_0x243dac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243dac) {
            ctx->pc = 0x243EE0u;
            return;
        }
    }
    ctx->pc = 0x243DB4u;
    // 0x243db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243db8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dbc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243dc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x243dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dc8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243dd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243de0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243de4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243DE4u;
    SET_GPR_U32(ctx, 31, 0x243DECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243DE4u, 0x243DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DECu;
label_243dec:
    // 0x243dec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243df0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243df4: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243df8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243dfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243dfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e04: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243e04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243e08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E08u;
    SET_GPR_U32(ctx, 31, 0x243E10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E08u, 0x243E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E10u;
label_243e10:
    // 0x243e10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243e18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x243E18u;
    {
        const bool branch_taken_0x243e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e18) {
            ctx->pc = 0x243E74u;
            return;
        }
    }
    ctx->pc = 0x243E20u;
    // 0x243e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243e24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243e30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243e38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e3c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243e40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243e48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243e50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243E50u;
    SET_GPR_U32(ctx, 31, 0x243E58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243E50u, 0x243E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243e5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243e60: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243e64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243e68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243e68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243e6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243e70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243e70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x243e74u;
}
