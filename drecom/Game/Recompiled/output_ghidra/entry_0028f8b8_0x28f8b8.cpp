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

// Function: entry_0028f8b8
// Address: 0x28f8b8 - 0x28f930
void entry_0028f8b8_0x28f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f8b8_0x28f8b8");
#endif

    ctx->pc = 0x28f8b8u;

    // 0x28f8b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28f8bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f8c0: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f8c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28f8c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28f8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8d0: 0x0  nop
    ctx->pc = 0x28f8d0u;
    // NOP
    // 0x28f8d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f8d8: 0x0  nop
    ctx->pc = 0x28f8d8u;
    // NOP
    // 0x28f8dc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x28F8DCu;
    {
        const bool branch_taken_0x28f8dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f8dc) {
            ctx->pc = 0x28F964u;
            return;
        }
    }
    ctx->pc = 0x28F8E4u;
    // 0x28f8e4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28f8e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28f8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f8ec: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8f0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f8f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28f8f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28f8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8fc: 0x0  nop
    ctx->pc = 0x28f8fcu;
    // NOP
    // 0x28f900: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28f908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f90c: 0x0  nop
    ctx->pc = 0x28f90cu;
    // NOP
    // 0x28f910: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f914: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F914u;
    {
        const bool branch_taken_0x28f914 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28f914) {
            ctx->pc = 0x28F930u;
            return;
        }
    }
    ctx->pc = 0x28F91Cu;
    // 0x28f91c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28f91cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f920: 0x0  nop
    ctx->pc = 0x28f920u;
    // NOP
    // 0x28f924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F928u;
    {
        const bool branch_taken_0x28f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f928) {
            ctx->pc = 0x28F94Cu;
            return;
        }
    }
    ctx->pc = 0x28F930u;
}
