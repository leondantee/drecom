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

// Function: entry_003580a4
// Address: 0x3580a4 - 0x3580d0
void entry_003580a4_0x3580a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003580a4_0x3580a4");
#endif

    ctx->pc = 0x3580a4u;

    // 0x3580a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580a8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3580a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3580ac: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x3580acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x3580b0: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3580B0u;
    {
        const bool branch_taken_0x3580b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3580b0) {
            ctx->pc = 0x3580F4u;
            return;
        }
    }
    ctx->pc = 0x3580B8u;
    // 0x3580b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3580b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3580c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3580c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3580c4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3580c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3580c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3580C8u;
    {
        const bool branch_taken_0x3580c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3580c8) {
            ctx->pc = 0x3580F4u;
            return;
        }
    }
    ctx->pc = 0x3580D0u;
}
