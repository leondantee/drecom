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

// Function: entry_00292e40
// Address: 0x292e40 - 0x292e7c
void entry_00292e40_0x292e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292e40_0x292e40");
#endif

    ctx->pc = 0x292e40u;

    // 0x292e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292e44: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x292e48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x292e4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292e50: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x292E50u;
    {
        const bool branch_taken_0x292e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e50) {
            ctx->pc = 0x292EECu;
            return;
        }
    }
    ctx->pc = 0x292E58u;
    // 0x292e58: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292e5c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x292e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x292e60: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x292E60u;
    {
        const bool branch_taken_0x292e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e60) {
            ctx->pc = 0x292E7Cu;
            return;
        }
    }
    ctx->pc = 0x292E68u;
    // 0x292e68: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x292e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x292e70: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292e74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292E74u;
    {
        const bool branch_taken_0x292e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292e74) {
            ctx->pc = 0x292E80u;
            return;
        }
    }
    ctx->pc = 0x292E7Cu;
}
