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

// Function: entry_002cb7a8
// Address: 0x2cb7a8 - 0x2cb8fc
void entry_002cb7a8_0x2cb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb7a8_0x2cb7a8");
#endif

    switch (ctx->pc) {
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7f0u: goto label_2cb7f0;
        case 0x2cb808u: goto label_2cb808;
        case 0x2cb828u: goto label_2cb828;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb844u: goto label_2cb844;
        case 0x2cb8f4u: goto label_2cb8f4;
        default: break;
    }

    ctx->pc = 0x2cb7a8u;

    // 0x2cb7a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7b0: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2cb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2cb7b4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cb7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cb7b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cb7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cb7bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb7c0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb7c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cb7c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cb7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cb7cc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CB7CCu;
    SET_GPR_U32(ctx, 31, 0x2CB7D4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CB7CCu, 0x2CB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cb7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cb7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cb7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb7e0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cb7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb7e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cb7e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb7e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CB7E8u;
    SET_GPR_U32(ctx, 31, 0x2CB7F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CB7E8u, 0x2CB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7F0u;
label_2cb7f0:
    // 0x2cb7f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7f4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cb7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cb7f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb800: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB800u;
    SET_GPR_U32(ctx, 31, 0x2CB808u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB800u, 0x2CB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB808u;
label_2cb808:
    // 0x2cb808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb80c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb814: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb818: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb81c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb820: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB820u;
    SET_GPR_U32(ctx, 31, 0x2CB828u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB820u, 0x2CB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB828u;
label_2cb828:
    // 0x2cb828: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb830: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB830u;
    SET_GPR_U32(ctx, 31, 0x2CB838u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB830u, 0x2CB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB838u;
label_2cb838:
    // 0x2cb838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb83c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB83Cu;
    SET_GPR_U32(ctx, 31, 0x2CB844u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB83Cu, 0x2CB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB844u;
label_2cb844:
    // 0x2cb844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb848: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cb848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cb84c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cb84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cb850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb854: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cb854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb85c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cb85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cb860: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb864: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cb864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cb868: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cb868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cb86c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cb86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cb870: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cb874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb878: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cb878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cb87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb880: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb884: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb88c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb894: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb89c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb8a0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb8a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb8ac: 0x0  nop
    ctx->pc = 0x2cb8acu;
    // NOP
    // 0x2cb8b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb8b4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb8b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb8c0: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2CB8C0u;
    {
        const bool branch_taken_0x2cb8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8c0) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CB8C8u;
    // 0x2cb8c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb8d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb8dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb8e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2cb8e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb8e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb8ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB8ECu;
    SET_GPR_U32(ctx, 31, 0x2CB8F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB8ECu, 0x2CB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8F4u;
label_2cb8f4:
    // 0x2cb8f4: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CB8F4u;
    {
        const bool branch_taken_0x2cb8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb8f4) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CB8FCu;
}
