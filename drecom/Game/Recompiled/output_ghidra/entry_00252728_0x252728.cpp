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

// Function: entry_00252728
// Address: 0x252728 - 0x2527e0
void entry_00252728_0x252728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252728_0x252728");
#endif

    ctx->pc = 0x252728u;

    // 0x252728: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25272c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x25272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x252730: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x252730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252734: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x252734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252738: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25273c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x252740: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252744: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252748: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25274c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25274cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252750: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252754: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25275c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x25275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252760: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252760u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252764: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x252764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25276c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252770: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252774: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25277c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252780: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252784: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25278c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x25278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252790: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252794: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25279c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2527a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2527a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2527a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2527a8: 0x0  nop
    ctx->pc = 0x2527a8u;
    // NOP
    // 0x2527ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2527acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2527b0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2527b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527b4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2527b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2527b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527bc: 0x0  nop
    ctx->pc = 0x2527bcu;
    // NOP
    // 0x2527c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2527C0u;
    {
        const bool branch_taken_0x2527c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527c0) {
            ctx->pc = 0x2527E0u;
            return;
        }
    }
    ctx->pc = 0x2527C8u;
    // 0x2527c8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2527c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527cc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2527ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2527d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527d4: 0x0  nop
    ctx->pc = 0x2527d4u;
    // NOP
    // 0x2527d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2527D8u;
    {
        const bool branch_taken_0x2527d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527d8) {
            ctx->pc = 0x2527E8u;
            return;
        }
    }
    ctx->pc = 0x2527E0u;
}
