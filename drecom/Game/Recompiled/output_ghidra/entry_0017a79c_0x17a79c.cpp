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

// Function: entry_0017a79c
// Address: 0x17a79c - 0x17a7b8
void entry_0017a79c_0x17a79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a79c_0x17a79c");
#endif

    ctx->pc = 0x17a79cu;

label_17a79c:
    // 0x17a79c: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x17a79cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x17a7a0: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a7a4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x17a7a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x17a7ac: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a79c;
        }
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17a7b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17a7b8u;
}
