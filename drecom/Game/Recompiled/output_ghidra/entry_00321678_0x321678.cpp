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

// Function: entry_00321678
// Address: 0x321678 - 0x321698
void entry_00321678_0x321678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321678_0x321678");
#endif

    ctx->pc = 0x321678u;

    // 0x321678: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32167c: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x32167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x321680: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x321680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321684: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321688: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x321688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x32168c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32168cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321690u;
    {
        const bool branch_taken_0x321690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321690) {
            ctx->pc = 0x3216D0u;
            return;
        }
    }
    ctx->pc = 0x321698u;
}
