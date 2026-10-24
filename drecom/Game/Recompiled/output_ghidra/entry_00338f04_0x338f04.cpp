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

// Function: entry_00338f04
// Address: 0x338f04 - 0x338f24
void entry_00338f04_0x338f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338f04_0x338f04");
#endif

    ctx->pc = 0x338f04u;

    // 0x338f04: 0x87a20078  lh          $v0, 0x78($sp)
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x338f08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x338f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x338f0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x338f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x338f10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338F10u;
    {
        const bool branch_taken_0x338f10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338f10) {
            ctx->pc = 0x338F24u;
            return;
        }
    }
    ctx->pc = 0x338F18u;
    // 0x338f18: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x338f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338F1Cu;
    {
        const bool branch_taken_0x338f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f1c) {
            ctx->pc = 0x338F28u;
            return;
        }
    }
    ctx->pc = 0x338F24u;
}
