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

// Function: entry_0018990c
// Address: 0x18990c - 0x189918
void entry_0018990c_0x18990c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018990c_0x18990c");
#endif

    ctx->pc = 0x18990cu;

    // 0x18990c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189910: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189914: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x189918u;
}
