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

// Function: entry_00165544
// Address: 0x165544 - 0x16557c
void entry_00165544_0x165544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165544_0x165544");
#endif

    ctx->pc = 0x165544u;

    // 0x165544: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165548: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x16554c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x16554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x165550: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x165554: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x165558: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x165558u;
    {
        const bool branch_taken_0x165558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x165558) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x165564: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x165564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x165568: 0x8e03024c  lw          $v1, 0x24C($s0)
    ctx->pc = 0x165568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x16556c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165570: 0xae03024c  sw          $v1, 0x24C($s0)
    ctx->pc = 0x165570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 3));
    // 0x165574: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165574) {
            ctx->pc = 0x1655C8u;
            return;
        }
    }
    ctx->pc = 0x16557Cu;
}
