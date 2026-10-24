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

// Function: entry_001e7dbc
// Address: 0x1e7dbc - 0x1e7dd0
void entry_001e7dbc_0x1e7dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7dbc_0x1e7dbc");
#endif

    ctx->pc = 0x1e7dbcu;

    // 0x1e7dbc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7dc0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e7dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7dc4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7dc8: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x1e7dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e7dcc: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1e7dccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    ctx->pc = 0x1e7dd0u;
}
