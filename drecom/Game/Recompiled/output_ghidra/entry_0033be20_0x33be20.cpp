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

// Function: entry_0033be20
// Address: 0x33be20 - 0x33be50
void entry_0033be20_0x33be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033be20_0x33be20");
#endif

    ctx->pc = 0x33be20u;

    // 0x33be20: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x33be24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x33be28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33be28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33be2c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33be30: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x33be34: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x33be34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x33be38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x33be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x33be3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33be3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33be40: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33be44: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x33be48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33BE48u;
    {
        const bool branch_taken_0x33be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be48) {
            ctx->pc = 0x33BE68u;
            return;
        }
    }
    ctx->pc = 0x33BE50u;
}
