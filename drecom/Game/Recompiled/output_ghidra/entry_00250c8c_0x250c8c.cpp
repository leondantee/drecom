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

// Function: entry_00250c8c
// Address: 0x250c8c - 0x250cb4
void entry_00250c8c_0x250c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00250c8c_0x250c8c");
#endif

    ctx->pc = 0x250c8cu;

    // 0x250c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250c90: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x250c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x250c94: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x250c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x250c98: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250C98u;
    {
        const bool branch_taken_0x250c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x250c98) {
            ctx->pc = 0x250CB4u;
            return;
        }
    }
    ctx->pc = 0x250CA0u;
    // 0x250ca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250ca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x250ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x250ca8: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x250ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x250cac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x250cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250cb0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x250cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x250cb4u;
}
