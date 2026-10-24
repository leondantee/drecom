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

// Function: entry_002e78dc
// Address: 0x2e78dc - 0x2e7900
void entry_002e78dc_0x2e78dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e78dc_0x2e78dc");
#endif

    ctx->pc = 0x2e78dcu;

    // 0x2e78dc: 0x92030082  lbu         $v1, 0x82($s0)
    ctx->pc = 0x2e78dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x2e78e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e78e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e78e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e78e8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E78E8u;
    {
        const bool branch_taken_0x2e78e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e78e8) {
            ctx->pc = 0x2E790Cu;
            return;
        }
    }
    ctx->pc = 0x2E78F0u;
    // 0x2e78f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E78F0u;
    {
        const bool branch_taken_0x2e78f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e78f0) {
            ctx->pc = 0x2E7900u;
            return;
        }
    }
    ctx->pc = 0x2E78F8u;
    // 0x2e78f8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E78F8u;
    {
        const bool branch_taken_0x2e78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e78f8) {
            ctx->pc = 0x2E79C4u;
            return;
        }
    }
    ctx->pc = 0x2E7900u;
}
