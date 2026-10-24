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

// Function: caseD_1
// Address: 0x132cb0 - 0x132d10
void caseD_1_0x132cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x132cb0");
#endif

    switch (ctx->pc) {
        case 0x132cc0u: goto label_132cc0;
        case 0x132cccu: goto label_132ccc;
        case 0x132cdcu: goto label_132cdc;
        case 0x132ce8u: goto label_132ce8;
        default: break;
    }

    ctx->pc = 0x132cb0u;

    // 0x132cb0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132cb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132CB8u;
    SET_GPR_U32(ctx, 31, 0x132CC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132CB8u, 0x132CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CC0u;
label_132cc0:
    // 0x132cc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132cc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x132CC4u;
    SET_GPR_U32(ctx, 31, 0x132CCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132CC4u, 0x132CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CCCu;
label_132ccc:
    // 0x132ccc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132cd4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132CD4u;
    SET_GPR_U32(ctx, 31, 0x132CDCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132CD4u, 0x132CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CDCu;
label_132cdc:
    // 0x132cdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ce0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132CE0u;
    SET_GPR_U32(ctx, 31, 0x132CE8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132CE0u, 0x132CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CE8u;
label_132ce8:
    // 0x132ce8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132cec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132cf0: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x132CF0u;
    {
        const bool branch_taken_0x132cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132cf0) {
            ctx->pc = 0x133054u;
            return;
        }
    }
    ctx->pc = 0x132CF8u;
    // 0x132cf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132cfc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132d00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132d04: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x132d08: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x132D08u;
    {
        const bool branch_taken_0x132d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d08) {
            ctx->pc = 0x133054u;
            return;
        }
    }
    ctx->pc = 0x132D10u;
}
