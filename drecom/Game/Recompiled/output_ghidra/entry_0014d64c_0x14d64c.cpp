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

// Function: entry_0014d64c
// Address: 0x14d64c - 0x14d670
void entry_0014d64c_0x14d64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d64c_0x14d64c");
#endif

    ctx->pc = 0x14d64cu;

    // 0x14d64c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d650: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d654: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14d658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d65c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D65Cu;
    {
        const bool branch_taken_0x14d65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d65c) {
            ctx->pc = 0x14D670u;
            return;
        }
    }
    ctx->pc = 0x14D664u;
    // 0x14d664: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d668: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14d66c: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d66cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d670u;
}
