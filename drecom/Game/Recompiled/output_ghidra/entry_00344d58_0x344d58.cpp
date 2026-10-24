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

// Function: entry_00344d58
// Address: 0x344d58 - 0x344d68
void entry_00344d58_0x344d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344d58_0x344d58");
#endif

    ctx->pc = 0x344d58u;

    // 0x344d58: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x344d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x344d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d64: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x344d64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x344d68u;
}
