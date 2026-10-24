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

// Function: entry_001196ac
// Address: 0x1196ac - 0x1196c0
void entry_001196ac_0x1196ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001196ac_0x1196ac");
#endif

    ctx->pc = 0x1196acu;

    // 0x1196ac: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1196b0: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x1196b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1196b4: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1196b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1196b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1196bc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    ctx->pc = 0x1196c0u;
}
