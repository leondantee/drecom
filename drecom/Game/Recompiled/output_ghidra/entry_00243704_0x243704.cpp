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

// Function: entry_00243704
// Address: 0x243704 - 0x243788
void entry_00243704_0x243704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243704_0x243704");
#endif

    ctx->pc = 0x243704u;

    // 0x243704: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243708: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24370c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x24370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243710: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243714: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24371c: 0x0  nop
    ctx->pc = 0x24371cu;
    // NOP
    // 0x243720: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x243720u;
    {
        const bool branch_taken_0x243720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243720) {
            ctx->pc = 0x243788u;
            return;
        }
    }
    ctx->pc = 0x243728u;
    // 0x243728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24372c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x243734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243738: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x243738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24373c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24373cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243740: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243744: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243748: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24374c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x24374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x243750: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243754: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243758: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x243758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24375c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243760: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x243760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243768: 0x0  nop
    ctx->pc = 0x243768u;
    // NOP
    // 0x24376c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24376Cu;
    {
        const bool branch_taken_0x24376c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24376c) {
            ctx->pc = 0x243788u;
            return;
        }
    }
    ctx->pc = 0x243774u;
    // 0x243774: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243778: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24377c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243784: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x243784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x243788u;
}
