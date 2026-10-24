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
// Address: 0x20edc4 - 0x20ee24
void caseD_1_0x20edc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x20edc4");
#endif

    switch (ctx->pc) {
        case 0x20edd0u: goto label_20edd0;
        default: break;
    }

    ctx->pc = 0x20edc4u;

    // 0x20edc4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20edc8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20EDC8u;
    SET_GPR_U32(ctx, 31, 0x20EDD0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20EDC8u, 0x20EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EDD0u;
label_20edd0:
    // 0x20edd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20edd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20edd4: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20edd8: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20eddc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ede0: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x20ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x20ede4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ede8: 0x84771278  lh          $s7, 0x1278($v1)
    ctx->pc = 0x20ede8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20edec: 0x173c3c  dsll32      $a3, $s7, 16
    ctx->pc = 0x20edecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << (32 + 16));
    // 0x20edf0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x20edf0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x20edf4: 0x28e10169  slti        $at, $a3, 0x169
    ctx->pc = 0x20edf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)361) ? 1 : 0);
    // 0x20edf8: 0x1420005a  bnez        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x20EDF8u;
    {
        const bool branch_taken_0x20edf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20edf8) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EE00u;
    // 0x20ee00: 0x8fa80528  lw          $t0, 0x528($sp)
    ctx->pc = 0x20ee00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee04: 0x910b0002  lbu         $t3, 0x2($t0)
    ctx->pc = 0x20ee04u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x20ee08: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x20ee0c: 0xa1090002  sb          $t1, 0x2($t0)
    ctx->pc = 0x20ee0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x20ee10: 0x240a0208  addiu       $t2, $zero, 0x208
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x20ee14: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee18: 0xa48a1278  sh          $t2, 0x1278($a0)
    ctx->pc = 0x20ee18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 10));
    // 0x20ee1c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20EE1Cu;
    {
        const bool branch_taken_0x20ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee1c) {
            ctx->pc = 0x20EF64u;
            return;
        }
    }
    ctx->pc = 0x20EE24u;
}
