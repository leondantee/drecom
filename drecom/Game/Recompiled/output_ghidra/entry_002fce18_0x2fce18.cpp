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

// Function: entry_002fce18
// Address: 0x2fce18 - 0x2fce3c
void entry_002fce18_0x2fce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fce18_0x2fce18");
#endif

    ctx->pc = 0x2fce18u;

    // 0x2fce18: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fce20: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCE20u;
    {
        const bool branch_taken_0x2fce20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fce20) {
            ctx->pc = 0x2FCE3Cu;
            return;
        }
    }
    ctx->pc = 0x2FCE28u;
    // 0x2fce28: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x2fce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce2c: 0x8ca600d4  lw          $a2, 0xD4($a1)
    ctx->pc = 0x2fce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fce30: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2fce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fce34: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FCE34u;
    {
        const bool branch_taken_0x2fce34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fce34) {
            ctx->pc = 0x2FCE8Cu;
            return;
        }
    }
    ctx->pc = 0x2FCE3Cu;
}
