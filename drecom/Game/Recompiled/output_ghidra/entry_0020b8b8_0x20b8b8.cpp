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

// Function: entry_0020b8b8
// Address: 0x20b8b8 - 0x20b8c4
void entry_0020b8b8_0x20b8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b8b8_0x20b8b8");
#endif

    ctx->pc = 0x20b8b8u;

    // 0x20b8b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b8bc: 0xc42094c0  lwc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b8bcu;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b8c0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x20b8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    ctx->pc = 0x20b8c4u;
}
