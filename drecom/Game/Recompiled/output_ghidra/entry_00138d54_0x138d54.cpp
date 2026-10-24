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

// Function: entry_00138d54
// Address: 0x138d54 - 0x138e20
void entry_00138d54_0x138d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d54_0x138d54");
#endif

    switch (ctx->pc) {
        case 0x138da0u: goto label_138da0;
        case 0x138dbcu: goto label_138dbc;
        case 0x138dd0u: goto label_138dd0;
        case 0x138de4u: goto label_138de4;
        default: break;
    }

    ctx->pc = 0x138d54u;

    // 0x138d54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138d58: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138d5c: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x138d60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138d64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138d68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138d6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138d70: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138d78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138d7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d80: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138d84: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d88: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138d8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138d90: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138d94: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138d98: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138D98u;
    SET_GPR_U32(ctx, 31, 0x138DA0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138D98u, 0x138DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DA0u;
label_138da0:
    // 0x138da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138da4: 0x0  nop
    ctx->pc = 0x138da4u;
    // NOP
    // 0x138da8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138dac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138db0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138db4: 0xc040c24  jal         func_103090
    ctx->pc = 0x138DB4u;
    SET_GPR_U32(ctx, 31, 0x138DBCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138DBCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138DBCu) { return; }
    ctx->pc = 0x138DBCu;
label_138dbc:
    // 0x138dbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138dc0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138dc4: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138dc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x138DC8u;
    SET_GPR_U32(ctx, 31, 0x138DD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138DD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138DD0u) { return; }
    ctx->pc = 0x138DD0u;
label_138dd0:
    // 0x138dd0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138dd4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138dd8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ddc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138DDCu;
    SET_GPR_U32(ctx, 31, 0x138DE4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138DDCu, 0x138DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138DE4u;
label_138de4:
    // 0x138de4: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138de8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138df0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138df4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x138df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138df8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138dfc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138e04: 0x0  nop
    ctx->pc = 0x138e04u;
    // NOP
    // 0x138e08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x138E08u;
    {
        const bool branch_taken_0x138e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138e08) {
            ctx->pc = 0x138E20u;
            return;
        }
    }
    ctx->pc = 0x138E10u;
    // 0x138e10: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138e14: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e18: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138e1c: 0x0  nop
    ctx->pc = 0x138e1cu;
    // NOP
    ctx->pc = 0x138e20u;
}
