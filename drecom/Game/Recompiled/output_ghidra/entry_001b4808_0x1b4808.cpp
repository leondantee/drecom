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

// Function: entry_001b4808
// Address: 0x1b4808 - 0x1b483c
void entry_001b4808_0x1b4808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4808_0x1b4808");
#endif

    ctx->pc = 0x1b4808u;

    // 0x1b4808: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b480c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b480cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4810: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4814: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1b4814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b4818: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x1b4818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b481c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b4820: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b4820u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b4824: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4824u;
    {
        const bool branch_taken_0x1b4824 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b4824) {
            ctx->pc = 0x1B483Cu;
            return;
        }
    }
    ctx->pc = 0x1B482Cu;
    // 0x1b482c: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x1b482cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b4830: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4830u;
    {
        const bool branch_taken_0x1b4830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4830) {
            ctx->pc = 0x1B483Cu;
            return;
        }
    }
    ctx->pc = 0x1B4838u;
    // 0x1b4838: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1b483cu;
}
