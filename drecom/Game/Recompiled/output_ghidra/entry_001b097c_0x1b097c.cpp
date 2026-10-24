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

// Function: entry_001b097c
// Address: 0x1b097c - 0x1b0998
void entry_001b097c_0x1b097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b097c_0x1b097c");
#endif

    ctx->pc = 0x1b097cu;

    // 0x1b097c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0980: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0988: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b098c: 0x8c730028  lw          $s3, 0x28($v1)
    ctx->pc = 0x1b098cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b0990: 0x0  nop
    ctx->pc = 0x1b0990u;
    // NOP
    // 0x1b0994: 0x0  nop
    ctx->pc = 0x1b0994u;
    // NOP
    ctx->pc = 0x1b0998u;
}
