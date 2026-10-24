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

// Function: entry_00341eb0
// Address: 0x341eb0 - 0x341ebc
void entry_00341eb0_0x341eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341eb0_0x341eb0");
#endif

    ctx->pc = 0x341eb0u;

    // 0x341eb0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341eb4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341eb8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x341eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x341ebcu;
}
