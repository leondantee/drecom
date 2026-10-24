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

// Function: entry_0019a96c
// Address: 0x19a96c - 0x19a978
void entry_0019a96c_0x19a96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a96c_0x19a96c");
#endif

    ctx->pc = 0x19a96cu;

    // 0x19a96c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a970: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x19a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a974: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x19a974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->pc = 0x19a978u;
}
