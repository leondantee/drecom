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

// Function: entry_00256878
// Address: 0x256878 - 0x2568b0
void entry_00256878_0x256878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256878_0x256878");
#endif

    ctx->pc = 0x256878u;

    // 0x256878: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x256878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x25687c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25687Cu;
    {
        const bool branch_taken_0x25687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25687c) {
            ctx->pc = 0x2568B0u;
            return;
        }
    }
    ctx->pc = 0x256884u;
    // 0x256884: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x256884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x256888: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x256888u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25688c: 0x2601827  not         $v1, $s3
    ctx->pc = 0x25688cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
    // 0x256890: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x256890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256894: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256898: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x256898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x25689c: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x25689cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2568a0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x2568a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2568a4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2568a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2568a8: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x2568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x2568ac: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2568acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x2568b0u;
}
