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

// Function: entry_002d9334
// Address: 0x2d9334 - 0x2d9344
void entry_002d9334_0x2d9334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9334_0x2d9334");
#endif

    ctx->pc = 0x2d9334u;

    // 0x2d9334: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2d9338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d933c: 0x0  nop
    ctx->pc = 0x2d933cu;
    // NOP
    // 0x2d9340: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x2d9344u;
}
