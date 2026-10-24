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

// Function: entry_00142c54
// Address: 0x142c54 - 0x142c60
void entry_00142c54_0x142c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c54_0x142c54");
#endif

    ctx->pc = 0x142c54u;

    // 0x142c54: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x142c58: 0x2622ec80  addiu       $v0, $s1, -0x1380
    ctx->pc = 0x142c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962304));
    // 0x142c5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x142c60u;
}
