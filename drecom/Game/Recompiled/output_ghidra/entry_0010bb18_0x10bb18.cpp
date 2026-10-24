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

// Function: entry_0010bb18
// Address: 0x10bb18 - 0x10bb48
void entry_0010bb18_0x10bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb18_0x10bb18");
#endif

    ctx->pc = 0x10bb18u;

label_10bb18:
    // 0x10bb18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10bb1c: 0x0  nop
    ctx->pc = 0x10bb1cu;
    // NOP
    // 0x10bb20: 0x0  nop
    ctx->pc = 0x10bb20u;
    // NOP
    // 0x10bb24: 0x0  nop
    ctx->pc = 0x10bb24u;
    // NOP
    // 0x10bb28: 0x0  nop
    ctx->pc = 0x10bb28u;
    // NOP
    // 0x10bb2c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BB2Cu;
    {
        const bool branch_taken_0x10bb2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bb2c) {
            ctx->pc = 0x10BB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bb18;
        }
    }
    ctx->pc = 0x10BB34u;
    // 0x10bb34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb3c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10bb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10bb40: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10bb44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10bb44u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    ctx->pc = 0x10bb48u;
}
