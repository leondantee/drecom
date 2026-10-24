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

// Function: entry_0037be48
// Address: 0x37be48 - 0x37be68
void entry_0037be48_0x37be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037be48_0x37be48");
#endif

    ctx->pc = 0x37be48u;

    // 0x37be48: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37be48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37be4c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37be50: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37be54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37be58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37be5c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37be5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37be60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37be60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37be64: 0x0  nop
    ctx->pc = 0x37be64u;
    // NOP
    ctx->pc = 0x37be68u;
}
