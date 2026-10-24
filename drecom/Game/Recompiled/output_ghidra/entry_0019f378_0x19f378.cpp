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

// Function: entry_0019f378
// Address: 0x19f378 - 0x19f394
void entry_0019f378_0x19f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f378_0x19f378");
#endif

    ctx->pc = 0x19f378u;

    // 0x19f378: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19f378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f37c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19F37Cu;
    {
        const bool branch_taken_0x19f37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f37c) {
            ctx->pc = 0x19F330u;
            return;
        }
    }
    ctx->pc = 0x19F384u;
    // 0x19f384: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19f388: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x19f38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19f38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f390: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x19f390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x19f394u;
}
