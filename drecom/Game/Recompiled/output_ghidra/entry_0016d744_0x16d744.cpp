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

// Function: entry_0016d744
// Address: 0x16d744 - 0x16d750
void entry_0016d744_0x16d744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d744_0x16d744");
#endif

    ctx->pc = 0x16d744u;

    // 0x16d744: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d748: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16d748u;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d74c: 0x0  nop
    ctx->pc = 0x16d74cu;
    // NOP
    ctx->pc = 0x16d750u;
}
