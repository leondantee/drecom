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

// Function: entry_00186400
// Address: 0x186400 - 0x186480
void entry_00186400_0x186400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186400_0x186400");
#endif

    ctx->pc = 0x186400u;

    // 0x186400: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18640c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x18640cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186410: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x186410u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186414: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18641c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186420: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186420u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186424: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186428: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18642c: 0x0  nop
    ctx->pc = 0x18642cu;
    // NOP
    // 0x186430: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x186430u;
    {
        const bool branch_taken_0x186430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186430) {
            ctx->pc = 0x186480u;
            return;
        }
    }
    ctx->pc = 0x186438u;
    // 0x186438: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x186438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18643c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186444: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186448: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186448u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18644c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18644cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186450: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186454: 0x0  nop
    ctx->pc = 0x186454u;
    // NOP
    // 0x186458: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x186458u;
    {
        const bool branch_taken_0x186458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186458) {
            ctx->pc = 0x1864C0u;
            return;
        }
    }
    ctx->pc = 0x186460u;
    // 0x186460: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186468: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18646c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x18646cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186474: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x186474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x186478: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x186478u;
    {
        const bool branch_taken_0x186478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186478) {
            ctx->pc = 0x1864C0u;
            return;
        }
    }
    ctx->pc = 0x186480u;
}
