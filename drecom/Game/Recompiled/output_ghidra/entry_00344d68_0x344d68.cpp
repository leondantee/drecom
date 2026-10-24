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

// Function: entry_00344d68
// Address: 0x344d68 - 0x344dfc
void entry_00344d68_0x344d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344d68_0x344d68");
#endif

    ctx->pc = 0x344d68u;

    // 0x344d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d6c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x344d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344d70: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d78: 0x0  nop
    ctx->pc = 0x344d78u;
    // NOP
    // 0x344d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344d80: 0x0  nop
    ctx->pc = 0x344d80u;
    // NOP
    // 0x344d84: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x344D84u;
    {
        const bool branch_taken_0x344d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344d84) {
            ctx->pc = 0x344DFCu;
            return;
        }
    }
    ctx->pc = 0x344D8Cu;
    // 0x344d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d94: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x344d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x344d98: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x344D98u;
    {
        const bool branch_taken_0x344d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344d98) {
            ctx->pc = 0x344DFCu;
            return;
        }
    }
    ctx->pc = 0x344DA0u;
    // 0x344da0: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x344da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344da8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x344da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344dac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x344dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x344db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344db4: 0x0  nop
    ctx->pc = 0x344db4u;
    // NOP
    // 0x344db8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x344db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x344dbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x344dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344dc0: 0x0  nop
    ctx->pc = 0x344dc0u;
    // NOP
    // 0x344dc4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x344DC4u;
    {
        const bool branch_taken_0x344dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344dc4) {
            ctx->pc = 0x344DFCu;
            return;
        }
    }
    ctx->pc = 0x344DCCu;
    // 0x344dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344dd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344dd8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x344ddc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344de0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344de4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344de8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344df0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344df8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x344dfcu;
}
