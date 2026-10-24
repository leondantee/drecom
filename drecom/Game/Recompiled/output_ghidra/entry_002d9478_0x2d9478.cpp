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

// Function: entry_002d9478
// Address: 0x2d9478 - 0x2d9488
void entry_002d9478_0x2d9478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9478_0x2d9478");
#endif

    ctx->pc = 0x2d9478u;

    // 0x2d9478: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2d9478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2d947c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d947cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9480: 0x0  nop
    ctx->pc = 0x2d9480u;
    // NOP
    // 0x2d9484: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2d9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x2d9488u;
}
