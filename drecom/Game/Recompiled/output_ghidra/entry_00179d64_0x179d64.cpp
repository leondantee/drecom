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

// Function: entry_00179d64
// Address: 0x179d64 - 0x179d84
void entry_00179d64_0x179d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179d64_0x179d64");
#endif

    ctx->pc = 0x179d64u;

    // 0x179d64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x179d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x179d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179d6c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x179d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179d70: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x179d74: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x179d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x179d78: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x179d78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x179d7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x179D7Cu;
    {
        const bool branch_taken_0x179d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179d7c) {
            ctx->pc = 0x179DC0u;
            return;
        }
    }
    ctx->pc = 0x179D84u;
}
