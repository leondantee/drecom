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

// Function: entry_00189ecc
// Address: 0x189ecc - 0x189f20
void entry_00189ecc_0x189ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ecc_0x189ecc");
#endif

    ctx->pc = 0x189eccu;

    // 0x189ecc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x189eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ed0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x189ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ed4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189ed8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x189ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x189edc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ee0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189ee8: 0x0  nop
    ctx->pc = 0x189ee8u;
    // NOP
    // 0x189eec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x189EECu;
    {
        const bool branch_taken_0x189eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189eec) {
            ctx->pc = 0x189F4Cu;
            return;
        }
    }
    ctx->pc = 0x189EF4u;
    // 0x189ef4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189efc: 0x0  nop
    ctx->pc = 0x189efcu;
    // NOP
    // 0x189f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189f04: 0x0  nop
    ctx->pc = 0x189f04u;
    // NOP
    // 0x189f08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189F08u;
    {
        const bool branch_taken_0x189f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f08) {
            ctx->pc = 0x189F20u;
            return;
        }
    }
    ctx->pc = 0x189F10u;
    // 0x189f10: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f14: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x189f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189F18u;
    {
        const bool branch_taken_0x189f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f18) {
            ctx->pc = 0x189F2Cu;
            return;
        }
    }
    ctx->pc = 0x189F20u;
}
