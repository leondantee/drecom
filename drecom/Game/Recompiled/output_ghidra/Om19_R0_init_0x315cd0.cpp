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

// Function: Om19_R0_init
// Address: 0x315cd0 - 0x315d58
void Om19_R0_init_0x315cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om19_R0_init_0x315cd0");
#endif

    switch (ctx->pc) {
        case 0x315d04u: goto label_315d04;
        default: break;
    }

    ctx->pc = 0x315cd0u;

    // 0x315cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x315cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x315cd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x315cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x315cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x315cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x315cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x315ce0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x315ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x315ce4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x315ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x315ce8: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x315ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x315cec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x315cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315cf0: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x315cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x315cf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x315cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315cf8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x315cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x315cfc: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x315CFCu;
    SET_GPR_U32(ctx, 31, 0x315D04u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x315CFCu, 0x315D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D04u;
label_315d04:
    // 0x315d04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x315d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d08: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x315d08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x315d0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x315d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x315d10: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x315d10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x315d14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x315d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x315d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x315d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d24: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x315d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x315d28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x315d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x315d30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x315d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x315d38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315d3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x315d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x315d40: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x315d40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x315d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315d4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x315d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x315d50: 0x3e00008  jr          $ra
    ctx->pc = 0x315D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315D58u;
}
