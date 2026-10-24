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

// Function: Om8f_R0_init
// Address: 0x35be30 - 0x35bee4
void Om8f_R0_init_0x35be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8f_R0_init_0x35be30");
#endif

    switch (ctx->pc) {
        case 0x35be4cu: goto label_35be4c;
        default: break;
    }

    ctx->pc = 0x35be30u;

    // 0x35be30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35be34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35be38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35be38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35be3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x35be40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35be44: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x35BE44u;
    SET_GPR_U32(ctx, 31, 0x35BE4Cu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x35BE44u, 0x35BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BE4Cu;
label_35be4c:
    // 0x35be4c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be50: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x35be50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x35be54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x35be54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x35be58: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x35be58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x35be5c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35be60: 0x2464aa20  addiu       $a0, $v1, -0x55E0
    ctx->pc = 0x35be60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x35be64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be68: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x35be68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x35be6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35be70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35be70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be74: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x35be74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x35be78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x35be78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x35be7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be80: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x35be80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x35be84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35be88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be8c: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x35be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x35be90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35be94: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35be94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35be98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35be98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35be9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35be9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35bea0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bea4: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x35bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x35bea8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35beac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35beb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35beb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35beb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35beb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35beb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bebc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bec0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bec8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35bec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35becc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bed0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35bed4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35bed4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bed8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35bed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35bedc: 0x3e00008  jr          $ra
    ctx->pc = 0x35BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BEE4u;
}
