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

// Function: caseD_4
// Address: 0x1500e0 - 0x150104
void caseD_4_0x1500e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1500e0");
#endif

    ctx->pc = 0x1500e0u;

    // 0x1500e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1500e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1500e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1500e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1500e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1500ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1500ECu;
    {
        const bool branch_taken_0x1500ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1500ec) {
            ctx->pc = 0x15012Cu;
            return;
        }
    }
    ctx->pc = 0x1500F4u;
    // 0x1500f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1500F4u;
    {
        const bool branch_taken_0x1500f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500f4) {
            ctx->pc = 0x150104u;
            return;
        }
    }
    ctx->pc = 0x1500FCu;
    // 0x1500fc: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1500FCu;
    {
        const bool branch_taken_0x1500fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1500fc) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150104u;
}
