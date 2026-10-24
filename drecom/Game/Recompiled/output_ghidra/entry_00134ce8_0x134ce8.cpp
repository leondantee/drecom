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

// Function: entry_00134ce8
// Address: 0x134ce8 - 0x134d00
void entry_00134ce8_0x134ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ce8_0x134ce8");
#endif

    ctx->pc = 0x134ce8u;

    // 0x134ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134cec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134cf0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134cf4: 0xe4600440  swc1        $f0, 0x440($v1)
    ctx->pc = 0x134cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1088), bits); }
    // 0x134cf8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134CF8u;
    {
        const bool branch_taken_0x134cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf8) {
            ctx->pc = 0x134D68u;
            return;
        }
    }
    ctx->pc = 0x134D00u;
}
