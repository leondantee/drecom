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

// Function: entry_00134e54
// Address: 0x134e54 - 0x134e64
void entry_00134e54_0x134e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e54_0x134e54");
#endif

    ctx->pc = 0x134e54u;

    // 0x134e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e60: 0xe4600444  swc1        $f0, 0x444($v1)
    ctx->pc = 0x134e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1092), bits); }
    ctx->pc = 0x134e64u;
}
