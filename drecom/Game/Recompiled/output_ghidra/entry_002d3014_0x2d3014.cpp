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

// Function: entry_002d3014
// Address: 0x2d3014 - 0x2d3060
void entry_002d3014_0x2d3014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3014_0x2d3014");
#endif

    switch (ctx->pc) {
        case 0x2d3020u: goto label_2d3020;
        default: break;
    }

    ctx->pc = 0x2d3014u;

    // 0x2d3014: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3018: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3018u;
    SET_GPR_U32(ctx, 31, 0x2D3020u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3018u, 0x2D3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3020u;
label_2d3020:
    // 0x2d3020: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3024: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3028: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3028u;
    {
        const bool branch_taken_0x2d3028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3028) {
            ctx->pc = 0x2D3060u;
            return;
        }
    }
    ctx->pc = 0x2D3030u;
    // 0x2d3030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3034: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3038: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d303c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3040: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3044: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d304c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d304cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3054: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d305c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d305cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d3060u;
}
