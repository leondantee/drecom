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

// Function: entry_00145c7c
// Address: 0x145c7c - 0x145ca0
void entry_00145c7c_0x145c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145c7c_0x145c7c");
#endif

    ctx->pc = 0x145c7cu;

    // 0x145c7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c80: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x145c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x145c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145c88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c8c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x145c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x145c90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c94: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x145c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145c9c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x145c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x145ca0u;
}
