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

// Function: entry_00273880
// Address: 0x273880 - 0x27389c
void entry_00273880_0x273880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273880_0x273880");
#endif

    ctx->pc = 0x273880u;

    // 0x273880: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x273884: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x273888: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x273888u;
    {
        const bool branch_taken_0x273888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273888) {
            ctx->pc = 0x2739A4u;
            return;
        }
    }
    ctx->pc = 0x273890u;
    // 0x273890: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273890u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273894: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x273894u;
    {
        const bool branch_taken_0x273894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273894) {
            ctx->pc = 0x273990u;
            return;
        }
    }
    ctx->pc = 0x27389Cu;
}
