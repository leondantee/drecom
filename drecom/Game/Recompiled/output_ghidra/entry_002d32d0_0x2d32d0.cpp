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

// Function: entry_002d32d0
// Address: 0x2d32d0 - 0x2d331c
void entry_002d32d0_0x2d32d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d32d0_0x2d32d0");
#endif

    switch (ctx->pc) {
        case 0x2d32dcu: goto label_2d32dc;
        default: break;
    }

    ctx->pc = 0x2d32d0u;

    // 0x2d32d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32d4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D32D4u;
    SET_GPR_U32(ctx, 31, 0x2D32DCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D32D4u, 0x2D32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32DCu;
label_2d32dc:
    // 0x2d32dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32e0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d32e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d32e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D32E4u;
    {
        const bool branch_taken_0x2d32e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d32e4) {
            ctx->pc = 0x2D331Cu;
            return;
        }
    }
    ctx->pc = 0x2D32ECu;
    // 0x2d32ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d32ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d32f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d32f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d32f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3300: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3304: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3308: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d330c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3310: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3314: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3318: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d331cu;
}
