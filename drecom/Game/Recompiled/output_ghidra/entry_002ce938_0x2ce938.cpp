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

// Function: entry_002ce938
// Address: 0x2ce938 - 0x2ce950
void entry_002ce938_0x2ce938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce938_0x2ce938");
#endif

    ctx->pc = 0x2ce938u;

    // 0x2ce938: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2ce938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2ce93c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2ce940: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2ce940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ce944: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2CE944u;
    {
        const bool branch_taken_0x2ce944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce944) {
            ctx->pc = 0x2CE8C0u;
            return;
        }
    }
    ctx->pc = 0x2CE94Cu;
    // 0x2ce94c: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2ce94cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2ce950u;
}
