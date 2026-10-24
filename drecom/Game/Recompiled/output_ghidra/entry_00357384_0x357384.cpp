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

// Function: entry_00357384
// Address: 0x357384 - 0x35739c
void entry_00357384_0x357384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357384_0x357384");
#endif

    ctx->pc = 0x357384u;

    // 0x357384: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x357384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357388: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357388u;
    {
        const bool branch_taken_0x357388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357388) {
            ctx->pc = 0x35739Cu;
            return;
        }
    }
    ctx->pc = 0x357390u;
    // 0x357390: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x357390u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x357394u;
    {
        const bool branch_taken_0x357394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357394) {
            ctx->pc = 0x3573B0u;
            return;
        }
    }
    ctx->pc = 0x35739Cu;
}
