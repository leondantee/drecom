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

// Function: entry_00340bb0
// Address: 0x340bb0 - 0x340bd4
void entry_00340bb0_0x340bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340bb0_0x340bb0");
#endif

    ctx->pc = 0x340bb0u;

    // 0x340bb0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x340bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x340bb4: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x340bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x340bb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x340bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340bbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x340bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340bc0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340BC0u;
    {
        const bool branch_taken_0x340bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340bc0) {
            ctx->pc = 0x340BD4u;
            return;
        }
    }
    ctx->pc = 0x340BC8u;
    // 0x340bc8: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x340bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x340bcc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x340BCCu;
    {
        const bool branch_taken_0x340bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340bcc) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340BD4u;
}
