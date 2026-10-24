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

// Function: entry_00299f0c
// Address: 0x299f0c - 0x299f14
void entry_00299f0c_0x299f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299f0c_0x299f0c");
#endif

    ctx->pc = 0x299f0cu;

    // 0x299f0c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f10: 0xe46001d4  swc1        $f0, 0x1D4($v1)
    ctx->pc = 0x299f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 468), bits); }
    ctx->pc = 0x299f14u;
}
