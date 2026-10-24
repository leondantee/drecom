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

// Function: entry_00336690
// Address: 0x336690 - 0x3366a4
void entry_00336690_0x336690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336690_0x336690");
#endif

    ctx->pc = 0x336690u;

    // 0x336690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336694: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x336694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x336698: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x336698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x33669c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3366a0: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x3366a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
    ctx->pc = 0x3366a4u;
}
