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

// Function: entry_00338d14
// Address: 0x338d14 - 0x338d34
void entry_00338d14_0x338d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338d14_0x338d14");
#endif

    ctx->pc = 0x338d14u;

    // 0x338d14: 0x87a20078  lh          $v0, 0x78($sp)
    ctx->pc = 0x338d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338d18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x338d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x338d1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x338d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x338d20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338D20u;
    {
        const bool branch_taken_0x338d20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338d20) {
            ctx->pc = 0x338D34u;
            return;
        }
    }
    ctx->pc = 0x338D28u;
    // 0x338d28: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x338d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338D2Cu;
    {
        const bool branch_taken_0x338d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d2c) {
            ctx->pc = 0x338D38u;
            return;
        }
    }
    ctx->pc = 0x338D34u;
}
