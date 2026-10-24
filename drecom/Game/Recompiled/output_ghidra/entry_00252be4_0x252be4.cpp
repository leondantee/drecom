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

// Function: entry_00252be4
// Address: 0x252be4 - 0x252c9c
void entry_00252be4_0x252be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252be4_0x252be4");
#endif

    ctx->pc = 0x252be4u;

    // 0x252be4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x252be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252be8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x252bec: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x252becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bf0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x252bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x252bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x252bf8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x252bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x252bfc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x252bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c00: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252c08: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252c0c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c10: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252c18: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252c1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252c20: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252c28: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x252c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x252c2c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x252c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c30: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252c38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x252c3c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x252c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c40: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x252c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x252c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252c48: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x252c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252c4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252c50: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x252c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252c58: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x252c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x252c5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252c64: 0x0  nop
    ctx->pc = 0x252c64u;
    // NOP
    // 0x252c68: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x252c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x252c6c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c70: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x252c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252c78: 0x0  nop
    ctx->pc = 0x252c78u;
    // NOP
    // 0x252c7c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x252C7Cu;
    {
        const bool branch_taken_0x252c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252c7c) {
            ctx->pc = 0x252C9Cu;
            return;
        }
    }
    ctx->pc = 0x252C84u;
    // 0x252c84: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x252c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c88: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252c90: 0x0  nop
    ctx->pc = 0x252c90u;
    // NOP
    // 0x252c94: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252C94u;
    {
        const bool branch_taken_0x252c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252c94) {
            ctx->pc = 0x252CB8u;
            return;
        }
    }
    ctx->pc = 0x252C9Cu;
}
