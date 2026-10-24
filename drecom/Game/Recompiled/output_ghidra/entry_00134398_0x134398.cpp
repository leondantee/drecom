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

// Function: entry_00134398
// Address: 0x134398 - 0x1343b8
void entry_00134398_0x134398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134398_0x134398");
#endif

    ctx->pc = 0x134398u;

    // 0x134398: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x134398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x13439c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343a8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1343a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343ac: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1343acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1343b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1343B0u;
    {
        const bool branch_taken_0x1343b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343b0) {
            ctx->pc = 0x134420u;
            return;
        }
    }
    ctx->pc = 0x1343B8u;
}
