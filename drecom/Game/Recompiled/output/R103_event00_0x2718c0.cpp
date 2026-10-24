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

// Function: R103_event00
// Address: 0x2718c0 - 0x271974
void R103_event00_0x2718c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103_event00_0x2718c0");
#endif

    switch (ctx->pc) {
        case 0x271958u: goto label_271958;
        default: break;
    }

    ctx->pc = 0x2718c0u;

    // 0x2718c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2718c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2718c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2718c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2718c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2718c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2718cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2718ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2718d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2718d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2718d4: 0x279280d4  addiu       $s2, $gp, -0x7F2C
    ctx->pc = 0x2718d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934740));
    // 0x2718d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2718dc: 0x2451bb48  addiu       $s1, $v0, -0x44B8
    ctx->pc = 0x2718dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x2718e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2718e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2718e4: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x2718e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2718e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2718ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2718f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2718f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2718f4: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x2718f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    // 0x2718f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2718fc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2718fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x271900: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x271900u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x47BB48u));
    // 0x271904: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x271904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27190c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27190Cu;
    {
        const bool branch_taken_0x27190c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27190c) {
            ctx->pc = 0x271924u;
            goto label_271924;
        }
    }
    ctx->pc = 0x271914u;
    // 0x271914: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271918: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x271918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x27191c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x271920: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x271920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_271924:
    // 0x271924: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x271924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x271928: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27192c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271930u;
    {
        const bool branch_taken_0x271930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271930) {
            ctx->pc = 0x271950u;
            goto label_271950;
        }
    }
    ctx->pc = 0x271938u;
    // 0x271938: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x271938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27193c: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x271940: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x271940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x271944: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x271944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x271948: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x271948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x27194c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x27194cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_271950:
    // 0x271950: 0xc084934  jal         func_2124D0
    ctx->pc = 0x271950u;
    SET_GPR_U32(ctx, 31, 0x271958u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x271950u, 0x271958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271958u;
label_271958:
    // 0x271958: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x271958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27195c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27195cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271968: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27196c: 0x3e00008  jr          $ra
    ctx->pc = 0x27196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271974u;
}
