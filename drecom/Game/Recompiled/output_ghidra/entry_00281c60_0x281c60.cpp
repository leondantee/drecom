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

// Function: entry_00281c60
// Address: 0x281c60 - 0x281c68
void entry_00281c60_0x281c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281c60_0x281c60");
#endif

    ctx->pc = 0x281c60u;

    // 0x281c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x281c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x281c64: 0x0  nop
    ctx->pc = 0x281c64u;
    // NOP
    ctx->pc = 0x281c68u;
}
