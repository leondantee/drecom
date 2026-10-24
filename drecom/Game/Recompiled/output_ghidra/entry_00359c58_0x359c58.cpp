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

// Function: entry_00359c58
// Address: 0x359c58 - 0x359ca8
void entry_00359c58_0x359c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359c58_0x359c58");
#endif

    ctx->pc = 0x359c58u;

    // 0x359c58: 0x2e030017  sltiu       $v1, $s0, 0x17
    ctx->pc = 0x359c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x359c5c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x359C5Cu;
    {
        const bool branch_taken_0x359c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359c5c) {
            ctx->pc = 0x359C2Cu;
            return;
        }
    }
    ctx->pc = 0x359C64u;
    // 0x359c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x359c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359c70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c74: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x359c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x359c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x359c88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359c8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x359c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x359c90: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x359c90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x359c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x359CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359CA8u;
}
