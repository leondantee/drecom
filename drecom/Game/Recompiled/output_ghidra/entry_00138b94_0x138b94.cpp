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

// Function: entry_00138b94
// Address: 0x138b94 - 0x138bb0
void entry_00138b94_0x138b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b94_0x138b94");
#endif

    ctx->pc = 0x138b94u;

    // 0x138b94: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x138b98: 0x30720008  andi        $s2, $v1, 0x8
    ctx->pc = 0x138b98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x138b9c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B9Cu;
    {
        const bool branch_taken_0x138b9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b9c) {
            ctx->pc = 0x138BB0u;
            return;
        }
    }
    ctx->pc = 0x138BA4u;
    // 0x138ba4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x138ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138BA8u;
    {
        const bool branch_taken_0x138ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138ba8) {
            ctx->pc = 0x138BB4u;
            return;
        }
    }
    ctx->pc = 0x138BB0u;
}
