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

// Function: entry_0036bff0
// Address: 0x36bff0 - 0x36c058
void entry_0036bff0_0x36bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bff0_0x36bff0");
#endif

    switch (ctx->pc) {
        case 0x36c000u: goto label_36c000;
        case 0x36c00cu: goto label_36c00c;
        case 0x36c018u: goto label_36c018;
        default: break;
    }

    ctx->pc = 0x36bff0u;

    // 0x36bff0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bff4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36bff4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bff8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36BFF8u;
    SET_GPR_U32(ctx, 31, 0x36C000u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36BFF8u, 0x36C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C000u;
label_36c000:
    // 0x36c000: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c004: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36C004u;
    SET_GPR_U32(ctx, 31, 0x36C00Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36C004u, 0x36C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C00Cu;
label_36c00c:
    // 0x36c00c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c010: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36C010u;
    SET_GPR_U32(ctx, 31, 0x36C018u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36C010u, 0x36C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C018u;
label_36c018:
    // 0x36c018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c01c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36c01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36c020: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36C020u;
    {
        const bool branch_taken_0x36c020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c020) {
            ctx->pc = 0x36C058u;
            return;
        }
    }
    ctx->pc = 0x36C028u;
    // 0x36c028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c02c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36c030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c03c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36c03cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36c040: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36c044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c04c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36c04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36c050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36c054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36c054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36c058u;
}
