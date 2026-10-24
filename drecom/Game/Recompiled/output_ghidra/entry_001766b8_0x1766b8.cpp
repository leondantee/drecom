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

// Function: entry_001766b8
// Address: 0x1766b8 - 0x176700
void entry_001766b8_0x1766b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001766b8_0x1766b8");
#endif

    ctx->pc = 0x1766b8u;

    // 0x1766b8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1766b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1766bc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1766c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1766c4: 0x0  nop
    ctx->pc = 0x1766c4u;
    // NOP
    // 0x1766c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1766C8u;
    {
        const bool branch_taken_0x1766c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1766c8) {
            ctx->pc = 0x176700u;
            return;
        }
    }
    ctx->pc = 0x1766D0u;
    // 0x1766d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1766d8: 0x128c3c  dsll32      $s1, $s2, 16
    ctx->pc = 0x1766d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1766dc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1766dcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1766e0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1766e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1766e8: 0x14943c  dsll32      $s2, $s4, 16
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1766ec: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1766ecu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1766f0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766f4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1766f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1766f8: 0x11a43c  dsll32      $s4, $s1, 16
    ctx->pc = 0x1766f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1766fc: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1766fcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    ctx->pc = 0x176700u;
}
