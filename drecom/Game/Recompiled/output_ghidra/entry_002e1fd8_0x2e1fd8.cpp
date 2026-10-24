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

// Function: entry_002e1fd8
// Address: 0x2e1fd8 - 0x2e1ff8
void entry_002e1fd8_0x2e1fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1fd8_0x2e1fd8");
#endif

    ctx->pc = 0x2e1fd8u;

    // 0x2e1fd8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e1fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e1fdc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e1fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e1fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e1fe8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e1fec: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e1fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e1ff0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E1FF0u;
    {
        const bool branch_taken_0x2e1ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ff0) {
            ctx->pc = 0x2E2080u;
            return;
        }
    }
    ctx->pc = 0x2E1FF8u;
}
