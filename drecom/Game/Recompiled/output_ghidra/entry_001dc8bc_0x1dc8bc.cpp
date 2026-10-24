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

// Function: entry_001dc8bc
// Address: 0x1dc8bc - 0x1dc928
void entry_001dc8bc_0x1dc8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc8bc_0x1dc8bc");
#endif

    ctx->pc = 0x1dc8bcu;

    // 0x1dc8bc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1dc8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc8c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc8cc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dc8d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dc8d4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dc8d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dc8dc: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1dc8dcu;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dc8e4: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x1dc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dc8ec: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1dc8ecu;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc8f0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dc8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc8f8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dc8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dc8fc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dc900: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1dc900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc908: 0x0  nop
    ctx->pc = 0x1dc908u;
    // NOP
    // 0x1dc90c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc910: 0x0  nop
    ctx->pc = 0x1dc910u;
    // NOP
    // 0x1dc914: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC914u;
    {
        const bool branch_taken_0x1dc914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc914) {
            ctx->pc = 0x1DC928u;
            return;
        }
    }
    ctx->pc = 0x1DC91Cu;
    // 0x1dc91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc920: 0x0  nop
    ctx->pc = 0x1dc920u;
    // NOP
    // 0x1dc924: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x1dc928u;
}
