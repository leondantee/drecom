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

// Function: entry_0036c2ac
// Address: 0x36c2ac - 0x36c314
void entry_0036c2ac_0x36c2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c2ac_0x36c2ac");
#endif

    switch (ctx->pc) {
        case 0x36c2bcu: goto label_36c2bc;
        case 0x36c2c8u: goto label_36c2c8;
        case 0x36c2d4u: goto label_36c2d4;
        default: break;
    }

    ctx->pc = 0x36c2acu;

    // 0x36c2ac: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36c2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36c2b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36C2B4u;
    SET_GPR_U32(ctx, 31, 0x36C2BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36C2B4u, 0x36C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2BCu;
label_36c2bc:
    // 0x36c2bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C2C0u;
    SET_GPR_U32(ctx, 31, 0x36C2C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C2C0u, 0x36C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2C8u;
label_36c2c8:
    // 0x36c2c8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x36c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2cc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C2CCu;
    SET_GPR_U32(ctx, 31, 0x36C2D4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C2CCu, 0x36C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2D4u;
label_36c2d4:
    // 0x36c2d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2d8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c2dc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C2DCu;
    {
        const bool branch_taken_0x36c2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c2dc) {
            ctx->pc = 0x36C314u;
            return;
        }
    }
    ctx->pc = 0x36C2E4u;
    // 0x36c2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c2e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c2f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c2f4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c2f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c2fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c300: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c304: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c308: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c30c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x36c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x36c310: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36c314u;
}
