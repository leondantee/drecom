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

// Function: entry_001dd658
// Address: 0x1dd658 - 0x1dd678
void entry_001dd658_0x1dd658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd658_0x1dd658");
#endif

    ctx->pc = 0x1dd658u;

    // 0x1dd658: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1dd65c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dd65cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd660: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD660u;
    {
        const bool branch_taken_0x1dd660 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1dd660) {
            ctx->pc = 0x1DD678u;
            return;
        }
    }
    ctx->pc = 0x1DD668u;
    // 0x1dd668: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dd66c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1dd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1dd670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD670u;
    {
        const bool branch_taken_0x1dd670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd670) {
            ctx->pc = 0x1DD680u;
            return;
        }
    }
    ctx->pc = 0x1DD678u;
}
