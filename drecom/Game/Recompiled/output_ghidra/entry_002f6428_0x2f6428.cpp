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

// Function: entry_002f6428
// Address: 0x2f6428 - 0x2f6450
void entry_002f6428_0x2f6428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6428_0x2f6428");
#endif

    ctx->pc = 0x2f6428u;

    // 0x2f6428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f642c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2f642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f6430: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x2f6430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f6434: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6434u;
    {
        const bool branch_taken_0x2f6434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6434) {
            ctx->pc = 0x2F6450u;
            return;
        }
    }
    ctx->pc = 0x2F643Cu;
    // 0x2f643c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6444: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f6444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f6448: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f644c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f644cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f6450u;
}
