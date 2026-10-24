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

// Function: entry_00113fcc
// Address: 0x113fcc - 0x113fd0
void entry_00113fcc_0x113fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fcc_0x113fcc");
#endif

    ctx->pc = 0x113fccu;

    // 0x113fcc: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x113fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x113fd0u;
}
