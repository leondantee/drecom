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

// Function: entry_001b33d8
// Address: 0x1b33d8 - 0x1b3410
void entry_001b33d8_0x1b33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b33d8_0x1b33d8");
#endif

    ctx->pc = 0x1b33d8u;

    // 0x1b33d8: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x1b33d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
    // 0x1b33dc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b33dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b33e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b33e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b33e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b33e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B33E8u;
    {
        const bool branch_taken_0x1b33e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33e8) {
            ctx->pc = 0x1B3450u;
            return;
        }
    }
    ctx->pc = 0x1B33F0u;
    // 0x1b33f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b33f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b33f4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b33f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b33f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b33fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B33FCu;
    {
        const bool branch_taken_0x1b33fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b33fc) {
            ctx->pc = 0x1B3410u;
            return;
        }
    }
    ctx->pc = 0x1B3404u;
    // 0x1b3404: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x1b3404u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x1b3408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3408u;
    {
        const bool branch_taken_0x1b3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3408) {
            ctx->pc = 0x1B3450u;
            return;
        }
    }
    ctx->pc = 0x1B3410u;
}
