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

// Function: entry_00320424
// Address: 0x320424 - 0x320430
void entry_00320424_0x320424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320424_0x320424");
#endif

    ctx->pc = 0x320424u;

    // 0x320424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320428: 0x0  nop
    ctx->pc = 0x320428u;
    // NOP
    // 0x32042c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x32042cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x320430u;
}
