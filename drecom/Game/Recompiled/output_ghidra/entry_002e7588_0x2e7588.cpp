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

// Function: entry_002e7588
// Address: 0x2e7588 - 0x2e7598
void entry_002e7588_0x2e7588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7588_0x2e7588");
#endif

    ctx->pc = 0x2e7588u;

    // 0x2e7588: 0x3c1540c0  lui         $s5, 0x40C0
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16576 << 16));
    // 0x2e758c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2e758cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7590: 0x0  nop
    ctx->pc = 0x2e7590u;
    // NOP
    // 0x2e7594: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e7594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x2e7598u;
}
