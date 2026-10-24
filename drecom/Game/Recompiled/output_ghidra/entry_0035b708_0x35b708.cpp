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

// Function: entry_0035b708
// Address: 0x35b708 - 0x35b758
void entry_0035b708_0x35b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b708_0x35b708");
#endif

    ctx->pc = 0x35b708u;

    // 0x35b708: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x35b708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35b70c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x35B70Cu;
    {
        const bool branch_taken_0x35b70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b70c) {
            ctx->pc = 0x35B6DCu;
            return;
        }
    }
    ctx->pc = 0x35B714u;
    // 0x35b714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b718: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b71c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b724: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b72c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b73c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b740: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35b740u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b74c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35b74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b750: 0x3e00008  jr          $ra
    ctx->pc = 0x35B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B758u;
}
