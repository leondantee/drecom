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

// Function: Em19_shockwave_move
// Address: 0x2e4720 - 0x2e4c50
void Em19_shockwave_move_0x2e4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_shockwave_move_0x2e4720");
#endif

    switch (ctx->pc) {
        case 0x2e4754u: goto label_2e4754;
        case 0x2e480cu: goto label_2e480c;
        case 0x2e4828u: goto label_2e4828;
        case 0x2e484cu: goto label_2e484c;
        case 0x2e4860u: goto label_2e4860;
        case 0x2e4874u: goto label_2e4874;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48fcu: goto label_2e48fc;
        case 0x2e490cu: goto label_2e490c;
        case 0x2e4998u: goto label_2e4998;
        case 0x2e4a5cu: goto label_2e4a5c;
        case 0x2e4b14u: goto label_2e4b14;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4bc8u: goto label_2e4bc8;
        case 0x2e4bd4u: goto label_2e4bd4;
        case 0x2e4bf0u: goto label_2e4bf0;
        case 0x2e4c04u: goto label_2e4c04;
        default: break;
    }

    ctx->pc = 0x2e4720u;

    // 0x2e4720: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e4724: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2e4724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2e4728: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e4728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e472c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e4730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e473c: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2e473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x2e4740: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2e4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4744: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2e4744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e4748: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e4748u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e474c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2E474Cu;
    {
        const bool branch_taken_0x2e474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e474c) {
            ctx->pc = 0x2E4C20u;
            goto label_2e4c20;
        }
    }
    ctx->pc = 0x2E4754u;
label_2e4754:
    // 0x2e4754: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e4758: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2e4758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e475c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4760: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x2e4760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x2e4764: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e4764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4768: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e4768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e476c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4770: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2E4770u;
    {
        const bool branch_taken_0x2e4770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4770) {
            ctx->pc = 0x2E49F4u;
            goto label_2e49f4;
        }
    }
    ctx->pc = 0x2E4778u;
    // 0x2e4778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e477c: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E477Cu;
    {
        const bool branch_taken_0x2e477c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e477c) {
            ctx->pc = 0x2E4948u;
            goto label_2e4948;
        }
    }
    ctx->pc = 0x2E4784u;
    // 0x2e4784: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4784u;
    {
        const bool branch_taken_0x2e4784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4784) {
            ctx->pc = 0x2E4794u;
            goto label_2e4794;
        }
    }
    ctx->pc = 0x2E478Cu;
    // 0x2e478c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2E478Cu;
    {
        const bool branch_taken_0x2e478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e478c) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E4794u;
label_2e4794:
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
            goto label_2e4c08;
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
            goto label_2e48dc;
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
            goto label_2e48b0;
        }
    }
    ctx->pc = 0x2E48A0u;
    // 0x2e48a0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E48A0u;
    {
        const bool branch_taken_0x2e48a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48a0) {
            ctx->pc = 0x2E4900u;
            goto label_2e4900;
        }
    }
    ctx->pc = 0x2E48A8u;
    // 0x2e48a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E48A8u;
    {
        const bool branch_taken_0x2e48a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48a8) {
            ctx->pc = 0x2E4900u;
            goto label_2e4900;
        }
    }
    ctx->pc = 0x2E48B0u;
label_2e48b0:
    // 0x2e48b0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2e48b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e48b4: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2e48b8: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2e48b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2e48bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e48bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e48c0: 0x0  nop
    ctx->pc = 0x2e48c0u;
    // NOP
    // 0x2e48c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e48c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e48c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E48C8u;
    SET_GPR_U32(ctx, 31, 0x2E48D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E48C8u, 0x2E48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48D0u;
label_2e48d0:
    // 0x2e48d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2e48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2e48d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E48D4u;
    {
        const bool branch_taken_0x2e48d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48d4) {
            ctx->pc = 0x2E4900u;
            goto label_2e4900;
        }
    }
    ctx->pc = 0x2E48DCu;
