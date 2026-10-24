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

// Function: entry_00214d10
// Address: 0x214d10 - 0x214d40
void entry_00214d10_0x214d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214d10_0x214d10");
#endif

    ctx->pc = 0x214d10u;

label_214d10:
    // 0x214d10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x214d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x214d14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x214d18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x214d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x214d1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x214d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x214d20: 0x0  nop
    ctx->pc = 0x214d20u;
    // NOP
    // 0x214d24: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214D24u;
    {
        const bool branch_taken_0x214d24 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x214d24) {
            ctx->pc = 0x214D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214d10;
        }
    }
    ctx->pc = 0x214D2Cu;
    // 0x214d2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x214d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x214d30: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x214d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x214d34: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x214d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x214d38: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x214d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x214d3c: 0x0  nop
    ctx->pc = 0x214d3cu;
    // NOP
    ctx->pc = 0x214d40u;
}
