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

// Function: entry_0018a2f8
// Address: 0x18a2f8 - 0x18a308
void entry_0018a2f8_0x18a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a2f8_0x18a2f8");
#endif

    ctx->pc = 0x18a2f8u;

    // 0x18a2f8: 0xae40020c  sw          $zero, 0x20C($s2)
    ctx->pc = 0x18a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 0));
    // 0x18a2fc: 0x26520230  addiu       $s2, $s2, 0x230
    ctx->pc = 0x18a2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x18a300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a304: 0x0  nop
    ctx->pc = 0x18a304u;
    // NOP
    ctx->pc = 0x18a308u;
}
