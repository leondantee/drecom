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

// Function: entry_0013661c
// Address: 0x13661c - 0x136628
void entry_0013661c_0x13661c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013661c_0x13661c");
#endif

    ctx->pc = 0x13661cu;

    // 0x13661c: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x13661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x136620: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136624: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x136624u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x136628u;
}
