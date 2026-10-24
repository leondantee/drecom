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

// Function: entry_001865ec
// Address: 0x1865ec - 0x186634
void entry_001865ec_0x1865ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001865ec_0x1865ec");
#endif

    ctx->pc = 0x1865ecu;

    // 0x1865ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1865ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1865f0: 0xc4200280  lwc1        $f0, 0x280($at)
    ctx->pc = 0x1865f0u;
    { uint32_t bits = FAST_READ32(0x480280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1865f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1865f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1865f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1865fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1865fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186600: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186604: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186604u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18660c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x18660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x186610: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186614: 0xc4200288  lwc1        $f0, 0x288($at)
    ctx->pc = 0x186614u;
    { uint32_t bits = FAST_READ32(0x480288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186618: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x186618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x18661c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186624: 0x0  nop
    ctx->pc = 0x186624u;
    // NOP
    // 0x186628: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x186628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x18662c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18662Cu;
    {
        const bool branch_taken_0x18662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18662c) {
            ctx->pc = 0x186668u;
            return;
        }
    }
    ctx->pc = 0x186634u;
}
