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

// Function: entry_00134378
// Address: 0x134378 - 0x134398
void entry_00134378_0x134378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134378_0x134378");
#endif

    ctx->pc = 0x134378u;

    // 0x134378: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x13437c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x13437cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x134380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134388: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13438c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x13438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x134390: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x134390u;
    {
        const bool branch_taken_0x134390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134390) {
            ctx->pc = 0x134420u;
            return;
        }
    }
    ctx->pc = 0x134398u;
}
