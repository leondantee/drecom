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

// Function: Efm_set_meisai2
// Address: 0x1df940 - 0x1df9f0
void Efm_set_meisai2_0x1df940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_meisai2_0x1df940");
#endif

    switch (ctx->pc) {
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9e0u: goto label_1df9e0;
        default: break;
    }

    ctx->pc = 0x1df940u;

    // 0x1df940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1df944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1df948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1df948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1df94c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x1df94cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1df950: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x1df950u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1df954: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x1df954u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1df958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1df958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df95c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1df960: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1df960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1df964: 0x304200f9  andi        $v0, $v0, 0xF9
    ctx->pc = 0x1df964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)249);
    // 0x1df968: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1df968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1df96c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1df96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df970: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1df974: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1df974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1df978: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1df978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1df97c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1df97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1df980: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1df980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df984: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1df984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df988: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1df988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1df98c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df990: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1df994: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x1DF994u;
    SET_GPR_U32(ctx, 31, 0x1DF99Cu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x1DF994u, 0x1DF99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF99Cu;
label_1df99c:
    // 0x1df99c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9a0: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x1df9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x1df9a4: 0xc077b74  jal         func_1DEDD0
    ctx->pc = 0x1DF9A4u;
    SET_GPR_U32(ctx, 31, 0x1DF9ACu);
    ctx->pc = 0x1DEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEDD0u, 0x1DF9A4u, 0x1DF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9ACu;
label_1df9ac:
    // 0x1df9ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df9b4: 0xc096188  jal         func_258620
    ctx->pc = 0x1DF9B4u;
    SET_GPR_U32(ctx, 31, 0x1DF9BCu);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1DF9B4u, 0x1DF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9BCu;
label_1df9bc:
    // 0x1df9bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9c0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1df9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df9c4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x1df9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df9c8: 0xc0962cc  jal         func_258B30
    ctx->pc = 0x1DF9C8u;
    SET_GPR_U32(ctx, 31, 0x1DF9D0u);
    ctx->pc = 0x258B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B30u, 0x1DF9C8u, 0x1DF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9D0u;
label_1df9d0:
    // 0x1df9d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9d4: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1df9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df9d8: 0xc096268  jal         func_2589A0
    ctx->pc = 0x1DF9D8u;
    SET_GPR_U32(ctx, 31, 0x1DF9E0u);
    ctx->pc = 0x2589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589A0u, 0x1DF9D8u, 0x1DF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9E0u;
label_1df9e0:
    // 0x1df9e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1df9e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df9e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1df9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1df9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF9F0u;
}
