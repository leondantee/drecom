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

// Function: entry_00176670
// Address: 0x176670 - 0x1766b8
void entry_00176670_0x176670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176670_0x176670");
#endif

    ctx->pc = 0x176670u;

    // 0x176670: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x176670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176674: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17667c: 0x0  nop
    ctx->pc = 0x17667cu;
    // NOP
    // 0x176680: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176680u;
    {
        const bool branch_taken_0x176680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176680) {
            ctx->pc = 0x1766B8u;
            return;
        }
    }
    ctx->pc = 0x176688u;
    // 0x176688: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17668c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176690: 0x138c3c  dsll32      $s1, $s3, 16
    ctx->pc = 0x176690u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176694: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x176694u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x176698: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17669c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1766a0: 0x129c3c  dsll32      $s3, $s2, 16
    ctx->pc = 0x1766a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1766a4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1766a4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1766a8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1766b0: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1766b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1766b4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1766b4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->pc = 0x1766b8u;
}
