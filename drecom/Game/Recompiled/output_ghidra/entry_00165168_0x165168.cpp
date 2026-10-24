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

// Function: entry_00165168
// Address: 0x165168 - 0x1651a8
void entry_00165168_0x165168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165168_0x165168");
#endif

    ctx->pc = 0x165168u;

label_165168:
    // 0x165168: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x165168u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16516c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165170: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165174: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x165178: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16517c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x16517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165180: 0x1622fff9  bne         $s1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x165180) {
            ctx->pc = 0x165168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165168;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x8e13000c  lw          $s3, 0xC($s0)
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16518c: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x16518cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x165190: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x165190) {
            ctx->pc = 0x1651A8u;
            return;
        }
    }
    ctx->pc = 0x165198u;
    // 0x165198: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x165198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16519c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1651a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1651a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1651a4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1651a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1651a8u;
}
