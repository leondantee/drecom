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

// Function: entry_00138504
// Address: 0x138504 - 0x1385e0
void entry_00138504_0x138504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138504_0x138504");
#endif

    switch (ctx->pc) {
        case 0x13854cu: goto label_13854c;
        case 0x138564u: goto label_138564;
        case 0x138580u: goto label_138580;
        case 0x138594u: goto label_138594;
        case 0x1385a8u: goto label_1385a8;
        default: break;
    }

    ctx->pc = 0x138504u;

    // 0x138504: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138508: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13850c: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x138510: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138514: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x138518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13851c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138520: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x138524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13852c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138530: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x138534: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x138534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138538: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13853c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x13853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138540: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x138540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x138544: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138544u;
    SET_GPR_U32(ctx, 31, 0x13854Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138544u, 0x13854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13854Cu;
label_13854c:
    // 0x13854c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138550: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138554: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138558: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x13855c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x13855Cu, 0x138564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138564u;
label_138564:
    // 0x138564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138568: 0x0  nop
    ctx->pc = 0x138568u;
    // NOP
    // 0x13856c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x13856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x138570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138578: 0xc040c24  jal         func_103090
    ctx->pc = 0x138578u;
    SET_GPR_U32(ctx, 31, 0x138580u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x138580u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138580u) { return; }
    ctx->pc = 0x138580u;
label_138580:
    // 0x138580: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138584: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x138584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138588: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x138588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13858c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13858Cu;
    SET_GPR_U32(ctx, 31, 0x138594u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138594u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138594u) { return; }
    ctx->pc = 0x138594u;
label_138594:
    // 0x138594: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138598: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x138598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13859c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1385a0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1385A0u;
    SET_GPR_U32(ctx, 31, 0x1385A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1385A0u, 0x1385A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1385A8u;
label_1385a8:
    // 0x1385a8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1385ac: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1385acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1385b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1385b4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1385b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1385b8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x1385b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1385bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1385c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1385c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1385c8: 0x0  nop
    ctx->pc = 0x1385c8u;
    // NOP
    // 0x1385cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1385CCu;
    {
        const bool branch_taken_0x1385cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1385cc) {
            ctx->pc = 0x1385E0u;
            return;
        }
    }
    ctx->pc = 0x1385D4u;
    // 0x1385d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1385d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1385d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385dc: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1385dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->pc = 0x1385e0u;
}
