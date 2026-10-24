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

// Function: entry_00179da0
// Address: 0x179da0 - 0x179dbc
void entry_00179da0_0x179da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179da0_0x179da0");
#endif

    ctx->pc = 0x179da0u;

    // 0x179da0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179da8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179dac: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x179dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x179db0: 0x31243  sra         $v0, $v1, 9
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 9));
    // 0x179db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179DB4u;
    {
        const bool branch_taken_0x179db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179db4) {
            ctx->pc = 0x179DC0u;
            return;
        }
    }
    ctx->pc = 0x179DBCu;
}
