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

// Function: entry_0031e09c
// Address: 0x31e09c - 0x31e0c4
void entry_0031e09c_0x31e09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e09c_0x31e09c");
#endif

    ctx->pc = 0x31e09cu;

    // 0x31e09c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0a0: 0x8c83129c  lw          $v1, 0x129C($a0)
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4764)));
    // 0x31e0a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e0a8: 0xac83129c  sw          $v1, 0x129C($a0)
    ctx->pc = 0x31e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4764), GPR_U32(ctx, 3));
    // 0x31e0ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E0ACu;
    {
        const bool branch_taken_0x31e0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e0ac) {
            ctx->pc = 0x31E0C4u;
            return;
        }
    }
    ctx->pc = 0x31E0B4u;
    // 0x31e0b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31e0b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31e0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31e0bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e0c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31e0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x31e0c4u;
}
