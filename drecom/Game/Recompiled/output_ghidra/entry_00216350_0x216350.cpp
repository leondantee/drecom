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

// Function: entry_00216350
// Address: 0x216350 - 0x216358
void entry_00216350_0x216350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216350_0x216350");
#endif

    ctx->pc = 0x216350u;

    // 0x216350: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x216350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x216354: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x216358u;
}
