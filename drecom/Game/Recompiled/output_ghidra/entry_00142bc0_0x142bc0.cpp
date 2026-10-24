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

// Function: entry_00142bc0
// Address: 0x142bc0 - 0x142bcc
void entry_00142bc0_0x142bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142bc0_0x142bc0");
#endif

    ctx->pc = 0x142bc0u;

    // 0x142bc0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142bc4: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x142bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x142bc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x142bccu;
}
