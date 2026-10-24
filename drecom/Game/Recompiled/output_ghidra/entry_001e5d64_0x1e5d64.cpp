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

// Function: entry_001e5d64
// Address: 0x1e5d64 - 0x1e5d94
void entry_001e5d64_0x1e5d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d64_0x1e5d64");
#endif

    ctx->pc = 0x1e5d64u;

    // 0x1e5d64: 0x8fa30344  lw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x1e5d68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5d6c: 0xafa30344  sw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 3));
    // 0x1e5d70: 0x8fa30344  lw          $v1, 0x344($sp)
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
    // 0x1e5d74: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e5d78: 0x906301b0  lbu         $v1, 0x1B0($v1)
    ctx->pc = 0x1e5d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e5d7c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5D7Cu;
    {
        const bool branch_taken_0x1e5d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d7c) {
            ctx->pc = 0x1E5D94u;
            return;
        }
    }
    ctx->pc = 0x1E5D84u;
    // 0x1e5d84: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d88: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e5d88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5d8c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1E5D8Cu;
    {
        const bool branch_taken_0x1e5d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d8c) {
            ctx->pc = 0x1E62D0u;
            return;
        }
    }
    ctx->pc = 0x1E5D94u;
}
