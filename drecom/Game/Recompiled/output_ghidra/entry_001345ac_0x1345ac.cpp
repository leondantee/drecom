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

// Function: entry_001345ac
// Address: 0x1345ac - 0x1345c4
void entry_001345ac_0x1345ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345ac_0x1345ac");
#endif

    ctx->pc = 0x1345acu;

    // 0x1345ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1345acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1345b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1345b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1345b8: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1345b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1345bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x13462Cu;
            return;
        }
    }
    ctx->pc = 0x1345C4u;
}
