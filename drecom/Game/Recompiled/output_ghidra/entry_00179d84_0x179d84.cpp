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

// Function: entry_00179d84
// Address: 0x179d84 - 0x179da0
void entry_00179d84_0x179d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d84_0x179d84");
#endif

    ctx->pc = 0x179d84u;

    // 0x179d84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x179d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x179d90: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x179d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x179d94: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x179d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x179d98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179D98u;
    {
        const bool branch_taken_0x179d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d98) {
            ctx->pc = 0x179DC0u;
            return;
        }
    }
    ctx->pc = 0x179DA0u;
}
