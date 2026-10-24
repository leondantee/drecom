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

// Function: ectrl00_init00
// Address: 0x200d20 - 0x200d94
void ectrl00_init00_0x200d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl00_init00_0x200d20");
#endif

    ctx->pc = 0x200d20u;

    // 0x200d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200d28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x200d2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d30: 0x8c7000f4  lw          $s0, 0xF4($v1)
    ctx->pc = 0x200d30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x200d34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200d38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d3c: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x200d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x200d40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d44: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200d48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x200d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x200d4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d50: 0xac6400c8  sw          $a0, 0xC8($v1)
    ctx->pc = 0x200d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 4));
    // 0x200d54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d58: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200d5c: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x200d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x200d60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d64: 0xa06400d1  sb          $a0, 0xD1($v1)
    ctx->pc = 0x200d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 209), (uint8_t)GPR_U32(ctx, 4));
    // 0x200d68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d6c: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x200d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x200d70: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x200d74: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x200d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
    // 0x200d78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x200d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200d80: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x200d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x200d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x200d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x200D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200D94u;
}
