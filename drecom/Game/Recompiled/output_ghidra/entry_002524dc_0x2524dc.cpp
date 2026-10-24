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

// Function: entry_002524dc
// Address: 0x2524dc - 0x252594
void entry_002524dc_0x2524dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002524dc_0x2524dc");
#endif

    ctx->pc = 0x2524dcu;

    // 0x2524dc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524e0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2524e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2524e4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2524e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524e8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2524e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2524ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2524f0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2524f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2524f4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2524f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524f8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2524f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252500: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x252500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252504: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252508: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25250c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25250cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252510: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x252510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252514: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252514u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252518: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x252518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25251c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25251cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252520: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x252520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252524: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252528: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25252c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25252cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252530: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x252530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x252534: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x252534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252538: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x252538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25253c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25253cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x252540: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x252540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252544: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252544u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x252548: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25254c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x252550: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252554: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x252558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x252558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25255c: 0x0  nop
    ctx->pc = 0x25255cu;
    // NOP
    // 0x252560: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x252560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x252564: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252568: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x252568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25256c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25256cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252570: 0x0  nop
    ctx->pc = 0x252570u;
    // NOP
    // 0x252574: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252574u;
    {
        const bool branch_taken_0x252574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252574) {
            ctx->pc = 0x252594u;
            return;
        }
    }
    ctx->pc = 0x25257Cu;
    // 0x25257c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x25257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252580: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x252580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252584: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252588: 0x0  nop
    ctx->pc = 0x252588u;
    // NOP
    // 0x25258c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25258Cu;
    {
        const bool branch_taken_0x25258c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25258c) {
            ctx->pc = 0x25259Cu;
            return;
        }
    }
    ctx->pc = 0x252594u;
}
