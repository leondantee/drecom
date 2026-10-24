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

// Function: entry_001234a4
// Address: 0x1234a4 - 0x1234c4
void entry_001234a4_0x1234a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234a4_0x1234a4");
#endif

    ctx->pc = 0x1234a4u;

    // 0x1234a4: 0x8e720020  lw          $s2, 0x20($s3)
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1234a8: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x1234ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234C4u;
            return;
        }
    }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1234b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1234b8: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x1234b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1234bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1234BCu;
    {
        const bool branch_taken_0x1234bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234bc) {
            ctx->pc = 0x1234C8u;
            return;
        }
    }
    ctx->pc = 0x1234C4u;
}
