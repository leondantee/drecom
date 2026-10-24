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

// Function: entry_0034a318
// Address: 0x34a318 - 0x34a3ac
void entry_0034a318_0x34a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a318_0x34a318");
#endif

    ctx->pc = 0x34a318u;

    // 0x34a318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a31c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a320: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a328: 0x0  nop
    ctx->pc = 0x34a328u;
    // NOP
    // 0x34a32c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a330: 0x0  nop
    ctx->pc = 0x34a330u;
    // NOP
    // 0x34a334: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x34A334u;
    {
        const bool branch_taken_0x34a334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a334) {
            ctx->pc = 0x34A3ACu;
            return;
        }
    }
    ctx->pc = 0x34A33Cu;
    // 0x34a33c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a340: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a344: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a348: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34A348u;
    {
        const bool branch_taken_0x34a348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a348) {
            ctx->pc = 0x34A3ACu;
            return;
        }
    }
    ctx->pc = 0x34A350u;
    // 0x34a350: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x34a350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a354: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a358: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x34a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a35c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a364: 0x0  nop
    ctx->pc = 0x34a364u;
    // NOP
    // 0x34a368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a36c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a370: 0x0  nop
    ctx->pc = 0x34a370u;
    // NOP
    // 0x34a374: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x34A374u;
    {
        const bool branch_taken_0x34a374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a374) {
            ctx->pc = 0x34A3ACu;
            return;
        }
    }
    ctx->pc = 0x34A37Cu;
    // 0x34a37c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a380: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a384: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a388: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a38c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a390: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a398: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a39c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34a3acu;
}
