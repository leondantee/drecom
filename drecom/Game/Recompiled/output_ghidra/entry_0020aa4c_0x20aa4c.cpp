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

// Function: entry_0020aa4c
// Address: 0x20aa4c - 0x20aa58
void entry_0020aa4c_0x20aa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aa4c_0x20aa4c");
#endif

    ctx->pc = 0x20aa4cu;

    // 0x20aa4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa50: 0xc4209490  lwc1        $f0, -0x6B70($at)
    ctx->pc = 0x20aa50u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aa54: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x20aa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    ctx->pc = 0x20aa58u;
}
