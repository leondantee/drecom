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

// Function: entry_001d8488
// Address: 0x1d8488 - 0x1d84d8
void entry_001d8488_0x1d8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8488_0x1d8488");
#endif

    ctx->pc = 0x1d8488u;

    // 0x1d8488: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d848c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d8490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8494: 0x0  nop
    ctx->pc = 0x1d8494u;
    // NOP
    // 0x1d8498: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D8498u;
    {
        const bool branch_taken_0x1d8498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d8498) {
            ctx->pc = 0x1D84D8u;
            return;
        }
    }
    ctx->pc = 0x1D84A0u;
    // 0x1d84a0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84a4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d84a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d84a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d84ac: 0x0  nop
    ctx->pc = 0x1d84acu;
    // NOP
    // 0x1d84b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d84b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d84b4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d84b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d84b8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d84b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d84bc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d84c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d84c4: 0x0  nop
    ctx->pc = 0x1d84c4u;
    // NOP
    // 0x1d84c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D84C8u;
    {
        const bool branch_taken_0x1d84c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d84c8) {
            ctx->pc = 0x1D84D8u;
            return;
        }
    }
    ctx->pc = 0x1D84D0u;
    // 0x1d84d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d84d4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d84d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x1d84d8u;
}
