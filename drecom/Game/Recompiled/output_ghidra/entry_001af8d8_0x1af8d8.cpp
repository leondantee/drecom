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

// Function: entry_001af8d8
// Address: 0x1af8d8 - 0x1af8f8
void entry_001af8d8_0x1af8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af8d8_0x1af8d8");
#endif

    ctx->pc = 0x1af8d8u;

    // 0x1af8d8: 0x8fa404a8  lw          $a0, 0x4A8($sp)
    ctx->pc = 0x1af8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1af8dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1af8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1af8e0: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1af8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    // 0x1af8e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1af8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1af8e8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1af8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1af8ec: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1af8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1af8f0: 0x8eb10020  lw          $s1, 0x20($s5)
    ctx->pc = 0x1af8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1af8f4: 0x0  nop
    ctx->pc = 0x1af8f4u;
    // NOP
    ctx->pc = 0x1af8f8u;
}
