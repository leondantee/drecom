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

// Function: entry_00218950
// Address: 0x218950 - 0x218964
void entry_00218950_0x218950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218950_0x218950");
#endif

    ctx->pc = 0x218950u;

    // 0x218950: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218954: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218958: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21895c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x21895Cu;
    {
        const bool branch_taken_0x21895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21895c) {
            ctx->pc = 0x218B48u;
            return;
        }
    }
    ctx->pc = 0x218964u;
}
