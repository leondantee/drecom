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

// Function: entry_00160f98
// Address: 0x160f98 - 0x160fbc
void entry_00160f98_0x160f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f98_0x160f98");
#endif

    ctx->pc = 0x160f98u;

    // 0x160f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f9c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fa0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x160fa4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160fa8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160fac: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160fb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160fb4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x160FB4u;
    {
        const bool branch_taken_0x160fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160fb4) {
            ctx->pc = 0x161024u;
            return;
        }
    }
    ctx->pc = 0x160FBCu;
}
