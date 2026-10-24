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

// Function: entry_001e73c0
// Address: 0x1e73c0 - 0x1e73d8
void entry_001e73c0_0x1e73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e73c0_0x1e73c0");
#endif

    ctx->pc = 0x1e73c0u;

    // 0x1e73c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e73c4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e73c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e73c8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e73cc: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1e73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e73d0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e73d4: 0x0  nop
    ctx->pc = 0x1e73d4u;
    // NOP
    ctx->pc = 0x1e73d8u;
}
