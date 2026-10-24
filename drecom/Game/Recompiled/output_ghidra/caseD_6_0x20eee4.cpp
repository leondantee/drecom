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

// Function: caseD_6
// Address: 0x20eee4 - 0x20ef30
void caseD_6_0x20eee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x20eee4");
#endif

    switch (ctx->pc) {
        case 0x20ef04u: goto label_20ef04;
        default: break;
    }

    ctx->pc = 0x20eee4u;

    // 0x20eee4: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eee8: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20eeec: 0x24e90001  addiu       $t1, $a3, 0x1
    ctx->pc = 0x20eeecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20eef0: 0xa4c91278  sh          $t1, 0x1278($a2)
    ctx->pc = 0x20eef0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 9));
    // 0x20eef4: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20eef4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20eef8: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20eef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20eefc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EEFCu;
    SET_GPR_U32(ctx, 31, 0x20EF04u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EEFCu, 0x20EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF04u;
label_20ef04:
    // 0x20ef04: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20ef04u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ef08: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef0c: 0x914309e7  lbu         $v1, 0x9E7($t2)
    ctx->pc = 0x20ef0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2535)));
    // 0x20ef10: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20EF10u;
    {
        const bool branch_taken_0x20ef10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef10) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EF18u;
    // 0x20ef18: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20ef18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ef1c: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x20ef1cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x20ef20: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x20ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20ef24: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x20ef24u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ef28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20EF28u;
    {
        const bool branch_taken_0x20ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef28) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EF30u;
}
