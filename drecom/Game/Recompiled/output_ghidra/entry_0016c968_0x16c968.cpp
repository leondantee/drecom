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

// Function: entry_0016c968
// Address: 0x16c968 - 0x16c978
void entry_0016c968_0x16c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c968_0x16c968");
#endif

    ctx->pc = 0x16c968u;

    // 0x16c968: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x16c968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16c96c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C96Cu;
    {
        const bool branch_taken_0x16c96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c96c) {
            ctx->pc = 0x16C978u;
            return;
        }
    }
    ctx->pc = 0x16C974u;
    // 0x16c974: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16c974u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16c978u;
}
