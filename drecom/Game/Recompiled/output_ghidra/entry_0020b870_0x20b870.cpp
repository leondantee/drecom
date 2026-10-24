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

// Function: entry_0020b870
// Address: 0x20b870 - 0x20b87c
void entry_0020b870_0x20b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b870_0x20b870");
#endif

    ctx->pc = 0x20b870u;

    // 0x20b870: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b874: 0xc42094c0  lwc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b874u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b878: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x20b878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    ctx->pc = 0x20b87cu;
}
