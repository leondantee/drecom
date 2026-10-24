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

// Function: entry_001ec55c
// Address: 0x1ec55c - 0x1ec59c
void entry_001ec55c_0x1ec55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec55c_0x1ec55c");
#endif

    ctx->pc = 0x1ec55cu;

    // 0x1ec55c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec560: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1ec560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1ec564: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ec564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ec568: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x1ec568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x1ec56c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC56Cu;
    {
        const bool branch_taken_0x1ec56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec56c) {
            ctx->pc = 0x1EC59Cu;
            return;
        }
    }
    ctx->pc = 0x1EC574u;
    // 0x1ec574: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec57c: 0x84440076  lh          $a0, 0x76($v0)
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 118)));
    // 0x1ec580: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC580u;
    {
        const bool branch_taken_0x1ec580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec580) {
            ctx->pc = 0x1EC59Cu;
            return;
        }
    }
    ctx->pc = 0x1EC588u;
    // 0x1ec588: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec58c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec590: 0x84620076  lh          $v0, 0x76($v1)
    ctx->pc = 0x1ec590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1ec594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec598: 0xa4620076  sh          $v0, 0x76($v1)
    ctx->pc = 0x1ec598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ec59cu;
}
