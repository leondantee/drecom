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

// Function: entry_0032a26c
// Address: 0x32a26c - 0x32a288
void entry_0032a26c_0x32a26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a26c_0x32a26c");
#endif

    ctx->pc = 0x32a26cu;

    // 0x32a26c: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a270: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a274: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a274u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a278: 0x28630166  slti        $v1, $v1, 0x166
    ctx->pc = 0x32a278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)358) ? 1 : 0);
    // 0x32a27c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32A27Cu;
    {
        const bool branch_taken_0x32a27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a27c) {
            ctx->pc = 0x32A288u;
            return;
        }
    }
    ctx->pc = 0x32A284u;
    // 0x32a284: 0xa2002912  sb          $zero, 0x2912($s0)
    ctx->pc = 0x32a284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10514), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32a288u;
}
