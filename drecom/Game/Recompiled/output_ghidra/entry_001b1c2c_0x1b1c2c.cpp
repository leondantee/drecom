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

// Function: entry_001b1c2c
// Address: 0x1b1c2c - 0x1b1c50
void entry_001b1c2c_0x1b1c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c2c_0x1b1c2c");
#endif

    ctx->pc = 0x1b1c2cu;

    // 0x1b1c2c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b1c30: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b1c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b1c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c38: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x1b1c3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b1c40: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b1c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1c48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1c4c: 0x0  nop
    ctx->pc = 0x1b1c4cu;
    // NOP
    ctx->pc = 0x1b1c50u;
}
