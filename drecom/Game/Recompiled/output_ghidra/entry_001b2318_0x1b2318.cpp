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

// Function: entry_001b2318
// Address: 0x1b2318 - 0x1b2344
void entry_001b2318_0x1b2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2318_0x1b2318");
#endif

    ctx->pc = 0x1b2318u;

    // 0x1b2318: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x1b2318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1b231c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B231Cu;
    {
        const bool branch_taken_0x1b231c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b231c) {
            ctx->pc = 0x1B228Cu;
            return;
        }
    }
    ctx->pc = 0x1B2324u;
    // 0x1b2324: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B2344u;
            return;
        }
    }
    ctx->pc = 0x1B232Cu;
    // 0x1b232c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1b232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1b2330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2330u;
    {
        const bool branch_taken_0x1b2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2330) {
            ctx->pc = 0x1B2344u;
            return;
        }
    }
    ctx->pc = 0x1B2338u;
    // 0x1b2338: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b233c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B233Cu;
    {
        const bool branch_taken_0x1b233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b233c) {
            ctx->pc = 0x1B2348u;
            return;
        }
    }
    ctx->pc = 0x1B2344u;
}
