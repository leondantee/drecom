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

// Function: entry_00186634
// Address: 0x186634 - 0x186668
void entry_00186634_0x186634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186634_0x186634");
#endif

    ctx->pc = 0x186634u;

    // 0x186634: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186638: 0xc4200280  lwc1        $f0, 0x280($at)
    ctx->pc = 0x186638u;
    { uint32_t bits = FAST_READ32(0x480280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18663c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x18663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x186640: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186644: 0xc4200338  lwc1        $f0, 0x338($at)
    ctx->pc = 0x186644u;
    { uint32_t bits = FAST_READ32(0x480338u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186648: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x186648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18664c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186650: 0xc4200288  lwc1        $f0, 0x288($at)
    ctx->pc = 0x186650u;
    { uint32_t bits = FAST_READ32(0x480288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186654: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x186654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x186658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18665c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186660: 0x0  nop
    ctx->pc = 0x186660u;
    // NOP
    // 0x186664: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x186664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x186668u;
}
