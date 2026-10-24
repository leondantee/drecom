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

// Function: entry_0023f2d8
// Address: 0x23f2d8 - 0x23f380
void entry_0023f2d8_0x23f2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f2d8_0x23f2d8");
#endif

    ctx->pc = 0x23f2d8u;

    // 0x23f2d8: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x23f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f2dc: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x23f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x23f2e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f2e8: 0x0  nop
    ctx->pc = 0x23f2e8u;
    // NOP
    // 0x23f2ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23f2ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f2f0: 0x0  nop
    ctx->pc = 0x23f2f0u;
    // NOP
    // 0x23f2f4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23F2F4u;
    {
        const bool branch_taken_0x23f2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f2f4) {
            ctx->pc = 0x23F3D8u;
            return;
        }
    }
    ctx->pc = 0x23F2FCu;
    // 0x23f2fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f300: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f304: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23f304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f30c: 0x0  nop
    ctx->pc = 0x23f30cu;
    // NOP
    // 0x23f310: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23f310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f314: 0x0  nop
    ctx->pc = 0x23f314u;
    // NOP
    // 0x23f318: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23F318u;
    {
        const bool branch_taken_0x23f318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f318) {
            ctx->pc = 0x23F380u;
            return;
        }
    }
    ctx->pc = 0x23F320u;
    // 0x23f320: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f324: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f328: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f32c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23f330: 0x34700fdb  ori         $s0, $v1, 0xFDB
    ctx->pc = 0x23f330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23f334: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23f334u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f338: 0x0  nop
    ctx->pc = 0x23f338u;
    // NOP
    // 0x23f33c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23f33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f340: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23f340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23f344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f348: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f34c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f354: 0x0  nop
    ctx->pc = 0x23f354u;
    // NOP
    // 0x23f358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f35c: 0x0  nop
    ctx->pc = 0x23f35cu;
    // NOP
    // 0x23f360: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23F360u;
    {
        const bool branch_taken_0x23f360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f360) {
            ctx->pc = 0x23F3D8u;
            return;
        }
    }
    ctx->pc = 0x23F368u;
    // 0x23f368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f36c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23f370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f374: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23f378: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23F378u;
    {
        const bool branch_taken_0x23f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f378) {
            ctx->pc = 0x23F3D8u;
            return;
        }
    }
    ctx->pc = 0x23F380u;
}
