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

// Function: entry_00135104
// Address: 0x135104 - 0x135130
void entry_00135104_0x135104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135104_0x135104");
#endif

    ctx->pc = 0x135104u;

    // 0x135104: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x135104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x135108: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x135108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x13510c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x13510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x135110: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x135110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x135114: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135114u;
    {
        const bool branch_taken_0x135114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135114) {
            ctx->pc = 0x135130u;
            return;
        }
    }
    ctx->pc = 0x13511Cu;
    // 0x13511c: 0x9603007e  lhu         $v1, 0x7E($s0)
    ctx->pc = 0x13511cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x135120: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135124: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x135124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x135128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135128u;
    {
        const bool branch_taken_0x135128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135128) {
            ctx->pc = 0x135150u;
            return;
        }
    }
    ctx->pc = 0x135130u;
}
