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

// Function: entry_001d1130
// Address: 0x1d1130 - 0x1d1180
void entry_001d1130_0x1d1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1130_0x1d1130");
#endif

    ctx->pc = 0x1d1130u;

label_1d1130:
    // 0x1d1130: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1d1134:
    // 0x1d1134: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d1138:
    // 0x1d1138: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d113c:
    // 0x1d113c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d1140:
    // 0x1d1140: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
label_1d1144:
    // 0x1d1144: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1148:
    // 0x1d1148: 0x92230060  lbu         $v1, 0x60($s1)
    ctx->pc = 0x1d1148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_1d114c:
    // 0x1d114c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1d1150:
    if (ctx->pc == 0x1D1150u) {
        ctx->pc = 0x1D1154u;
        goto label_1d1154;
    }
    ctx->pc = 0x1D114Cu;
    {
        const bool branch_taken_0x1d114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d114c) {
            ctx->pc = 0x1D1180u;
            return;
        }
    }
    ctx->pc = 0x1D1154u;
label_1d1154:
    // 0x1d1154: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1d1154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1d1158:
    // 0x1d1158: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1d1158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d115c:
    // 0x1d115c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x1d115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1d1160:
    // 0x1d1160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d1164:
    // 0x1d1164: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d1164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d1168:
    // 0x1d1168: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d1168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d116c:
    // 0x1d116c: 0x244291e0  addiu       $v0, $v0, -0x6E20
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939104));
label_1d1170:
    // 0x1d1170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1174:
    // 0x1d1174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1178:
    // 0x1d1178: 0x40f809  jalr        $v0
label_1d117c:
    if (ctx->pc == 0x1D117Cu) {
        ctx->pc = 0x1D1180u;
        goto label_fallthrough_0x1d1178;
    }
    ctx->pc = 0x1D1178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1180u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1178u, 0x1D1180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d1178:
    ctx->pc = 0x1D1180u;
}
