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

// Function: entry_00138730
// Address: 0x138730 - 0x138810
void entry_00138730_0x138730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138730_0x138730");
#endif

    switch (ctx->pc) {
        case 0x138778u: goto label_138778;
        case 0x138790u: goto label_138790;
        case 0x1387acu: goto label_1387ac;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387d4u: goto label_1387d4;
        default: break;
    }

    ctx->pc = 0x138730u;

    // 0x138730: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138734: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138738: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x13873c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138740: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138744: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138748: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13874c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138754: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138758: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13875c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x13875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138760: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138764: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138768: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13876c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138770: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138770u;
    SET_GPR_U32(ctx, 31, 0x138778u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138770u, 0x138778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138778u;
label_138778:
    // 0x138778: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13877c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138780: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138784: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138788: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138788u;
    SET_GPR_U32(ctx, 31, 0x138790u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138788u, 0x138790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138790u;
label_138790:
    // 0x138790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138794: 0x0  nop
    ctx->pc = 0x138794u;
    // NOP
    // 0x138798: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x138798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x13879c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387a0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387a4: 0xc040c24  jal         func_103090
    ctx->pc = 0x1387A4u;
    SET_GPR_U32(ctx, 31, 0x1387ACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1387ACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1387ACu) { return; }
    ctx->pc = 0x1387ACu;
label_1387ac:
    // 0x1387ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387b0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387b4: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x1387b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1387b8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1387B8u;
    SET_GPR_U32(ctx, 31, 0x1387C0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1387C0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1387C0u) { return; }
    ctx->pc = 0x1387C0u;
label_1387c0:
    // 0x1387c0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1387c4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1387c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1387c8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1387cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1387CCu;
    SET_GPR_U32(ctx, 31, 0x1387D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1387CCu, 0x1387D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387D4u;
label_1387d4:
    // 0x1387d4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1387d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1387d8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1387d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1387dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1387e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1387e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1387e4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1387e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1387e8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1387ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1387ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1387f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1387f4: 0x0  nop
    ctx->pc = 0x1387f4u;
    // NOP
    // 0x1387f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1387F8u;
    {
        const bool branch_taken_0x1387f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1387f8) {
            ctx->pc = 0x138810u;
            return;
        }
    }
    ctx->pc = 0x138800u;
    // 0x138800: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x138800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138804: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x138804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138808: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x13880c: 0x0  nop
    ctx->pc = 0x13880cu;
    // NOP
    ctx->pc = 0x138810u;
}
