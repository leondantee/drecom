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

// Function: entry_00297e30
// Address: 0x297e30 - 0x297e50
void entry_00297e30_0x297e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297e30_0x297e30");
#endif

    ctx->pc = 0x297e30u;

    // 0x297e30: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x297e34: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x297e34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x297e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297e40: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x297e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x297e44: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x297E44u;
    {
        const bool branch_taken_0x297e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x297e44) {
            ctx->pc = 0x297E50u;
            return;
        }
    }
    ctx->pc = 0x297E4Cu;
    // 0x297e4c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x297e4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x297e50u;
}
