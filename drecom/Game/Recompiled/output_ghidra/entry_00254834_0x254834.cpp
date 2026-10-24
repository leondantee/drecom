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

// Function: entry_00254834
// Address: 0x254834 - 0x254850
void entry_00254834_0x254834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254834_0x254834");
#endif

    ctx->pc = 0x254834u;

    // 0x254834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25483c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25483cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x254840: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x254844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254848: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x254848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25484c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x254850u;
}
