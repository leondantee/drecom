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

// Function: entry_0033b9d8
// Address: 0x33b9d8 - 0x33b9f8
void entry_0033b9d8_0x33b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b9d8_0x33b9d8");
#endif

    ctx->pc = 0x33b9d8u;

    // 0x33b9d8: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x33b9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b9dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33b9e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b9e4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B9E4u;
    {
        const bool branch_taken_0x33b9e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b9e4) {
            ctx->pc = 0x33B9F8u;
            return;
        }
    }
    ctx->pc = 0x33B9ECu;
    // 0x33b9ec: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x33b9f0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b9f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x33b9f8u;
}
