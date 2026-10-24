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

// Function: entry_001b4478
// Address: 0x1b4478 - 0x1b44b4
void entry_001b4478_0x1b4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4478_0x1b4478");
#endif

    ctx->pc = 0x1b4478u;

    // 0x1b4478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b447c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b4480: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b4480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b4484: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1B4484u;
    {
        const bool branch_taken_0x1b4484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4484) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B448Cu;
    // 0x1b448c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b4490: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b4490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b4494: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b449c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B449Cu;
    {
        const bool branch_taken_0x1b449c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b449c) {
            ctx->pc = 0x1B44C4u;
            return;
        }
    }
    ctx->pc = 0x1B44A4u;
    // 0x1b44a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B44A4u;
    {
        const bool branch_taken_0x1b44a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44a4) {
            ctx->pc = 0x1B44B4u;
            return;
        }
    }
    ctx->pc = 0x1B44ACu;
    // 0x1b44ac: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1B44ACu;
    {
        const bool branch_taken_0x1b44ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b44ac) {
            ctx->pc = 0x1B4650u;
            return;
        }
    }
    ctx->pc = 0x1B44B4u;
}
