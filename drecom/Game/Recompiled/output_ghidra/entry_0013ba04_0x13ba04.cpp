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

// Function: entry_0013ba04
// Address: 0x13ba04 - 0x13ba18
void entry_0013ba04_0x13ba04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ba04_0x13ba04");
#endif

    ctx->pc = 0x13ba04u;

    // 0x13ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ba08: 0xa2020102  sb          $v0, 0x102($s0)
    ctx->pc = 0x13ba08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ba0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13ba10: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x13ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x13ba14: 0x0  nop
    ctx->pc = 0x13ba14u;
    // NOP
    ctx->pc = 0x13ba18u;
}
