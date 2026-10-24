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

// Function: entry_00176628
// Address: 0x176628 - 0x176670
void entry_00176628_0x176628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176628_0x176628");
#endif

    ctx->pc = 0x176628u;

    // 0x176628: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x176628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17662c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x17662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176634: 0x0  nop
    ctx->pc = 0x176634u;
    // NOP
    // 0x176638: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176638u;
    {
        const bool branch_taken_0x176638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176638) {
            ctx->pc = 0x176670u;
            return;
        }
    }
    ctx->pc = 0x176640u;
    // 0x176640: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x176640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176644: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x176644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176648: 0x158c3c  dsll32      $s1, $s5, 16
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 16));
    // 0x17664c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x17664cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x176650: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176654: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176658: 0x13ac3c  dsll32      $s5, $s3, 16
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) << (32 + 16));
    // 0x17665c: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x17665cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x176660: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176664: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x176668: 0x119c3c  dsll32      $s3, $s1, 16
    ctx->pc = 0x176668u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 16));
    // 0x17666c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x17666cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->pc = 0x176670u;
}
