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

// Function: entry_00138f98
// Address: 0x138f98 - 0x139060
void entry_00138f98_0x138f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138f98_0x138f98");
#endif

    switch (ctx->pc) {
        case 0x138fe4u: goto label_138fe4;
        case 0x139000u: goto label_139000;
        case 0x139014u: goto label_139014;
        case 0x139028u: goto label_139028;
        default: break;
    }

    ctx->pc = 0x138f98u;

    // 0x138f98: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138fa0: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x138fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x138fa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138fa8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138fac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138fb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138fb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138fb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138fbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138fc0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138fc4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138fc8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138fcc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138fd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138fd4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138fd8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138fdc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138FDCu;
    SET_GPR_U32(ctx, 31, 0x138FE4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138FDCu, 0x138FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138FE4u;
label_138fe4:
    // 0x138fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138fe8: 0x0  nop
    ctx->pc = 0x138fe8u;
    // NOP
    // 0x138fec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138ff0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ff4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ff8: 0xc040c24  jal         func_103090
    ctx->pc = 0x138FF8u;
    SET_GPR_U32(ctx, 31, 0x139000u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x139000u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139000u) { return; }
    ctx->pc = 0x139000u;
label_139000:
    // 0x139000: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139004: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x139004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139008: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x139008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13900c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13900Cu;
    SET_GPR_U32(ctx, 31, 0x139014u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x139014u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139014u) { return; }
    ctx->pc = 0x139014u;
label_139014:
    // 0x139014: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x139014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x139018: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x139018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13901c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13901cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x139020: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x139020u;
    SET_GPR_U32(ctx, 31, 0x139028u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x139020u, 0x139028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139028u;
label_139028:
    // 0x139028: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x139028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13902c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x13902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139034: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x139034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x139038: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x139038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13903c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x13903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139040: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x139040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139048: 0x0  nop
    ctx->pc = 0x139048u;
    // NOP
    // 0x13904c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13904Cu;
    {
        const bool branch_taken_0x13904c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13904c) {
            ctx->pc = 0x139060u;
            return;
        }
    }
    ctx->pc = 0x139054u;
    // 0x139054: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139058: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x139058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13905c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x13905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->pc = 0x139060u;
}
