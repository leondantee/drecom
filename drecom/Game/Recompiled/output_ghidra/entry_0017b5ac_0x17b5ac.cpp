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

// Function: entry_0017b5ac
// Address: 0x17b5ac - 0x17b5cc
void entry_0017b5ac_0x17b5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5ac_0x17b5ac");
#endif

    ctx->pc = 0x17b5acu;

    // 0x17b5ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17b5b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b5b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b5b8: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x17b5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x17b5bc: 0x2e01005b  sltiu       $at, $s0, 0x5B
    ctx->pc = 0x17b5bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x17b5c0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B5C0u;
    {
        const bool branch_taken_0x17b5c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b5c0) {
            ctx->pc = 0x17B5CCu;
            return;
        }
    }
    ctx->pc = 0x17B5C8u;
    // 0x17b5c8: 0x2410005a  addiu       $s0, $zero, 0x5A
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->pc = 0x17b5ccu;
}
