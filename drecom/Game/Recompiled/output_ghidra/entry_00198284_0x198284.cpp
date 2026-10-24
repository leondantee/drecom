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

// Function: entry_00198284
// Address: 0x198284 - 0x1982ac
void entry_00198284_0x198284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198284_0x198284");
#endif

    ctx->pc = 0x198284u;

    // 0x198284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x198288: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x198288u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19828c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198290: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x198290u;
    {
        const bool branch_taken_0x198290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x198290) {
            ctx->pc = 0x1982ACu;
            return;
        }
    }
    ctx->pc = 0x198298u;
    // 0x198298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19829c: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1982a0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1982a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1982a4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x198360u;
            return;
        }
    }
    ctx->pc = 0x1982ACu;
}
