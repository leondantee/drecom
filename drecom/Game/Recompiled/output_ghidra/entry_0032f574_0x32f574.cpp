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

// Function: entry_0032f574
// Address: 0x32f574 - 0x32f59c
void entry_0032f574_0x32f574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f574_0x32f574");
#endif

    ctx->pc = 0x32f574u;

    // 0x32f574: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32f578: 0x244396c0  addiu       $v1, $v0, -0x6940
    ctx->pc = 0x32f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x32f57c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x32f57cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f580: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x32f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32f584: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x32f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x32f588: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32f588u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f58c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f590: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f590u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f594: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x32F594u;
    {
        const bool branch_taken_0x32f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f594) {
            ctx->pc = 0x32F820u;
            return;
        }
    }
    ctx->pc = 0x32F59Cu;
}
