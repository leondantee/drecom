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

// Function: entry_001df3b0
// Address: 0x1df3b0 - 0x1df3f0
void entry_001df3b0_0x1df3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df3b0_0x1df3b0");
#endif

    ctx->pc = 0x1df3b0u;

label_1df3b0:
    // 0x1df3b0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1df3b4: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1df3b8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1df3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1df3bc: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1df3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1df3c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1df3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1df3c4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1df3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1df3c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df3cc: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF3CCu;
    {
        const bool branch_taken_0x1df3cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df3cc) {
            ctx->pc = 0x1DF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF3D4u;
    // 0x1df3d4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df3d8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df3dc: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df3e0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df3e4: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df3e8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df3ec: 0xac720038  sw          $s2, 0x38($v1)
    ctx->pc = 0x1df3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 18));
    ctx->pc = 0x1df3f0u;
}
