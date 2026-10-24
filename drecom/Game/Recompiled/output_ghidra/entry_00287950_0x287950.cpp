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

// Function: entry_00287950
// Address: 0x287950 - 0x287974
void entry_00287950_0x287950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287950_0x287950");
#endif

    ctx->pc = 0x287950u;

    // 0x287950: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x287954: 0x24675f00  addiu       $a3, $v1, 0x5F00
    ctx->pc = 0x287954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24320));
    // 0x287958: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x287958u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28795c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x28795cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x287960: 0x24c361b8  addiu       $v1, $a2, 0x61B8
    ctx->pc = 0x287960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25016));
    // 0x287964: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x287964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x287968: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x287968u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28796c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x28796Cu;
    {
        const bool branch_taken_0x28796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28796c) {
            ctx->pc = 0x287DD8u;
            return;
        }
    }
    ctx->pc = 0x287974u;
}
