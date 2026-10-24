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

// Function: entry_001423f8
// Address: 0x1423f8 - 0x142420
void entry_001423f8_0x1423f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423f8_0x1423f8");
#endif

    ctx->pc = 0x1423f8u;

    // 0x1423f8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1423f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1423fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1423fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x142400: 0x8c2395b0  lw          $v1, -0x6A50($at)
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6195B0u));
    // 0x142404: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x142404u;
    {
        const bool branch_taken_0x142404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x142404) {
            ctx->pc = 0x142420u;
            return;
        }
    }
    ctx->pc = 0x14240Cu;
    // 0x14240c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142410: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x142410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x142414: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x142414u;
    {
        const bool branch_taken_0x142414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142414) {
            ctx->pc = 0x142420u;
            return;
        }
    }
    ctx->pc = 0x14241Cu;
    // 0x14241c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x142420u;
}
