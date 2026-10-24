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

// Function: entry_0032fbb4
// Address: 0x32fbb4 - 0x32fbc4
void entry_0032fbb4_0x32fbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fbb4_0x32fbb4");
#endif

    ctx->pc = 0x32fbb4u;

    // 0x32fbb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fbb8: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x32fbb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x32fbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32FBBCu;
    {
        const bool branch_taken_0x32fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fbbc) {
            ctx->pc = 0x32FBE0u;
            return;
        }
    }
    ctx->pc = 0x32FBC4u;
}
