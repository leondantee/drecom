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

// Function: entry_00155fb4
// Address: 0x155fb4 - 0x155fc8
void entry_00155fb4_0x155fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155fb4_0x155fb4");
#endif

    ctx->pc = 0x155fb4u;

    // 0x155fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155fb8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x155fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x155fbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x155fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x155fc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155fc4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x155fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x155fc8u;
}
