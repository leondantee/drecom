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

// Function: entry_00217714
// Address: 0x217714 - 0x217720
void entry_00217714_0x217714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217714_0x217714");
#endif

    ctx->pc = 0x217714u;

    // 0x217714: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x217714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x217718: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x217718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x21771c: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x21771cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
    ctx->pc = 0x217720u;
}
