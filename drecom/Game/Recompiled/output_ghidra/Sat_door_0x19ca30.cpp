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

// Function: Sat_door
// Address: 0x19ca30 - 0x19caf0
void Sat_door_0x19ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sat_door_0x19ca30");
#endif

    ctx->pc = 0x19ca30u;

    // 0x19ca30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ca34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ca38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ca3c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x19ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x19ca40: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ca44: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19ca48: 0x2451fe10  addiu       $s1, $v0, -0x1F0
    ctx->pc = 0x19ca48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x19ca4c: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x19ca4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ca50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ca54: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19ca54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19ca58: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ca5c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x19ca60: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x19ca60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ca64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ca68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ca6c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x19ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x19ca70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x19ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ca78: 0xe42095c0  swc1        $f0, -0x6A40($at)
    ctx->pc = 0x19ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C0u, _value); } while (0); }
    // 0x19ca7c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x19ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ca84: 0xe42095c4  swc1        $f0, -0x6A3C($at)
    ctx->pc = 0x19ca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C4u, _value); } while (0); }
    // 0x19ca88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19ca90: 0xe42095c8  swc1        $f0, -0x6A38($at)
    ctx->pc = 0x19ca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195C8u, _value); } while (0); }
    // 0x19ca94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19ca98: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x19ca98u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x19caa0: 0xe42095cc  swc1        $f0, -0x6A34($at)
    ctx->pc = 0x19caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6195CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195CCu, _value); } while (0); }
    // 0x19caa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19caa8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x19caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19caac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19caacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19cab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19cab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cab8: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x19cab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x19cabc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cac0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19cac4: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x19cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x19cac8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19cac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19cacc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19caccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cad0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19cad4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x19cad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x19cad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19cae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19cae8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CAF0u;
}
