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

// Function: entry_0018a610
// Address: 0x18a610 - 0x18a628
void entry_0018a610_0x18a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a610_0x18a610");
#endif

    ctx->pc = 0x18a610u;

    // 0x18a610: 0x26a3fef0  addiu       $v1, $s5, -0x110
    ctx->pc = 0x18a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967024));
    // 0x18a614: 0xaea300ec  sw          $v1, 0xEC($s5)
    ctx->pc = 0x18a614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 3));
    // 0x18a618: 0x26a30110  addiu       $v1, $s5, 0x110
    ctx->pc = 0x18a618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a61c: 0xaea300f0  sw          $v1, 0xF0($s5)
    ctx->pc = 0x18a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 3));
    // 0x18a620: 0x26b50110  addiu       $s5, $s5, 0x110
    ctx->pc = 0x18a620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x18a624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a628u;
}
