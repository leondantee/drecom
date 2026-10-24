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

// Function: entry_0025933c
// Address: 0x25933c - 0x259354
void entry_0025933c_0x25933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025933c_0x25933c");
#endif

    ctx->pc = 0x25933cu;

    // 0x25933c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259340: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x259340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
    // 0x259344: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x259344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259348: 0xaea30064  sw          $v1, 0x64($s5)
    ctx->pc = 0x259348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
    // 0x25934c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x259350: 0xaea30068  sw          $v1, 0x68($s5)
    ctx->pc = 0x259350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
    ctx->pc = 0x259354u;
}
