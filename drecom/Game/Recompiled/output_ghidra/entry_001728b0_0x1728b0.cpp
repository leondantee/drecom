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

// Function: entry_001728b0
// Address: 0x1728b0 - 0x1728b8
void entry_001728b0_0x1728b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001728b0_0x1728b0");
#endif

    ctx->pc = 0x1728b0u;

    // 0x1728b0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1728b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->pc = 0x1728b8u;
}
