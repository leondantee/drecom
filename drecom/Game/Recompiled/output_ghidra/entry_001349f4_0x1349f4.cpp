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

// Function: entry_001349f4
// Address: 0x1349f4 - 0x134a0c
void entry_001349f4_0x1349f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001349f4_0x1349f4");
#endif

    ctx->pc = 0x1349f4u;

    // 0x1349f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1349f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1349fc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a00: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x134a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134a04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134A04u;
    {
        const bool branch_taken_0x134a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a04) {
            ctx->pc = 0x134A74u;
            return;
        }
    }
    ctx->pc = 0x134A0Cu;
}
