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

// Function: entry_0018e768
// Address: 0x18e768 - 0x18e778
void entry_0018e768_0x18e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e768_0x18e768");
#endif

    ctx->pc = 0x18e768u;

    // 0x18e768: 0x8e0301f8  lw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
    // 0x18e76c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e770: 0xae0301f8  sw          $v1, 0x1F8($s0)
    ctx->pc = 0x18e770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 3));
    // 0x18e774: 0x0  nop
    ctx->pc = 0x18e774u;
    // NOP
    ctx->pc = 0x18e778u;
}
