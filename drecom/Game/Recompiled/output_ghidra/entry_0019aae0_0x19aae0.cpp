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

// Function: entry_0019aae0
// Address: 0x19aae0 - 0x19ab1c
void entry_0019aae0_0x19aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aae0_0x19aae0");
#endif

    ctx->pc = 0x19aae0u;

    // 0x19aae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aae4: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aae4u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aae8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19aaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aaf0: 0x0  nop
    ctx->pc = 0x19aaf0u;
    // NOP
    // 0x19aaf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aaf8: 0x0  nop
    ctx->pc = 0x19aaf8u;
    // NOP
    // 0x19aafc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19AAFCu;
    {
        const bool branch_taken_0x19aafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aafc) {
            ctx->pc = 0x19AB1Cu;
            return;
        }
    }
    ctx->pc = 0x19AB04u;
    // 0x19ab04: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19ab08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ab08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab0c: 0x0  nop
    ctx->pc = 0x19ab0cu;
    // NOP
    // 0x19ab10: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19ab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x19ab14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AB14u;
    {
        const bool branch_taken_0x19ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab14) {
            ctx->pc = 0x19AB28u;
            return;
        }
    }
    ctx->pc = 0x19AB1Cu;
}
