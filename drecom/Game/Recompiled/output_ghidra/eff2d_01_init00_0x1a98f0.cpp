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

// Function: eff2d_01_init00
// Address: 0x1a98f0 - 0x1a99b8
void eff2d_01_init00_0x1a98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_01_init00_0x1a98f0");
#endif

    switch (ctx->pc) {
        case 0x1a9924u: goto label_1a9924;
        case 0x1a9930u: goto label_1a9930;
        case 0x1a9958u: goto label_1a9958;
        default: break;
    }

    ctx->pc = 0x1a98f0u;

    // 0x1a98f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a98f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1a98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a98f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a98fc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1a98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1a9900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9904: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a9908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a990c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9910: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x1a9910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x1a9914: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a9914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9918: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a9918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a991c: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x1A991Cu;
    SET_GPR_U32(ctx, 31, 0x1A9924u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x1A991Cu, 0x1A9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9924u;
label_1a9924:
    // 0x1a9924: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a9924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9928: 0xc0c9918  jal         func_326460
    ctx->pc = 0x1A9928u;
    SET_GPR_U32(ctx, 31, 0x1A9930u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x1A9928u, 0x1A9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9930u;
label_1a9930:
    // 0x1a9930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9934: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x1a9934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a9938: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a9938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a993c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A993Cu;
    {
        const bool branch_taken_0x1a993c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a993c) {
            ctx->pc = 0x1A9970u;
            goto label_1a9970;
        }
    }
    ctx->pc = 0x1A9944u;
    // 0x1a9944: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9948: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1a994c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9950: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1A9950u;
    SET_GPR_U32(ctx, 31, 0x1A9958u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1A9950u, 0x1A9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9958u;
label_1a9958:
    // 0x1a9958: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1a9958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1a995c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a995cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9960: 0x0  nop
    ctx->pc = 0x1a9960u;
    // NOP
    // 0x1a9964: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a9964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a9968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a996c: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x1a996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_1a9970:
    // 0x1a9970: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9974: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1a9974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1a9978: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1a997c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a997cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a9980: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1a9980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1a9984: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9988: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1a9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1a998c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1a998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1a9990: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a9994: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1a9994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1a9998: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1a9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a999c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a99a0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a99a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a99a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a99a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a99a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a99ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a99b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A99B8u;
}
