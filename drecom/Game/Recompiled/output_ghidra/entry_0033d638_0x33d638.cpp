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

// Function: entry_0033d638
// Address: 0x33d638 - 0x33d668
void entry_0033d638_0x33d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d638_0x33d638");
#endif

    ctx->pc = 0x33d638u;

    // 0x33d638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d63c: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d640: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x33d640u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x33d644: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D644u;
    {
        const bool branch_taken_0x33d644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d644) {
            ctx->pc = 0x33D668u;
            return;
        }
    }
    ctx->pc = 0x33D64Cu;
    // 0x33d64c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x33d64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d650: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d654: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d658: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x33d658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33d65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d660: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x33D660u;
    {
        const bool branch_taken_0x33d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d660) {
            ctx->pc = 0x33D8D4u;
            return;
        }
    }
    ctx->pc = 0x33D668u;
}
