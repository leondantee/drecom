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

// Function: entry_00235110
// Address: 0x235110 - 0x235140
void entry_00235110_0x235110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235110_0x235110");
#endif

    ctx->pc = 0x235110u;

label_235110:
    // 0x235110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235114: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x235118: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23511c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235120: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x235120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x235124: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x235128: 0x24a6d9c0  addiu       $a2, $a1, -0x2640
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957504));
    // 0x23512c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x23512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x235130: 0xa4470014  sh          $a3, 0x14($v0)
    ctx->pc = 0x235130u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x235134: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x235134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x235138: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x235138u;
    {
        const bool branch_taken_0x235138 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x235138) {
            ctx->pc = 0x235110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235110;
        }
    }
    ctx->pc = 0x235140u;
}
