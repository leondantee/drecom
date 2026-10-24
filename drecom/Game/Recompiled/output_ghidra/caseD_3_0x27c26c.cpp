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

// Function: caseD_3
// Address: 0x27c26c - 0x27c290
void caseD_3_0x27c26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x27c26c");
#endif

    ctx->pc = 0x27c26cu;

    // 0x27c26c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c26cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c270: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x27c270u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27c274: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c278: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B49u));
    // 0x27c27c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c280: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c284: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c284u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B49u, _value); } while (0);
    // 0x27c288: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x27C288u;
    {
        const bool branch_taken_0x27c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c288) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C290u;
}
