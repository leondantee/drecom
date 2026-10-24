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

// Function: R115_init
// Address: 0x2788d0 - 0x278950
void R115_init_0x2788d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R115_init_0x2788d0");
#endif

    switch (ctx->pc) {
        case 0x278940u: goto label_278940;
        default: break;
    }

    ctx->pc = 0x2788d0u;

    // 0x2788d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2788d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2788d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2788d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2788d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2788d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2788dc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2788dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2788e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2788e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2788e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2788e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2788e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2788ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2788ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2788f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2788f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2788f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2788f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2788f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2788f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2788fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2788fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278908: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x278908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27890c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x278910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x278910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x278914: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278918: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x278918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27891c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278920: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x278920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x278924: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x278924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x278928: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x278928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27892c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278930: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x278930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
    // 0x278934: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278938: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x278938u;
    SET_GPR_U32(ctx, 31, 0x278940u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x278938u, 0x278940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278940u;
label_278940:
    // 0x278940: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x278940u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278944: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x278944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278948: 0x3e00008  jr          $ra
    ctx->pc = 0x278948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278950u;
}
