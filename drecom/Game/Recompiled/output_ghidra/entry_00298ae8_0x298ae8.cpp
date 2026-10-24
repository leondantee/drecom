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

// Function: entry_00298ae8
// Address: 0x298ae8 - 0x298b34
void entry_00298ae8_0x298ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298ae8_0x298ae8");
#endif

    ctx->pc = 0x298ae8u;

    // 0x298ae8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298aec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x298aecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x298af0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298af8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298af8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298b00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x298b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x298b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298b10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298b18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298b20: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x298b20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x298B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B34u;
}
