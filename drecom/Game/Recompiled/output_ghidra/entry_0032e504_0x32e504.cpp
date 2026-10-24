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

// Function: entry_0032e504
// Address: 0x32e504 - 0x32e510
void entry_0032e504_0x32e504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e504_0x32e504");
#endif

    ctx->pc = 0x32e504u;

    // 0x32e504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e508: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x32e50c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x32e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x32e510u;
}
