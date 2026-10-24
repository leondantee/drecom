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

// Function: R121_gate_model_init
// Address: 0x27fd80 - 0x27fdd8
void R121_gate_model_init_0x27fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R121_gate_model_init_0x27fd80");
#endif

    switch (ctx->pc) {
        case 0x27fdb8u: goto label_27fdb8;
        default: break;
    }

    ctx->pc = 0x27fd80u;

    // 0x27fd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27fd84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27fd88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27fd8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fd90: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x27fd90u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27fd94: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27fd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fd98: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27fd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27fd9c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27fd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27fda0: 0x24027fe0  addiu       $v0, $zero, 0x7FE0
    ctx->pc = 0x27fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x27fda4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x27fda8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27fda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27fdac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27fdb0: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x27FDB0u;
    SET_GPR_U32(ctx, 31, 0x27FDB8u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x27FDB0u, 0x27FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDB8u;
label_27fdb8:
    // 0x27fdb8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x27fdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fdbc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27fdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x27fdc0: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x27fdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x27fdc4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27fdc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fdcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27fdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27fdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x27FDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FDD8u;
}
