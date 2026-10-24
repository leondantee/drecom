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

// Function: entry_001b2e0c
// Address: 0x1b2e0c - 0x1b2e30
void entry_001b2e0c_0x1b2e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2e0c_0x1b2e0c");
#endif

    ctx->pc = 0x1b2e0cu;

    // 0x1b2e0c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2e10: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b2e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e18: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2e1c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2e20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2e24: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2e2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b2e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x1b2e30u;
}
