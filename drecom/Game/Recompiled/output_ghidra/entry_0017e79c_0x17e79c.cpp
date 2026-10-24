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

// Function: entry_0017e79c
// Address: 0x17e79c - 0x17e7c0
void entry_0017e79c_0x17e79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e79c_0x17e79c");
#endif

    ctx->pc = 0x17e79cu;

    // 0x17e79c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e7a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e7ac: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e7b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e7bc: 0x0  nop
    ctx->pc = 0x17e7bcu;
    // NOP
    ctx->pc = 0x17e7c0u;
}
