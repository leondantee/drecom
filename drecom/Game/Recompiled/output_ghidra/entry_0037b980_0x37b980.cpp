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

// Function: entry_0037b980
// Address: 0x37b980 - 0x37b9a0
void entry_0037b980_0x37b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b980_0x37b980");
#endif

    ctx->pc = 0x37b980u;

    // 0x37b980: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x37b980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37b984: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b988: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37b98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b994: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37b994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37b998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37b99c: 0x0  nop
    ctx->pc = 0x37b99cu;
    // NOP
    ctx->pc = 0x37b9a0u;
}
