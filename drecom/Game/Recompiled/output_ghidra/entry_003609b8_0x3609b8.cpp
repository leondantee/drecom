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

// Function: entry_003609b8
// Address: 0x3609b8 - 0x360a08
void entry_003609b8_0x3609b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003609b8_0x3609b8");
#endif

    ctx->pc = 0x3609b8u;

    // 0x3609b8: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x3609b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3609bc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3609BCu;
    {
        const bool branch_taken_0x3609bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3609bc) {
            ctx->pc = 0x36098Cu;
            return;
        }
    }
    ctx->pc = 0x3609C4u;
    // 0x3609c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3609c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3609ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3609d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3609d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3609dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3609e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3609ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3609f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3609f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3609f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3609f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3609f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3609f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3609fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3609fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360a00: 0x3e00008  jr          $ra
    ctx->pc = 0x360A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360A08u;
}
