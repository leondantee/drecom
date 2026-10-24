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

// Function: caseD_4
// Address: 0x20ee8c - 0x20eed4
void caseD_4_0x20ee8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x20ee8c");
#endif

    switch (ctx->pc) {
        case 0x20eea8u: goto label_20eea8;
        default: break;
    }

    ctx->pc = 0x20ee8cu;

    // 0x20ee8c: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee90: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x20ee90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20ee94: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20ee98: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x20ee98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ee9c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eea0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EEA0u;
    SET_GPR_U32(ctx, 31, 0x20EEA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EEA0u, 0x20EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEA8u;
label_20eea8:
    // 0x20eea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20eea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20eeac: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eeb0: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x20eeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x20eeb4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EEBCu;
    // 0x20eebc: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eec0: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x20eec0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x20eec4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x20eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20eec8: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x20eec8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20eecc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x20EECCu;
    {
        const bool branch_taken_0x20eecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eecc) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EED4u;
}
