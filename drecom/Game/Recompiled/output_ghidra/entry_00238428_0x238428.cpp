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

// Function: entry_00238428
// Address: 0x238428 - 0x2384c4
void entry_00238428_0x238428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238428_0x238428");
#endif

    ctx->pc = 0x238428u;

    // 0x238428: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23842c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238430: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238438: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23843c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23843cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238440: 0x0  nop
    ctx->pc = 0x238440u;
    // NOP
    // 0x238444: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x238444u;
    {
        const bool branch_taken_0x238444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238444) {
            ctx->pc = 0x23853Cu;
            return;
        }
    }
    ctx->pc = 0x23844Cu;
    // 0x23844c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238450: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238454: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238458: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23845c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x23845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238460: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238464: 0x0  nop
    ctx->pc = 0x238464u;
    // NOP
    // 0x238468: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x238468u;
    {
        const bool branch_taken_0x238468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238468) {
            ctx->pc = 0x2384C4u;
            return;
        }
    }
    ctx->pc = 0x238470u;
    // 0x238470: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238474: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238478: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x238478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23847c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238480: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x238484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238488: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23848c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238494: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x238494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23849c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x23849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2384a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2384a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2384a4: 0x0  nop
    ctx->pc = 0x2384a4u;
    // NOP
    // 0x2384a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2384A8u;
    {
        const bool branch_taken_0x2384a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2384a8) {
            ctx->pc = 0x2384C4u;
            return;
        }
    }
    ctx->pc = 0x2384B0u;
    // 0x2384b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2384b8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2384b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2384bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384c0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2384c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x2384c4u;
}
