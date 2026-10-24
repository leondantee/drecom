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

// Function: entry_0016e69c
// Address: 0x16e69c - 0x16e6ec
void entry_0016e69c_0x16e69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e69c_0x16e69c");
#endif

    ctx->pc = 0x16e69cu;

    // 0x16e69c: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x16e69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e6a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6a4: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e6a4u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6ac: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e6acu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6b8: 0x0  nop
    ctx->pc = 0x16e6b8u;
    // NOP
    // 0x16e6bc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E6BCu;
    {
        const bool branch_taken_0x16e6bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6bc) {
            ctx->pc = 0x16E6ECu;
            return;
        }
    }
    ctx->pc = 0x16E6C4u;
    // 0x16e6c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e6c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6cc: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e6ccu;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e6d4: 0x0  nop
    ctx->pc = 0x16e6d4u;
    // NOP
    // 0x16e6d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E6D8u;
    {
        const bool branch_taken_0x16e6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6d8) {
            ctx->pc = 0x16E6ECu;
            return;
        }
    }
    ctx->pc = 0x16E6E0u;
    // 0x16e6e0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e6e8: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16e6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
    ctx->pc = 0x16e6ecu;
}
