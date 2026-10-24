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

// Function: Rnd
// Address: 0x19da50 - 0x19dabc
void Rnd_0x19da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rnd_0x19da50");
#endif

    ctx->pc = 0x19da50u;

    // 0x19da50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19da54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19da58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19da5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19da60: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19da64: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19da64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19da68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19da68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19da6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19da70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19da74: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x19da74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19da78: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x19da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19da7c: 0x28a00  sll         $s1, $v0, 8
    ctx->pc = 0x19da7cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19da80: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x19da80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x19da84: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x19da84u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19da88: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x19da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x19da8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19da8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19da90: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19da90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19da94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19da94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19da98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19da98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19da9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19da9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19daa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19daa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19daa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19daa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19daa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19daa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19daac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19daacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dab0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DABCu;
}
