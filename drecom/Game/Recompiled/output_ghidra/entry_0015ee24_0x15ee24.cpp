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

// Function: entry_0015ee24
// Address: 0x15ee24 - 0x15ee40
void entry_0015ee24_0x15ee24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ee24_0x15ee24");
#endif

    ctx->pc = 0x15ee24u;

    // 0x15ee24: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15ee28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15ee2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE2Cu;
    {
        const bool branch_taken_0x15ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ee2c) {
            ctx->pc = 0x15EE40u;
            return;
        }
    }
    ctx->pc = 0x15EE34u;
    // 0x15ee34: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ee34u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ee38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15EE38u;
    {
        const bool branch_taken_0x15ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee38) {
            ctx->pc = 0x15EE94u;
            return;
        }
    }
    ctx->pc = 0x15EE40u;
}
