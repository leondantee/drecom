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

// Function: entry_002e2018
// Address: 0x2e2018 - 0x2e2050
void entry_002e2018_0x2e2018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2018_0x2e2018");
#endif

    ctx->pc = 0x2e2018u;

    // 0x2e2018: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2e2018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2e201c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2028: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e202c: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2030: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2e2034: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e2034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e203c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2040: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2044: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    // 0x2e2048: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2048u;
    {
        const bool branch_taken_0x2e2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2048) {
            ctx->pc = 0x2E2080u;
            return;
        }
    }
    ctx->pc = 0x2E2050u;
}
