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

// Function: entry_00189bb8
// Address: 0x189bb8 - 0x189bc4
void entry_00189bb8_0x189bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189bb8_0x189bb8");
#endif

    ctx->pc = 0x189bb8u;

    // 0x189bb8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189bbc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bc0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->pc = 0x189bc4u;
}
