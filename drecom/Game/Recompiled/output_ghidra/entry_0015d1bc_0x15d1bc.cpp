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

// Function: entry_0015d1bc
// Address: 0x15d1bc - 0x15d1d8
void entry_0015d1bc_0x15d1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d1bc_0x15d1bc");
#endif

    ctx->pc = 0x15d1bcu;

    // 0x15d1bc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d1c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d1c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x15d1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x15d1c8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x15d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d1d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d1d4: 0xe44013bc  swc1        $f0, 0x13BC($v0)
    ctx->pc = 0x15d1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5052), bits); }
    ctx->pc = 0x15d1d8u;
}
