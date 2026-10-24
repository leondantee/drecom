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

// Function: Om09_R1_mv00
// Address: 0x37c7b0 - 0x37c8b4
void Om09_R1_mv00_0x37c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om09_R1_mv00_0x37c7b0");
#endif

    switch (ctx->pc) {
        case 0x37c860u: goto label_37c860;
        case 0x37c86cu: goto label_37c86c;
        case 0x37c8a4u: goto label_37c8a4;
        default: break;
    }

    ctx->pc = 0x37c7b0u;

    // 0x37c7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c7b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x37c7b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x37c7bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c7c0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37c7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x37c7c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x37c7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37c7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c7cc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x37C7CCu;
    {
        const bool branch_taken_0x37c7cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c7cc) {
            ctx->pc = 0x37C814u;
            goto label_37c814;
        }
    }
    ctx->pc = 0x37C7D4u;
    // 0x37c7d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C7D4u;
    {
        const bool branch_taken_0x37c7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c7d4) {
            ctx->pc = 0x37C7E4u;
            goto label_37c7e4;
        }
    }
    ctx->pc = 0x37C7DCu;
    // 0x37c7dc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x37C7DCu;
    {
        const bool branch_taken_0x37c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c7dc) {
            ctx->pc = 0x37C8A4u;
            goto label_37c8a4;
        }
    }
    ctx->pc = 0x37C7E4u;
label_37c7e4:
    // 0x37c7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c7e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37c7ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37c7f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x37c7f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x37c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x37c7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c7fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c800: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x37c800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x37c804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c808: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x37c808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x37c80c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c810: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x37c810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_37c814:
    // 0x37c814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c818: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x37c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c81c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37c820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c824: 0x0  nop
    ctx->pc = 0x37c824u;
    // NOP
    // 0x37c828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37c828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c82c: 0x0  nop
    ctx->pc = 0x37c82cu;
    // NOP
    // 0x37c830: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x37C830u;
    {
        const bool branch_taken_0x37c830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c830) {
            ctx->pc = 0x37C854u;
            goto label_37c854;
        }
    }
    ctx->pc = 0x37C838u;
    // 0x37c838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c83c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x37c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c840: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x37c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x37c844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c848: 0x0  nop
    ctx->pc = 0x37c848u;
    // NOP
    // 0x37c84c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c850: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x37c850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_37c854:
    // 0x37c854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c858: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x37C858u;
    SET_GPR_U32(ctx, 31, 0x37C860u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x37C858u, 0x37C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C860u;
label_37c860:
    // 0x37c860: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c864: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x37C864u;
    SET_GPR_U32(ctx, 31, 0x37C86Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x37C864u, 0x37C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C86Cu;
label_37c86c:
    // 0x37c86c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x37c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x37c870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c874: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37c874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37c878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37c878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37c87c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x37c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x37c880: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x37c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x37c884: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37c884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x37c888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c88c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x37c88cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37c890: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x37c890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37c894: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x37c894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37c898: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37c898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c89c: 0xc086488  jal         func_219220
    ctx->pc = 0x37C89Cu;
    SET_GPR_U32(ctx, 31, 0x37C8A4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x37C89Cu, 0x37C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8A4u;
label_37c8a4:
    // 0x37c8a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37c8a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c8a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37c8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x37C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C8B4u;
}
