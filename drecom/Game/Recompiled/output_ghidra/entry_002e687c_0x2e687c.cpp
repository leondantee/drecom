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

// Function: entry_002e687c
// Address: 0x2e687c - 0x2e68f0
void entry_002e687c_0x2e687c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e687c_0x2e687c");
#endif

    ctx->pc = 0x2e687cu;

    // 0x2e687c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6880: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6884: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e6888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e688c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6894: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e6898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e689c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e68a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68a4: 0x0  nop
    ctx->pc = 0x2e68a4u;
    // NOP
    // 0x2e68a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e68a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e68ac: 0x0  nop
    ctx->pc = 0x2e68acu;
    // NOP
    // 0x2e68b0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E68B0u;
    {
        const bool branch_taken_0x2e68b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e68b0) {
            ctx->pc = 0x2E68F0u;
            return;
        }
    }
    ctx->pc = 0x2E68B8u;
    // 0x2e68b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68bc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e68c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e68c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68c8: 0x0  nop
    ctx->pc = 0x2e68c8u;
    // NOP
    // 0x2e68cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e68ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e68d0: 0x0  nop
    ctx->pc = 0x2e68d0u;
    // NOP
    // 0x2e68d4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E68D4u;
    {
        const bool branch_taken_0x2e68d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e68d4) {
            ctx->pc = 0x2E6920u;
            return;
        }
    }
    ctx->pc = 0x2E68DCu;
    // 0x2e68dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e68dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68e4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e68e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E68E8u;
    {
        const bool branch_taken_0x2e68e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e68e8) {
            ctx->pc = 0x2E6920u;
            return;
        }
    }
    ctx->pc = 0x2E68F0u;
}
