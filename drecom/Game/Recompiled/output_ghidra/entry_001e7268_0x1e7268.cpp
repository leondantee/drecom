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

// Function: entry_001e7268
// Address: 0x1e7268 - 0x1e7280
void entry_001e7268_0x1e7268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7268_0x1e7268");
#endif

    ctx->pc = 0x1e7268u;

    // 0x1e7268: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e726c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x1e726cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7270: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7274: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x1e7274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e7278: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e7278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e727c: 0x0  nop
    ctx->pc = 0x1e727cu;
    // NOP
    ctx->pc = 0x1e7280u;
}
