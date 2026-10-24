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

// Function: entry_00338f28
// Address: 0x338f28 - 0x338f78
void entry_00338f28_0x338f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338f28_0x338f28");
#endif

    ctx->pc = 0x338f28u;

    // 0x338f28: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x338f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x338f2c: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x338f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x338f30: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x338f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x338f34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x338f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x338f38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338f3c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x338f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x338f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338f44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338f48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338f4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338f50: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x338f50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338f54: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x338f54u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x338f58: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x338f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
    // 0x338f5c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x338f5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x338f60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x338f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x338f64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338F64u;
    {
        const bool branch_taken_0x338f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x338f64) {
            ctx->pc = 0x338F78u;
            return;
        }
    }
    ctx->pc = 0x338F6Cu;
    // 0x338f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f70: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x338F70u;
    {
        const bool branch_taken_0x338f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f70) {
            ctx->pc = 0x339034u;
            return;
        }
    }
    ctx->pc = 0x338F78u;
}
