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

// Function: entry_001c87ac
// Address: 0x1c87ac - 0x1c88e0
void entry_001c87ac_0x1c87ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c87ac_0x1c87ac");
#endif

    switch (ctx->pc) {
        case 0x1c87bcu: goto label_1c87bc;
        case 0x1c87ccu: goto label_1c87cc;
        case 0x1c87e4u: goto label_1c87e4;
        case 0x1c87f4u: goto label_1c87f4;
        case 0x1c8830u: goto label_1c8830;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8888u: goto label_1c8888;
        default: break;
    }

    ctx->pc = 0x1c87acu;

    // 0x1c87ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c87b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c87b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C87B4u;
    SET_GPR_U32(ctx, 31, 0x1C87BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C87B4u, 0x1C87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87BCu;
label_1c87bc:
    // 0x1c87bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c87c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c87c4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C87C4u;
    SET_GPR_U32(ctx, 31, 0x1C87CCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C87C4u, 0x1C87CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87CCu;
label_1c87cc:
    // 0x1c87cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c87d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c87d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c87d4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c87d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c87d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c87dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C87DCu;
    SET_GPR_U32(ctx, 31, 0x1C87E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C87DCu, 0x1C87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87E4u;
label_1c87e4:
    // 0x1c87e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c87e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c87e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c87e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c87ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C87ECu;
    SET_GPR_U32(ctx, 31, 0x1C87F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C87ECu, 0x1C87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87F4u;
label_1c87f4:
    // 0x1c87f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c87f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c87fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c8800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8804: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8808: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1c8808u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c880c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1c8810: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1c8814: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c8814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c8818: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c881c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c881cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8820: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1c8820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1c8824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8828: 0xc086488  jal         func_219220
    ctx->pc = 0x1C8828u;
    SET_GPR_U32(ctx, 31, 0x1C8830u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1C8828u, 0x1C8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8830u;
label_1c8830:
    // 0x1c8830: 0xc057808  jal         func_15E020
    ctx->pc = 0x1C8830u;
    SET_GPR_U32(ctx, 31, 0x1C8838u);
    ctx->pc = 0x15E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E020u, 0x1C8830u, 0x1C8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8838u;
label_1c8838:
    // 0x1c8838: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c8838u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c883c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8840: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c8844: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C8844u;
    {
        const bool branch_taken_0x1c8844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8844) {
            ctx->pc = 0x1C88E0u;
            return;
        }
    }
    ctx->pc = 0x1C884Cu;
    // 0x1c884c: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8850: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c8854: 0x11200022  beqz        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C8854u;
    {
        const bool branch_taken_0x1c8854 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8854) {
            ctx->pc = 0x1C88E0u;
            return;
        }
    }
    ctx->pc = 0x1C885Cu;
    // 0x1c885c: 0x8faa0088  lw          $t2, 0x88($sp)
    ctx->pc = 0x1c885cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8860: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8864: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1c8868: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c886c: 0x25450120  addiu       $a1, $t2, 0x120
    ctx->pc = 0x1c886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
    // 0x1c8870: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c8874: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C8874u;
    SET_GPR_U32(ctx, 31, 0x1C887Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C8874u, 0x1C887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C887Cu;
label_1c887c:
    // 0x1c887c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8880: 0xc067588  jal         func_19D620
    ctx->pc = 0x1C8880u;
    SET_GPR_U32(ctx, 31, 0x1C8888u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1C8880u, 0x1C8888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8888u;
label_1c8888:
    // 0x1c8888: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c888c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8890: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c8894: 0xc46111e0  lwc1        $f1, 0x11E0($v1)
    ctx->pc = 0x1c8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8898: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c889c: 0xc46011e0  lwc1        $f0, 0x11E0($v1)
    ctx->pc = 0x1c889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c88a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c88a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c88a4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1c88a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c88a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c88ac: 0x0  nop
    ctx->pc = 0x1c88acu;
    // NOP
    // 0x1c88b0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1c88b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c88b4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c88b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c88b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c88b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c88bc: 0x0  nop
    ctx->pc = 0x1c88bcu;
    // NOP
    // 0x1c88c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C88C0u;
    {
        const bool branch_taken_0x1c88c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c88c0) {
            ctx->pc = 0x1C88E0u;
            return;
        }
    }
    ctx->pc = 0x1C88C8u;
    // 0x1c88c8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c88cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c88ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c88d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c88d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c88d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c88d8: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1C88D8u;
    {
        const bool branch_taken_0x1c88d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88d8) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C88E0u;
}
