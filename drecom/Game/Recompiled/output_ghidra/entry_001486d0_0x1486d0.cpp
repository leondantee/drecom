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

// Function: entry_001486d0
// Address: 0x1486d0 - 0x1486e0
void entry_001486d0_0x1486d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001486d0_0x1486d0");
#endif

    ctx->pc = 0x1486d0u;

    // 0x1486d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486d4: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x1486d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1486d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1486d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1486dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1486dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1486e0u;
}