label_2e48dc:
    // 0x2e48dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2e48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e48e0: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2e48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2e48e4: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2e48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2e48e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e48e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e48ec: 0x0  nop
    ctx->pc = 0x2e48ecu;
    // NOP
    // 0x2e48f0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e48f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e48f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E48F4u;
    SET_GPR_U32(ctx, 31, 0x2E48FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E48F4u, 0x2E48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48FCu;
label_2e48fc:
    // 0x2e48fc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2e48fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_2e4900:
    // 0x2e4900: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x2e4900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x2e4904: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E4904u;
    SET_GPR_U32(ctx, 31, 0x2E490Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E4904u, 0x2E490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E490Cu;
label_2e490c:
    // 0x2e490c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e490cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4910: 0x0  nop
    ctx->pc = 0x2e4910u;
    // NOP
    // 0x2e4914: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4918: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2e4918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2e491c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e491cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4920: 0x0  nop
    ctx->pc = 0x2e4920u;
    // NOP
    // 0x2e4924: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2e4928: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2e4928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e492c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2e492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e4930: 0xa4600086  sh          $zero, 0x86($v1)
    ctx->pc = 0x2e4930u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e4934: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e4934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e4938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e493c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e493cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4940: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2E4940u;
    {
        const bool branch_taken_0x2e4940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4940) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E4948u;
label_2e4948:
    // 0x2e4948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e494c: 0x0  nop
    ctx->pc = 0x2e494cu;
    // NOP
    // 0x2e4950: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e4950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e4954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4958: 0x0  nop
    ctx->pc = 0x2e4958u;
    // NOP
    // 0x2e495c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e4960: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4968: 0x0  nop
    ctx->pc = 0x2e4968u;
    // NOP
    // 0x2e496c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e496cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e4970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4978: 0x0  nop
    ctx->pc = 0x2e4978u;
    // NOP
    // 0x2e497c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e4980: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2e4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4984: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4988: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2e4988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2e498c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4990: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2E4990u;
    SET_GPR_U32(ctx, 31, 0x2E4998u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2E4998u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4998u) { return; }
    ctx->pc = 0x2E4998u;
label_2e4998:
    // 0x2e4998: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e499c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2e49a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49a4: 0x0  nop
    ctx->pc = 0x2e49a4u;
    // NOP
    // 0x2e49a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e49a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e49ac: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e49acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e49b0: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e49b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e49b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49bc: 0x0  nop
    ctx->pc = 0x2e49bcu;
    // NOP
    // 0x2e49c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e49c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e49c4: 0x0  nop
    ctx->pc = 0x2e49c4u;
    // NOP
    // 0x2e49c8: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
    ctx->pc = 0x2E49C8u;
    {
        const bool branch_taken_0x2e49c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e49c8) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E49D0u;
    // 0x2e49d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e49d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e49d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e49d8: 0x0  nop
    ctx->pc = 0x2e49d8u;
    // NOP
    // 0x2e49dc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e49e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e49e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e49e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e49e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e49e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e49ec: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2E49ECu;
    {
        const bool branch_taken_0x2e49ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49ec) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E49F4u;
label_2e49f4:
    // 0x2e49f4: 0x8e1302d0  lw          $s3, 0x2D0($s0)
    ctx->pc = 0x2e49f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2e49f8: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x2e49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49fc: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x2e49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x2e4a00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e4a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a08: 0x0  nop
    ctx->pc = 0x2e4a08u;
    // NOP
    // 0x2e4a0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4a10: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4a14: 0xc621008c  lwc1        $f1, 0x8C($s1)
    ctx->pc = 0x2e4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a20: 0x0  nop
    ctx->pc = 0x2e4a20u;
    // NOP
    // 0x2e4a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4a28: 0x0  nop
    ctx->pc = 0x2e4a28u;
    // NOP
    // 0x2e4a2c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4A2Cu;
    {
        const bool branch_taken_0x2e4a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4a2c) {
            ctx->pc = 0x2E4A48u;
            goto label_2e4a48;
        }
    }
    ctx->pc = 0x2E4A34u;
    // 0x2e4a34: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a3c: 0x0  nop
    ctx->pc = 0x2e4a3cu;
    // NOP
    // 0x2e4a40: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x2e4a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x2e4a44: 0x0  nop
    ctx->pc = 0x2e4a44u;
    // NOP
label_2e4a48:
    // 0x2e4a48: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2e4a48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e4a4c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e4a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e4a50: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x2e4a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4a54: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2E4A54u;
    SET_GPR_U32(ctx, 31, 0x2E4A5Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2E4A5Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4A5Cu) { return; }
    ctx->pc = 0x2E4A5Cu;
label_2e4a5c:
    // 0x2e4a5c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a60: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e4a64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a6c: 0x0  nop
    ctx->pc = 0x2e4a6cu;
    // NOP
    // 0x2e4a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4a74: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e4a78: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a84: 0x0  nop
    ctx->pc = 0x2e4a84u;
    // NOP
    // 0x2e4a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4a8c: 0x0  nop
    ctx->pc = 0x2e4a8cu;
    // NOP
    // 0x2e4a90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4A90u;
    {
        const bool branch_taken_0x2e4a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4a90) {
            ctx->pc = 0x2E4AA8u;
            goto label_2e4aa8;
        }
    }
    ctx->pc = 0x2E4A98u;
    // 0x2e4a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4aa0: 0x0  nop
    ctx->pc = 0x2e4aa0u;
    // NOP
    // 0x2e4aa4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
