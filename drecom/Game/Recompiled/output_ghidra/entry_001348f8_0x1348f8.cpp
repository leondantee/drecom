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

// Function: entry_001348f8
// Address: 0x1348f8 - 0x134910
void entry_001348f8_0x1348f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001348f8_0x1348f8");
#endif

    ctx->pc = 0x1348f8u;

    // 0x1348f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1348f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1348fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1348fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134900: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134904: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x134904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x134908: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134908u;
    {
        const bool branch_taken_0x134908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134908) {
            ctx->pc = 0x134978u;
            return;
        }
    }
    ctx->pc = 0x134910u;
}
