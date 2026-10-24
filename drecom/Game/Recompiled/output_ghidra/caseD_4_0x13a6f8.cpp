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

// Function: caseD_4
// Address: 0x13a6f8 - 0x13a75c
void caseD_4_0x13a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x13a6f8");
#endif

    ctx->pc = 0x13a6f8u;

    // 0x13a6f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a6fc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a700: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a704: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a708: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a70c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13a710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a714: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a720: 0x0  nop
    ctx->pc = 0x13a720u;
    // NOP
    // 0x13a724: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a728: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a72c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a730: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a738: 0x0  nop
    ctx->pc = 0x13a738u;
    // NOP
    // 0x13a73c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a740: 0x0  nop
    ctx->pc = 0x13a740u;
    // NOP
    // 0x13a744: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13A744u;
    {
        const bool branch_taken_0x13a744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a744) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A74Cu;
    // 0x13a74c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a750: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a758: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13a75cu;
}
