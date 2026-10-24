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

// Function: entry_0022fe84
// Address: 0x22fe84 - 0x22ff20
void entry_0022fe84_0x22fe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fe84_0x22fe84");
#endif

    ctx->pc = 0x22fe84u;

    // 0x22fe84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe8c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe94: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22fe98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe9c: 0x0  nop
    ctx->pc = 0x22fe9cu;
    // NOP
    // 0x22fea0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22FEA0u;
    {
        const bool branch_taken_0x22fea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fea0) {
            ctx->pc = 0x22FF98u;
            return;
        }
    }
    ctx->pc = 0x22FEA8u;
    // 0x22fea8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22feb0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22feb4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feb8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22febc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22febcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fec0: 0x0  nop
    ctx->pc = 0x22fec0u;
    // NOP
    // 0x22fec4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FEC4u;
    {
        const bool branch_taken_0x22fec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fec4) {
            ctx->pc = 0x22FF20u;
            return;
        }
    }
    ctx->pc = 0x22FECCu;
    // 0x22fecc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fed4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x22fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fed8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fedc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fee4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22fee8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22feecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fef0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fef4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fef8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fefc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fefcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff00: 0x0  nop
    ctx->pc = 0x22ff00u;
    // NOP
    // 0x22ff04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FF04u;
    {
        const bool branch_taken_0x22ff04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff04) {
            ctx->pc = 0x22FF20u;
            return;
        }
    }
    ctx->pc = 0x22FF0Cu;
    // 0x22ff0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff14: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff1c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x22ff20u;
}
