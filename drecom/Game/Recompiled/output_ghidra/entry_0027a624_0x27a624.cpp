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

// Function: entry_0027a624
// Address: 0x27a624 - 0x27a630
void entry_0027a624_0x27a624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a624_0x27a624");
#endif

    ctx->pc = 0x27a624u;

    // 0x27a624: 0x26520120  addiu       $s2, $s2, 0x120
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x27a628: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a62c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x27a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x27a630u;
}
