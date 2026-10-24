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

// Function: entry_001343b8
// Address: 0x1343b8 - 0x1343f0
void entry_001343b8_0x1343b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001343b8_0x1343b8");
#endif

    ctx->pc = 0x1343b8u;

    // 0x1343b8: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x1343bc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343c8: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1343c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343cc: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x1343ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x1343d0: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x1343d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x1343d4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1343d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1343d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1343d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1343dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1343e0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1343e4: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x1343e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x1343e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1343E8u;
    {
        const bool branch_taken_0x1343e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343e8) {
            ctx->pc = 0x134420u;
            return;
        }
    }
    ctx->pc = 0x1343F0u;
}
