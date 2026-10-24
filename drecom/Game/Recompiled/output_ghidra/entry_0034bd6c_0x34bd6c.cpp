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

// Function: entry_0034bd6c
// Address: 0x34bd6c - 0x34bd88
void entry_0034bd6c_0x34bd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034bd6c_0x34bd6c");
#endif

    ctx->pc = 0x34bd6cu;

    // 0x34bd6c: 0x8fb50098  lw          $s5, 0x98($sp)
    ctx->pc = 0x34bd6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bd70: 0x26b310b0  addiu       $s3, $s5, 0x10B0
    ctx->pc = 0x34bd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4272));
    // 0x34bd74: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x34bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x34bd78: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x34bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x34bd7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34bd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34bd80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34bd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34bd84: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x34bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x34bd88u;
}
