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

// Function: entry_001e56dc
// Address: 0x1e56dc - 0x1e5704
void entry_001e56dc_0x1e56dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e56dc_0x1e56dc");
#endif

    ctx->pc = 0x1e56dcu;

label_1e56dc:
    // 0x1e56dc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1e56dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e56e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e56e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e56e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e56e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e56ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e56ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e56f0: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E56F0u;
    {
        const bool branch_taken_0x1e56f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e56f0) {
            ctx->pc = 0x1E56DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e56dc;
        }
    }
    ctx->pc = 0x1E56F8u;
    // 0x1e56f8: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x1e56f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1e56fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5700: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e5700u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e5704u;
}
