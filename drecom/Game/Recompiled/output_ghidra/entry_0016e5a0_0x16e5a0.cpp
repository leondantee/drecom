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

// Function: entry_0016e5a0
// Address: 0x16e5a0 - 0x16e5f0
void entry_0016e5a0_0x16e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5a0_0x16e5a0");
#endif

    ctx->pc = 0x16e5a0u;

    // 0x16e5a0: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x16e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e5a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5a8: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16e5a8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e5ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5b0: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16e5b0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e5b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16e5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e5bc: 0x0  nop
    ctx->pc = 0x16e5bcu;
    // NOP
    // 0x16e5c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16E5C0u;
    {
        const bool branch_taken_0x16e5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e5c0) {
            ctx->pc = 0x16E5F0u;
            return;
        }
    }
    ctx->pc = 0x16E5C8u;
    // 0x16e5c8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e5cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5d0: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e5d0u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e5d8: 0x0  nop
    ctx->pc = 0x16e5d8u;
    // NOP
    // 0x16e5dc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E5DCu;
    {
        const bool branch_taken_0x16e5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e5dc) {
            ctx->pc = 0x16E5F0u;
            return;
        }
    }
    ctx->pc = 0x16E5E4u;
    // 0x16e5e4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x16e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e5e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e5ec: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
    ctx->pc = 0x16e5f0u;
}
