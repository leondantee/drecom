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

// Function: entry_00130828
// Address: 0x130828 - 0x130838
void entry_00130828_0x130828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130828_0x130828");
#endif

    ctx->pc = 0x130828u;

    // 0x130828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13082c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x13082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130830: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130834: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x130838u;
}
