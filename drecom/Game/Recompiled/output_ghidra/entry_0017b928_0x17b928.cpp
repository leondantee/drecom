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

// Function: entry_0017b928
// Address: 0x17b928 - 0x17b934
void entry_0017b928_0x17b928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b928_0x17b928");
#endif

    ctx->pc = 0x17b928u;

    // 0x17b928: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b92c: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b92cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b930: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x17b934u;
}
