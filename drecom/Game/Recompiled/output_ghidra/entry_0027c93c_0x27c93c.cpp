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

// Function: entry_0027c93c
// Address: 0x27c93c - 0x27c9a4
void entry_0027c93c_0x27c93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c93c_0x27c93c");
#endif

    ctx->pc = 0x27c93cu;

    // 0x27c93c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x27c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c940: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27c940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27c944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c948: 0x0  nop
    ctx->pc = 0x27c948u;
    // NOP
    // 0x27c94c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c950: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27c954: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c958: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c95c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c960: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c964: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c968: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c96c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c974: 0x0  nop
    ctx->pc = 0x27c974u;
    // NOP
    // 0x27c978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c97c: 0x0  nop
    ctx->pc = 0x27c97cu;
    // NOP
    // 0x27c980: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27C980u;
    {
        const bool branch_taken_0x27c980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c980) {
            ctx->pc = 0x27C9A4u;
            return;
        }
    }
    ctx->pc = 0x27C988u;
    // 0x27c988: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c98c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c994: 0x0  nop
    ctx->pc = 0x27c994u;
    // NOP
    // 0x27c998: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c99c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C99Cu;
    {
        const bool branch_taken_0x27c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c99c) {
            ctx->pc = 0x27C9C8u;
            return;
        }
    }
    ctx->pc = 0x27C9A4u;
}
