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

// Function: entry_00332ee8
// Address: 0x332ee8 - 0x332f00
void entry_00332ee8_0x332ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332ee8_0x332ee8");
#endif

    ctx->pc = 0x332ee8u;

    // 0x332ee8: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x332ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x332eec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x332eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x332ef0: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x332ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x332ef4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EF4u;
    {
        const bool branch_taken_0x332ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ef4) {
            ctx->pc = 0x332F00u;
            return;
        }
    }
    ctx->pc = 0x332EFCu;
    // 0x332efc: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x332efcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x332f00u;
}
