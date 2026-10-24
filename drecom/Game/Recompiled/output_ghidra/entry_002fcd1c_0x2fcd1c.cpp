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

// Function: entry_002fcd1c
// Address: 0x2fcd1c - 0x2fcd40
void entry_002fcd1c_0x2fcd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcd1c_0x2fcd1c");
#endif

    ctx->pc = 0x2fcd1cu;

    // 0x2fcd1c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd20: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fcd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fcd24: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCD24u;
    {
        const bool branch_taken_0x2fcd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcd24) {
            ctx->pc = 0x2FCD40u;
            return;
        }
    }
    ctx->pc = 0x2FCD2Cu;
    // 0x2fcd2c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcd30: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcd34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2fcd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fcd38: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCD38u;
    {
        const bool branch_taken_0x2fcd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fcd38) {
            ctx->pc = 0x2FCD90u;
            return;
        }
    }
    ctx->pc = 0x2FCD40u;
}
