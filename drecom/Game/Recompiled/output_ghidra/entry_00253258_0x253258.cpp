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

// Function: entry_00253258
// Address: 0x253258 - 0x253274
void entry_00253258_0x253258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253258_0x253258");
#endif

    ctx->pc = 0x253258u;

    // 0x253258: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x253258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25325c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x25325cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x253260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253264: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x253264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x253268: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x253268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x25326c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x25326Cu;
    {
        const bool branch_taken_0x25326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25326c) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x253274u;
}
