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

// Function: entry_0020aa04
// Address: 0x20aa04 - 0x20aa10
void entry_0020aa04_0x20aa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aa04_0x20aa04");
#endif

    ctx->pc = 0x20aa04u;

    // 0x20aa04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa08: 0xc4209490  lwc1        $f0, -0x6B70($at)
    ctx->pc = 0x20aa08u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20aa0c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x20aa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->pc = 0x20aa10u;
}