label_2e4aa8:
    // 0x2e4aa8: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x2e4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4aac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ab4: 0x0  nop
    ctx->pc = 0x2e4ab4u;
    // NOP
    // 0x2e4ab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4abc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2e4ac0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x2e4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4ac4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4acc: 0x0  nop
    ctx->pc = 0x2e4accu;
    // NOP
    // 0x2e4ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4ad4: 0x0  nop
    ctx->pc = 0x2e4ad4u;
    // NOP
    // 0x2e4ad8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4AD8u;
    {
        const bool branch_taken_0x2e4ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4ad8) {
            ctx->pc = 0x2E4AF0u;
            goto label_2e4af0;
        }
    }
    ctx->pc = 0x2E4AE0u;
    // 0x2e4ae0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2e4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2e4ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ae8: 0x0  nop
    ctx->pc = 0x2e4ae8u;
    // NOP
    // 0x2e4aec: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2e4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_2e4af0:
    // 0x2e4af0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e4af4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e4af8: 0x84620086  lh          $v0, 0x86($v1)
    ctx->pc = 0x2e4af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x2e4afc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e4b00: 0xa4620086  sh          $v0, 0x86($v1)
    ctx->pc = 0x2e4b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4b08: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2e4b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4b0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E4B0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E4B14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4B14u) { return; }
    ctx->pc = 0x2E4B14u;
label_2e4b14:
    // 0x2e4b14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2e4b14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e4b18: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E4B18u;
    SET_GPR_U32(ctx, 31, 0x2E4B20u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E4B18u, 0x2E4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B20u;
label_2e4b20:
    // 0x2e4b20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e4b24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4b28: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4b2c: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x2e4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x2e4b30: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2E4B30u;
    SET_GPR_U32(ctx, 31, 0x2E4B38u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2E4B30u, 0x2E4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2e4b38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e4b3c: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4B3Cu;
    {
        const bool branch_taken_0x2e4b3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b3c) {
            ctx->pc = 0x2E4B68u;
            goto label_2e4b68;
        }
    }
    ctx->pc = 0x2E4B44u;
    // 0x2e4b44: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2e4b48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2e4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e4b4c: 0x84630086  lh          $v1, 0x86($v1)
    ctx->pc = 0x2e4b4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x2e4b50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e4b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e4b54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e4b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e4b58: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x2e4b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x2e4b5c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2E4B5Cu;
    {
        const bool branch_taken_0x2e4b5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b5c) {
            ctx->pc = 0x2E4B98u;
            goto label_2e4b98;
        }
    }
    ctx->pc = 0x2E4B64u;
    // 0x2e4b64: 0x0  nop
    ctx->pc = 0x2e4b64u;
    // NOP
label_2e4b68:
    // 0x2e4b68: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2e4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2e4b6c: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x2e4b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e4b74: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x2e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x2e4b78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4b7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e4b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4b84: 0x0  nop
    ctx->pc = 0x2e4b84u;
    // NOP
    // 0x2e4b88: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e4b8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e4b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4B90u;
    {
        const bool branch_taken_0x2e4b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b90) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E4B98u;
label_2e4b98:
    // 0x2e4b98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4b9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4ba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4ba4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e4ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e4ba8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2e4bac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e4bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e4bb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e4bb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4bb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e4bb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e4bb8: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2e4bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e4bbc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e4bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4bc0: 0xc086488  jal         func_219220
    ctx->pc = 0x2E4BC0u;
    SET_GPR_U32(ctx, 31, 0x2E4BC8u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2E4BC0u, 0x2E4BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BC8u;
label_2e4bc8:
    // 0x2e4bc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4bcc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E4BCCu;
    SET_GPR_U32(ctx, 31, 0x2E4BD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E4BCCu, 0x2E4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BD4u;
label_2e4bd4:
    // 0x2e4bd4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4bd8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2e4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2e4bdc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e4be0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2e4be4: 0x24478e38  addiu       $a3, $v0, -0x71C8
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938168));
    // 0x2e4be8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2E4BE8u;
    SET_GPR_U32(ctx, 31, 0x2E4BF0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2E4BE8u, 0x2E4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BF0u;
label_2e4bf0:
    // 0x2e4bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4BF0u;
    {
        const bool branch_taken_0x2e4bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bf0) {
            ctx->pc = 0x2E4C08u;
            goto label_2e4c08;
        }
    }
    ctx->pc = 0x2E4BF8u;
    // 0x2e4bf8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2e4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2e4bfc: 0xc0b8db8  jal         func_2E36E0
    ctx->pc = 0x2E4BFCu;
    SET_GPR_U32(ctx, 31, 0x2E4C04u);
    ctx->pc = 0x2E36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E36E0u, 0x2E4BFCu, 0x2E4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C04u;
label_2e4c04:
    // 0x2e4c04: 0x0  nop
    ctx->pc = 0x2e4c04u;
    // NOP
label_2e4c08:
    // 0x2e4c08: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c0c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2e4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2e4c10: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c14: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2e4c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2e4c18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e4c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e4c1c: 0x0  nop
    ctx->pc = 0x2e4c1cu;
    // NOP
label_2e4c20:
    // 0x2e4c20: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x2e4c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e4c24: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x2E4C24u;
    {
        const bool branch_taken_0x2e4c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c24) {
            ctx->pc = 0x2E4754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4754;
        }
    }
    ctx->pc = 0x2E4C2Cu;
    // 0x2e4c2c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2e4c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4c30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e4c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4c34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4c38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4c44: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2e4c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C50u;
}
