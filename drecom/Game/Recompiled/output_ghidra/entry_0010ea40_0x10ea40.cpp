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

// Function: entry_0010ea40
// Address: 0x10ea40 - 0x10ea48
void entry_0010ea40_0x10ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea40_0x10ea40");
#endif

    ctx->pc = 0x10ea40u;

    // 0x10ea40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x10ea44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x10ea48u;
}
