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

// Function: entry_001723ac
// Address: 0x1723ac - 0x1723b4
void entry_001723ac_0x1723ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723ac_0x1723ac");
#endif

    ctx->pc = 0x1723acu;

    // 0x1723ac: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1723acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723b0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1723b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x1723b4u;
}
