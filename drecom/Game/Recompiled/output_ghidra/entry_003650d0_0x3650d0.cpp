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

// Function: entry_003650d0
// Address: 0x3650d0 - 0x365144
void entry_003650d0_0x3650d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003650d0_0x3650d0");
#endif

    switch (ctx->pc) {
        case 0x3650e0u: goto label_3650e0;
        case 0x3650ecu: goto label_3650ec;
        case 0x3650fcu: goto label_3650fc;
        case 0x365108u: goto label_365108;
        default: break;
    }

    ctx->pc = 0x3650d0u;

    // 0x3650d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3650d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3650d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3650d8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3650D8u;
    SET_GPR_U32(ctx, 31, 0x3650E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3650D8u, 0x3650E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650E0u;
label_3650e0:
    // 0x3650e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3650e4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3650E4u;
    SET_GPR_U32(ctx, 31, 0x3650ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3650E4u, 0x3650ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650ECu;
label_3650ec:
    // 0x3650ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3650f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3650f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3650f4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3650F4u;
    SET_GPR_U32(ctx, 31, 0x3650FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3650F4u, 0x3650FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3650FCu;
label_3650fc:
    // 0x3650fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3650fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365100: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365100u;
    SET_GPR_U32(ctx, 31, 0x365108u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365100u, 0x365108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365108u;
label_365108:
    // 0x365108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36510c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36510cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365110: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x365110u;
    {
        const bool branch_taken_0x365110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365110) {
            ctx->pc = 0x365144u;
            return;
        }
    }
    ctx->pc = 0x365118u;
    // 0x365118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36511c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365120: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365128: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36512c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365130: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x365134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365138: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36513c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x365140: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365144u;
}
