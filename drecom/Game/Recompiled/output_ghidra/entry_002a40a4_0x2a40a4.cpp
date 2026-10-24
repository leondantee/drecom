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

// Function: entry_002a40a4
// Address: 0x2a40a4 - 0x2a41cc
void entry_002a40a4_0x2a40a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a40a4_0x2a40a4");
#endif

    switch (ctx->pc) {
        case 0x2a40d0u: goto label_2a40d0;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a4104u: goto label_2a4104;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4134u: goto label_2a4134;
        case 0x2a4140u: goto label_2a4140;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a41c0u: goto label_2a41c0;
        default: break;
    }

    ctx->pc = 0x2a40a4u;

    // 0x2a40a4: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x2a40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x2a40a8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a40a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a40ac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a40acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a40b0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40b4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a40bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a40bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a40c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a40c4: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a40c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A40C8u;
    SET_GPR_U32(ctx, 31, 0x2A40D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A40C8u, 0x2A40D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40D0u;
label_2a40d0:
    // 0x2a40d0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a40d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a40d4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40d8: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a40dc: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a40e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a40e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a40e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A40E4u;
    SET_GPR_U32(ctx, 31, 0x2A40ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A40E4u, 0x2A40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40ECu;
label_2a40ec:
    // 0x2a40ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40f0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a40f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a40f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a40f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a40fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A40FCu;
    SET_GPR_U32(ctx, 31, 0x2A4104u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A40FCu, 0x2A4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4104u;
label_2a4104:
    // 0x2a4104: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4108: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a410c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4110: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4114: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4118: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a411c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A411Cu;
    SET_GPR_U32(ctx, 31, 0x2A4124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A411Cu, 0x2A4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4124u;
label_2a4124:
    // 0x2a4124: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4128: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4128u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a412c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A412Cu;
    SET_GPR_U32(ctx, 31, 0x2A4134u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A412Cu, 0x2A4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4134u;
label_2a4134:
    // 0x2a4134: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4138: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4138u;
    SET_GPR_U32(ctx, 31, 0x2A4140u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4138u, 0x2A4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4140u;
label_2a4140:
    // 0x2a4140: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4144: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A4144u;
    SET_GPR_U32(ctx, 31, 0x2A414Cu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A4144u, 0x2A414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A414Cu;
label_2a414c:
    // 0x2a414c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4150: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4154: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4158: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a415c: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2a415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4160: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4164: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a4164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2a4168: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a416c: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4170: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4174: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4178: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a417c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a417cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4180: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a4184: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4188: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a4188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a418c: 0x10600178  beqz        $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x2A418Cu;
    {
        const bool branch_taken_0x2a418c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a418c) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4194u;
    // 0x2a4194: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4198: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a419c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a419cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a41a0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41a4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a41a8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a41ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a41b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a41b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a41b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a41b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a41b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A41B8u;
    SET_GPR_U32(ctx, 31, 0x2A41C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A41B8u, 0x2A41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41C0u;
label_2a41c0:
    // 0x2a41c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a41c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a41c4: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x2A41C4u;
    {
        const bool branch_taken_0x2a41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41c4) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A41CCu;
}
