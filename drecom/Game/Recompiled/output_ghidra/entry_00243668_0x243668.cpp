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

// Function: entry_00243668
// Address: 0x243668 - 0x243704
void entry_00243668_0x243668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243668_0x243668");
#endif

    ctx->pc = 0x243668u;

    // 0x243668: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24366c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243670: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243674: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243678: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24367c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24367cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243680: 0x0  nop
    ctx->pc = 0x243680u;
    // NOP
    // 0x243684: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x243684u;
    {
        const bool branch_taken_0x243684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243684) {
            ctx->pc = 0x243788u;
            return;
        }
    }
    ctx->pc = 0x24368Cu;
    // 0x24368c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243694: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243698: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24369c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x24369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2436a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2436a4: 0x0  nop
    ctx->pc = 0x2436a4u;
    // NOP
    // 0x2436a8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2436A8u;
    {
        const bool branch_taken_0x2436a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2436a8) {
            ctx->pc = 0x243704u;
            return;
        }
    }
    ctx->pc = 0x2436B0u;
    // 0x2436b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2436b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2436b8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2436b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2436bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2436c0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2436c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2436c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2436c8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2436c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2436cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2436d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2436d4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2436d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2436d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2436dc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2436dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2436e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2436e4: 0x0  nop
    ctx->pc = 0x2436e4u;
    // NOP
    // 0x2436e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2436E8u;
    {
        const bool branch_taken_0x2436e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2436e8) {
            ctx->pc = 0x243704u;
            return;
        }
    }
    ctx->pc = 0x2436F0u;
    // 0x2436f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2436f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2436f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2436f8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2436f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2436fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243700: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x243700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x243704u;
}
