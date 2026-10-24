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

// Function: entry_00379094
// Address: 0x379094 - 0x3791ac
void entry_00379094_0x379094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379094_0x379094");
#endif

    switch (ctx->pc) {
        case 0x3790a0u: goto label_3790a0;
        case 0x3790acu: goto label_3790ac;
        case 0x379138u: goto label_379138;
        case 0x379150u: goto label_379150;
        default: break;
    }

    ctx->pc = 0x379094u;

    // 0x379094: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x379094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379098: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x379098u;
    SET_GPR_U32(ctx, 31, 0x3790A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x379098u, 0x3790A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790A0u;
label_3790a0:
    // 0x3790a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3790a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3790A4u;
    SET_GPR_U32(ctx, 31, 0x3790ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3790A4u, 0x3790ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790ACu;
label_3790ac:
    // 0x3790ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3790acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3790b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790b4: 0x0  nop
    ctx->pc = 0x3790b4u;
    // NOP
    // 0x3790b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3790b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3790bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3790bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790c0: 0x0  nop
    ctx->pc = 0x3790c0u;
    // NOP
    // 0x3790c4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3790c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3790c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3790c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3790cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790d0: 0x0  nop
    ctx->pc = 0x3790d0u;
    // NOP
    // 0x3790d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3790d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3790d8: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3790dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790e0: 0x0  nop
    ctx->pc = 0x3790e0u;
    // NOP
    // 0x3790e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3790e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3790e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3790e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790ec: 0x0  nop
    ctx->pc = 0x3790ecu;
    // NOP
    // 0x3790f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3790f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3790f4: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3790f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3790f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790fc: 0x0  nop
    ctx->pc = 0x3790fcu;
    // NOP
    // 0x379100: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x379100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x379104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379108: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37910c: 0xa0431340  sb          $v1, 0x1340($v0)
    ctx->pc = 0x37910cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4928), (uint8_t)GPR_U32(ctx, 3));
    // 0x379110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379118: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x379118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x37911c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379120: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x379120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379124: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x379124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x379128: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x37912c: 0x244703b0  addiu       $a3, $v0, 0x3B0
    ctx->pc = 0x37912cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x379130: 0xc0d87b0  jal         func_361EC0
    ctx->pc = 0x379130u;
    SET_GPR_U32(ctx, 31, 0x379138u);
    ctx->pc = 0x361EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EC0u, 0x379130u, 0x379138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379138u;
label_379138:
    // 0x379138: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37913c: 0xa02003a0  sb          $zero, 0x3A0($at)
    ctx->pc = 0x37913cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A03A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A03A0u, _value); } while (0);
    // 0x379140: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x379144: 0x24440430  addiu       $a0, $v0, 0x430
    ctx->pc = 0x379144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x379148: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x379148u;
    SET_GPR_U32(ctx, 31, 0x379150u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x379148u, 0x379150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379150u;
label_379150:
    // 0x379150: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x379150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x379154: 0x246403a0  addiu       $a0, $v1, 0x3A0
    ctx->pc = 0x379154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x379158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37915c: 0xac641348  sw          $a0, 0x1348($v1)
    ctx->pc = 0x37915cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 4));
    // 0x379160: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x379164: 0x2464b760  addiu       $a0, $v1, -0x48A0
    ctx->pc = 0x379164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948704));
    // 0x379168: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37916c: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x37916cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x379170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379178: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x379178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x37917c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x379180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379184: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x379184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x379188: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37918c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379190: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x379190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x379194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379198: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x379198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x37919c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3791a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3791a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3791a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791a8: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x3791a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    ctx->pc = 0x3791acu;
}
