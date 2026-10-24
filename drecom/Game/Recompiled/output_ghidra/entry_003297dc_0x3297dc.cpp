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

// Function: entry_003297dc
// Address: 0x3297dc - 0x3297e8
void entry_003297dc_0x3297dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003297dc_0x3297dc");
#endif

    ctx->pc = 0x3297dcu;

    // 0x3297dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3297dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3297e0: 0xa2032904  sb          $v1, 0x2904($s0)
    ctx->pc = 0x3297e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 3));
    // 0x3297e4: 0xae00282c  sw          $zero, 0x282C($s0)
    ctx->pc = 0x3297e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 0));
    ctx->pc = 0x3297e8u;
}
