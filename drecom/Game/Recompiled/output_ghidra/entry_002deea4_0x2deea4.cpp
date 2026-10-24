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

// Function: entry_002deea4
// Address: 0x2deea4 - 0x2deed8
void entry_002deea4_0x2deea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002deea4_0x2deea4");
#endif

    switch (ctx->pc) {
        case 0x2deeb0u: goto label_2deeb0;
        default: break;
    }

    ctx->pc = 0x2deea4u;

    // 0x2deea4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deea8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DEEA8u;
    SET_GPR_U32(ctx, 31, 0x2DEEB0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEEA8u, 0x2DEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEB0u;
label_2deeb0:
    // 0x2deeb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deeb4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2deeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2deeb8: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2DEEB8u;
    {
        const bool branch_taken_0x2deeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deeb8) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DEEC0u;
    // 0x2deec0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deec4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2deec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2deec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2deecc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2deeccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2deed0: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x2DEED0u;
    {
        const bool branch_taken_0x2deed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2deed0) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DEED8u;
}
