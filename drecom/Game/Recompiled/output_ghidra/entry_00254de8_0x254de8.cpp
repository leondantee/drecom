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

// Function: entry_00254de8
// Address: 0x254de8 - 0x254df8
void entry_00254de8_0x254de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254de8_0x254de8");
#endif

    ctx->pc = 0x254de8u;

    // 0x254de8: 0x246337a0  addiu       $v1, $v1, 0x37A0
    ctx->pc = 0x254de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14240));
    // 0x254dec: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254decu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254df0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254df4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    ctx->pc = 0x254df8u;
}
