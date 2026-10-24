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

// Function: entry_0037b4a0
// Address: 0x37b4a0 - 0x37b4c0
void entry_0037b4a0_0x37b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b4a0_0x37b4a0");
#endif

    ctx->pc = 0x37b4a0u;

    // 0x37b4a0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37b4a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b4a8: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37b4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b4b4: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37b4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37b4b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37b4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37b4bc: 0x0  nop
    ctx->pc = 0x37b4bcu;
    // NOP
    ctx->pc = 0x37b4c0u;
}
