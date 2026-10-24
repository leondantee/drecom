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

// Function: caseD_0
// Address: 0x12575c - 0x12577c
void caseD_0_0x12575c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12575c");
#endif

    ctx->pc = 0x12575cu;

    // 0x12575c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125760: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x125760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x125764: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125764) {
            ctx->pc = 0x12577Cu;
            return;
        }
    }
    ctx->pc = 0x12576Cu;
    // 0x12576c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125770: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x125770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x125774: 0x10600189  beqz        $v1, . + 4 + (0x189 << 2)
    ctx->pc = 0x125774u;
    {
        const bool branch_taken_0x125774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125774) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x12577Cu;
}
