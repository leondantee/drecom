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

// Function: entry_003786a0
// Address: 0x3786a0 - 0x3786fc
void entry_003786a0_0x3786a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003786a0_0x3786a0");
#endif

    ctx->pc = 0x3786a0u;

    // 0x3786a0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x3786a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3786a4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3786A4u;
    {
        const bool branch_taken_0x3786a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3786a4) {
            ctx->pc = 0x37866Cu;
            return;
        }
    }
    ctx->pc = 0x3786ACu;
    // 0x3786ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3786acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3786b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3786b4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3786b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3786b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3786b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3786bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3786bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3786c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3786c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3786c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3786ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3786d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3786dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3786e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3786e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3786e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3786e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3786e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3786e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3786ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3786ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3786f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3786f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3786f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3786F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3786F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3786FCu;
}
