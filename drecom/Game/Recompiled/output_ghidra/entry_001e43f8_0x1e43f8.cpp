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

// Function: entry_001e43f8
// Address: 0x1e43f8 - 0x1e4410
void entry_001e43f8_0x1e43f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e43f8_0x1e43f8");
#endif

    ctx->pc = 0x1e43f8u;

    // 0x1e43f8: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1e43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e43fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4400: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e4400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e4404: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4404u;
    {
        const bool branch_taken_0x1e4404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4404) {
            ctx->pc = 0x1E4410u;
            return;
        }
    }
    ctx->pc = 0x1E440Cu;
    // 0x1e440c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e440cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1e4410u;
}
