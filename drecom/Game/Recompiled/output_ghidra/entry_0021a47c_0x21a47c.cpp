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

// Function: entry_0021a47c
// Address: 0x21a47c - 0x21a494
void entry_0021a47c_0x21a47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a47c_0x21a47c");
#endif

    ctx->pc = 0x21a47cu;

    // 0x21a47c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a480: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A480u;
    {
        const bool branch_taken_0x21a480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a480) {
            ctx->pc = 0x21A494u;
            return;
        }
    }
    ctx->pc = 0x21A488u;
    // 0x21a488: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21a488u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a48c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A48Cu;
    {
        const bool branch_taken_0x21a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a48c) {
            ctx->pc = 0x21A4A8u;
            return;
        }
    }
    ctx->pc = 0x21A494u;
}
