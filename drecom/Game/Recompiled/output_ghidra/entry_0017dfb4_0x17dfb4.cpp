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

// Function: entry_0017dfb4
// Address: 0x17dfb4 - 0x17dff0
void entry_0017dfb4_0x17dfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dfb4_0x17dfb4");
#endif

    ctx->pc = 0x17dfb4u;

    // 0x17dfb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17dfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dfbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17dfc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17dfc4: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17dfc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dfcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17dfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17dfd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17dfd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17dfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dfd8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17dfdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17dfe0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17dfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17dfe8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17dfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17dfec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x17dff0u;
}
