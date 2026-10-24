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

// Function: entry_001957b8
// Address: 0x1957b8 - 0x1957d8
void entry_001957b8_0x1957b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001957b8_0x1957b8");
#endif

    ctx->pc = 0x1957b8u;

    // 0x1957b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1957bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1957c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1957c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1957c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1957c8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1957cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1957ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1957d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1957d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1957d4: 0x0  nop
    ctx->pc = 0x1957d4u;
    // NOP
    ctx->pc = 0x1957d8u;
}
