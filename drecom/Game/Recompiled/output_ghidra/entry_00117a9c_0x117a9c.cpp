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

// Function: entry_00117a9c
// Address: 0x117a9c - 0x117aa4
void entry_00117a9c_0x117a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a9c_0x117a9c");
#endif

    ctx->pc = 0x117a9cu;

    // 0x117a9c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117aa0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x117aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x117aa4u;
}
