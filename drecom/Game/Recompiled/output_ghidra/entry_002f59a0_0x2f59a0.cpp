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

// Function: entry_002f59a0
// Address: 0x2f59a0 - 0x2f59c8
void entry_002f59a0_0x2f59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f59a0_0x2f59a0");
#endif

    ctx->pc = 0x2f59a0u;

    // 0x2f59a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59a4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f59a8: 0x286300c8  slti        $v1, $v1, 0xC8
    ctx->pc = 0x2f59a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2f59ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F59ACu;
    {
        const bool branch_taken_0x2f59ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f59ac) {
            ctx->pc = 0x2F59C8u;
            return;
        }
    }
    ctx->pc = 0x2F59B4u;
    // 0x2f59b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f59bc: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f59bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f59c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f59c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f59c8u;
}
