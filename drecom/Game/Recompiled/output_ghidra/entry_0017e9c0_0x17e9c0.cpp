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

// Function: entry_0017e9c0
// Address: 0x17e9c0 - 0x17e9e0
void entry_0017e9c0_0x17e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e9c0_0x17e9c0");
#endif

    ctx->pc = 0x17e9c0u;

    // 0x17e9c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e9cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e9d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17e9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e9d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17e9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17e9dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x17e9e0u;
}
