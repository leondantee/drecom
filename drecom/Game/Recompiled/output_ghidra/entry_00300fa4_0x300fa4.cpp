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

// Function: entry_00300fa4
// Address: 0x300fa4 - 0x300ff4
void entry_00300fa4_0x300fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300fa4_0x300fa4");
#endif

    switch (ctx->pc) {
        case 0x300facu: goto label_300fac;
        default: break;
    }

    ctx->pc = 0x300fa4u;

    // 0x300fa4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x300FA4u;
    SET_GPR_U32(ctx, 31, 0x300FACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x300FA4u, 0x300FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FACu;
label_300fac:
    // 0x300fac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x300facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x300fb0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x300fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x300fb4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x300fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x300fb8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x300fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x300fbc: 0x24639250  addiu       $v1, $v1, -0x6DB0
    ctx->pc = 0x300fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
    // 0x300fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x300fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300fc4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x300fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300fc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300fcc: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x300fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x300fd0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x300fd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x300fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300fe8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x300fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x300fec: 0x3e00008  jr          $ra
    ctx->pc = 0x300FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300FF4u;
}
