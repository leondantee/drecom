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

// Function: entry_002feeb8
// Address: 0x2feeb8 - 0x2feee0
void entry_002feeb8_0x2feeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002feeb8_0x2feeb8");
#endif

    ctx->pc = 0x2feeb8u;

    // 0x2feeb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feebc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2feebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feec0: 0x286300dc  slti        $v1, $v1, 0xDC
    ctx->pc = 0x2feec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)220) ? 1 : 0);
    // 0x2feec4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEEC4u;
    {
        const bool branch_taken_0x2feec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feec4) {
            ctx->pc = 0x2FEEE0u;
            return;
        }
    }
    ctx->pc = 0x2FEECCu;
    // 0x2feecc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2feed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2feed4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2feed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2feed8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feedc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2feedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2feee0u;
}
