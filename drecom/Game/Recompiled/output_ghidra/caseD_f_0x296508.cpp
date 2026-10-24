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

// Function: caseD_f
// Address: 0x296508 - 0x296524
void caseD_f_0x296508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x296508");
#endif

    ctx->pc = 0x296508u;

    // 0x296508: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x29650c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29650Cu;
    {
        const bool branch_taken_0x29650c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x29650c) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296514u;
    // 0x296514: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x296514u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296518: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x296518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x29651c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29651Cu;
    {
        const bool branch_taken_0x29651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29651c) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296524u;
}
