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

// Function: entry_00299cd0
// Address: 0x299cd0 - 0x299cec
void entry_00299cd0_0x299cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299cd0_0x299cd0");
#endif

    ctx->pc = 0x299cd0u;

    // 0x299cd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x299cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x299cd4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x299cd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299cdc: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x299cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x299ce0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299ce4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x299ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299ce8: 0xfc430170  sd          $v1, 0x170($v0)
    ctx->pc = 0x299ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 368), GPR_U64(ctx, 3));
    ctx->pc = 0x299cecu;
}
