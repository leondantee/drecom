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

// Function: entry_00134a64
// Address: 0x134a64 - 0x134a74
void entry_00134a64_0x134a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a64_0x134a64");
#endif

    ctx->pc = 0x134a64u;

    // 0x134a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a6c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a70: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    ctx->pc = 0x134a74u;
}
