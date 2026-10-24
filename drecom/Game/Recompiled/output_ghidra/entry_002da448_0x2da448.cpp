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

// Function: entry_002da448
// Address: 0x2da448 - 0x2da468
void entry_002da448_0x2da448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da448_0x2da448");
#endif

    ctx->pc = 0x2da448u;

    // 0x2da448: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2da448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2da44c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA44Cu;
    {
        const bool branch_taken_0x2da44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da44c) {
            ctx->pc = 0x2DA468u;
            return;
        }
    }
    ctx->pc = 0x2DA454u;
    // 0x2da454: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x2da454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x2da458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2da458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2da45c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x2da45cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2da460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA460u;
    {
        const bool branch_taken_0x2da460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da460) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA468u;
}
