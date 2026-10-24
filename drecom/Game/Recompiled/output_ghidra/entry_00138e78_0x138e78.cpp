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

// Function: entry_00138e78
// Address: 0x138e78 - 0x138f40
void entry_00138e78_0x138e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e78_0x138e78");
#endif

    switch (ctx->pc) {
        case 0x138ec4u: goto label_138ec4;
        case 0x138ee0u: goto label_138ee0;
        case 0x138ef4u: goto label_138ef4;
        case 0x138f08u: goto label_138f08;
        default: break;
    }

    ctx->pc = 0x138e78u;

    // 0x138e78: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138e7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138e80: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138e84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138e88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138e8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138e90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138e94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138e98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138e9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138ea0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138ea4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138ea8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138eac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x138eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138eb0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138eb4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138eb8: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x138ebc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x138EBCu;
    SET_GPR_U32(ctx, 31, 0x138EC4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x138EBCu, 0x138EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138EC4u;
label_138ec4:
    // 0x138ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138ec8: 0x0  nop
    ctx->pc = 0x138ec8u;
    // NOP
    // 0x138ecc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x138eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x138ed0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ed4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ed8: 0xc040c24  jal         func_103090
    ctx->pc = 0x138ED8u;
    SET_GPR_U32(ctx, 31, 0x138EE0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138EE0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138EE0u) { return; }
    ctx->pc = 0x138EE0u;
label_138ee0:
    // 0x138ee0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x138ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ee4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x138ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138ee8: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138eec: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x138EECu;
    SET_GPR_U32(ctx, 31, 0x138EF4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138EF4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138EF4u) { return; }
    ctx->pc = 0x138EF4u;
label_138ef4:
    // 0x138ef4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138ef8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138efc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138f00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138F00u;
    SET_GPR_U32(ctx, 31, 0x138F08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138F00u, 0x138F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138F08u;
label_138f08:
    // 0x138f08: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138f0c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138f14: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138f18: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x138f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138f1c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138f28: 0x0  nop
    ctx->pc = 0x138f28u;
    // NOP
    // 0x138f2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x138F2Cu;
    {
        const bool branch_taken_0x138f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138f2c) {
            ctx->pc = 0x138F40u;
            return;
        }
    }
    ctx->pc = 0x138F34u;
    // 0x138f34: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138f38: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f3c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->pc = 0x138f40u;
}
