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

// Function: entry_0013bc18
// Address: 0x13bc18 - 0x13bc40
void entry_0013bc18_0x13bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc18_0x13bc18");
#endif

    ctx->pc = 0x13bc18u;

    // 0x13bc18: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc1c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13bc20: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc24: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc28: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x13bc28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x13bc2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BC2Cu;
    {
        const bool branch_taken_0x13bc2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc2c) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BC34u;
    // 0x13bc34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bc38: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bc3c: 0xa2000102  sb          $zero, 0x102($s0)
    ctx->pc = 0x13bc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13bc40u;
}
