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

// Function: entry_0019f704
// Address: 0x19f704 - 0x19f724
void entry_0019f704_0x19f704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f704_0x19f704");
#endif

    ctx->pc = 0x19f704u;

    // 0x19f704: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f708: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f710: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F710u;
    {
        const bool branch_taken_0x19f710 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f710) {
            ctx->pc = 0x19F724u;
            return;
        }
    }
    ctx->pc = 0x19F718u;
    // 0x19f718: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x19f718u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f71c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F71Cu;
    {
        const bool branch_taken_0x19f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f71c) {
            ctx->pc = 0x19F774u;
            return;
        }
    }
    ctx->pc = 0x19F724u;
}
