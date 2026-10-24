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

// Function: entry_002e4794
// Address: 0x2e4794 - 0x2e48b0
void entry_002e4794_0x2e4794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4794_0x2e4794");
#endif

    switch (ctx->pc) {
        case 0x2e480cu: goto label_2e480c;
        case 0x2e4828u: goto label_2e4828;
        case 0x2e484cu: goto label_2e484c;
        case 0x2e4860u: goto label_2e4860;
        case 0x2e4874u: goto label_2e4874;
        default: break;
    }

    ctx->pc = 0x2e4794u;

    // 0x2e4794: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2e4794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2e4798: 0x90630083  lbu         $v1, 0x83($v1)
    ctx->pc = 0x2e4798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 131)));
    // 0x2e479c: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x2E479Cu;
    {
        const bool branch_taken_0x2e479c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e479c) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E47A4u;
    // 0x2e47a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e47a8: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x2e47a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x2e47ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e47acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e47b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e47b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e47b4: 0x0  nop
    ctx->pc = 0x2e47b4u;
    // NOP
    // 0x2e47b8: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e47b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e47bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e47bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e47c0: 0x0  nop
    ctx->pc = 0x2e47c0u;
    // NOP
    // 0x2e47c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e47c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e47c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e47c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e47cc: 0x0  nop
    ctx->pc = 0x2e47ccu;
    // NOP
    // 0x2e47d0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e47d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e47d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e47d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e47d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e47dc: 0x0  nop
    ctx->pc = 0x2e47dcu;
    // NOP
    // 0x2e47e0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e47e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e47e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e47e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e47e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e47ec: 0x0  nop
    ctx->pc = 0x2e47ecu;
    // NOP
    // 0x2e47f0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e47f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e47f4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2e47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e47f8: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x2e47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e47fc: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e47fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e4800: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e4800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4804: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E4804u;
    SET_GPR_U32(ctx, 31, 0x2E480Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E480Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E480Cu) { return; }
    ctx->pc = 0x2E480Cu;
label_2e480c:
    // 0x2e480c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e4810: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2e4810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2e4814: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4818: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2e4818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e481c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2e481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4820: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2E4820u;
    SET_GPR_U32(ctx, 31, 0x2E4828u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2E4820u, 0x2E4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4828u;
label_2e4828:
    // 0x2e4828: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2e4828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e482c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4830: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2e4830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4834: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2e4834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4838: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2e4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e483c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e483cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4840: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2e4840u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e4844: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x2E4844u;
    SET_GPR_U32(ctx, 31, 0x2E484Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x2E4844u, 0x2E484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E484Cu;
label_2e484c:
    // 0x2e484c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2e484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2e4850: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x2e4850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4854: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x2e4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4858: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2E4858u;
    SET_GPR_U32(ctx, 31, 0x2E4860u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2E4858u, 0x2E4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4860u;
label_2e4860:
    // 0x2e4860: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2e4860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2e4864: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2e4864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4868: 0xc7ad008c  lwc1        $f13, 0x8C($sp)
    ctx->pc = 0x2e4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e486c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2E486Cu;
    SET_GPR_U32(ctx, 31, 0x2E4874u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2E486Cu, 0x2E4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4874u;
label_2e4874:
    // 0x2e4874: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e4874u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e4878: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x2e4878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2e487c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e487cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4880: 0x0  nop
    ctx->pc = 0x2e4880u;
    // NOP
    // 0x2e4884: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x2e4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x2e4888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e488c: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E488Cu;
    {
        const bool branch_taken_0x2e488c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e488c) {
            ctx->pc = 0x2E48DCu;
            return;
        }
    }
    ctx->pc = 0x2E4894u;
    // 0x2e4894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4898: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4898u;
    {
        const bool branch_taken_0x2e4898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e4898) {
            ctx->pc = 0x2E48B0u;
            return;
        }
    }
    ctx->pc = 0x2E48A0u;
    // 0x2e48a0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E48A0u;
    {
        const bool branch_taken_0x2e48a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48a0) {
            ctx->pc = 0x2E4900u;
            return;
        }
    }
    ctx->pc = 0x2E48A8u;
    // 0x2e48a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E48A8u;
    {
        const bool branch_taken_0x2e48a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48a8) {
            ctx->pc = 0x2E4900u;
            return;
        }
    }
    ctx->pc = 0x2E48B0u;
}
