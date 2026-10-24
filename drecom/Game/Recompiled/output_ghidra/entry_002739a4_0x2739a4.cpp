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

// Function: entry_002739a4
// Address: 0x2739a4 - 0x2739c0
void entry_002739a4_0x2739a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002739a4_0x2739a4");
#endif

    ctx->pc = 0x2739a4u;

    // 0x2739a4: 0x8e631bf0  lw          $v1, 0x1BF0($s3)
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7152)));
    // 0x2739a8: 0x2c61001e  sltiu       $at, $v1, 0x1E
    ctx->pc = 0x2739a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2739ac: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x2739ACu;
    {
        const bool branch_taken_0x2739ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739ac) {
            ctx->pc = 0x273A8Cu;
            return;
        }
    }
    ctx->pc = 0x2739B4u;
    // 0x2739b4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2739b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2739b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2739B8u;
    {
        const bool branch_taken_0x2739b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739b8) {
            ctx->pc = 0x273A78u;
            return;
        }
    }
    ctx->pc = 0x2739C0u;
}
