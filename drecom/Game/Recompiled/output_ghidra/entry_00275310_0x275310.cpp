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

// Function: entry_00275310
// Address: 0x275310 - 0x27532c
void entry_00275310_0x275310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275310_0x275310");
#endif

    ctx->pc = 0x275310u;

    // 0x275310: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x275310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x275314: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x275314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x275318: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x275318u;
    {
        const bool branch_taken_0x275318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x275318) {
            ctx->pc = 0x275444u;
            return;
        }
    }
    ctx->pc = 0x275320u;
    // 0x275320: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x275320u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x275324: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x275324u;
    {
        const bool branch_taken_0x275324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275324) {
            ctx->pc = 0x275430u;
            return;
        }
    }
    ctx->pc = 0x27532Cu;
}
