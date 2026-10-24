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

// Function: entry_0016e500
// Address: 0x16e500 - 0x16e550
void entry_0016e500_0x16e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e500_0x16e500");
#endif

    ctx->pc = 0x16e500u;

    // 0x16e500: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x16e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e504: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e508: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e508u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e50c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e510: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e510u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e514: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e518: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e51c: 0x0  nop
    ctx->pc = 0x16e51cu;
    // NOP
    // 0x16e520: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E520u;
    {
        const bool branch_taken_0x16e520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e520) {
            ctx->pc = 0x16E550u;
            return;
        }
    }
    ctx->pc = 0x16E528u;
    // 0x16e528: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e52c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e530: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e530u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e538: 0x0  nop
    ctx->pc = 0x16e538u;
    // NOP
    // 0x16e53c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E53Cu;
    {
        const bool branch_taken_0x16e53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e53c) {
            ctx->pc = 0x16E550u;
            return;
        }
    }
    ctx->pc = 0x16E544u;
    // 0x16e544: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x16e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e548: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e54c: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
    ctx->pc = 0x16e550u;
}
