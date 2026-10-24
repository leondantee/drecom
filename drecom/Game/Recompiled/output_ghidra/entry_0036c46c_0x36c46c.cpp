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

// Function: entry_0036c46c
// Address: 0x36c46c - 0x36c560
void entry_0036c46c_0x36c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c46c_0x36c46c");
#endif

    switch (ctx->pc) {
        case 0x36c47cu: goto label_36c47c;
        case 0x36c4c8u: goto label_36c4c8;
        case 0x36c4ecu: goto label_36c4ec;
        case 0x36c544u: goto label_36c544;
        case 0x36c558u: goto label_36c558;
        default: break;
    }

    ctx->pc = 0x36c46cu;

    // 0x36c46c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c470: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x36c470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x36c474: 0xc0db498  jal         func_36D260
    ctx->pc = 0x36C474u;
    SET_GPR_U32(ctx, 31, 0x36C47Cu);
    ctx->pc = 0x36D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D260u, 0x36C474u, 0x36C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C47Cu;
label_36c47c:
    // 0x36c47c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x36c47cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36c480: 0x6400059  bltz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x36C480u;
    {
        const bool branch_taken_0x36c480 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x36c480) {
            ctx->pc = 0x36C5E8u;
            return;
        }
    }
    ctx->pc = 0x36C488u;
    // 0x36c488: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c48c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36c490: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x36c490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36c494: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x36c498: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x36c498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36c49c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36c4a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36c4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c4a8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x36c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x36c4ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c4b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36c4b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c4b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c4b8: 0x244504c0  addiu       $a1, $v0, 0x4C0
    ctx->pc = 0x36c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x36c4bc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x36c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36c4c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C4C0u;
    SET_GPR_U32(ctx, 31, 0x36C4C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C4C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C4C8u) { return; }
    ctx->pc = 0x36C4C8u;
label_36c4c8:
    // 0x36c4c8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x36c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x36c4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c4d0: 0x0  nop
    ctx->pc = 0x36c4d0u;
    // NOP
    // 0x36c4d4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x36c4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x36c4d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36c4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c4dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36c4e0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36c4e4: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36C4E4u;
    SET_GPR_U32(ctx, 31, 0x36C4ECu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36C4E4u, 0x36C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4ECu;
label_36c4ec:
    // 0x36c4ec: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36c4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36c4f0: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x36c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36c4f4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x36c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x36c4f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c4fc: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36C4FCu;
    {
        const bool branch_taken_0x36c4fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x36c4fc) {
            ctx->pc = 0x36C560u;
            return;
        }
    }
    ctx->pc = 0x36C504u;
    // 0x36c504: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x36c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36c508: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x36c508u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c50c: 0x0  nop
    ctx->pc = 0x36c50cu;
    // NOP
    // 0x36c510: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36c510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36c514: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36c514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36c518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c51c: 0x0  nop
    ctx->pc = 0x36c51cu;
    // NOP
    // 0x36c520: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36c520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36c524: 0x3c023da0  lui         $v0, 0x3DA0
    ctx->pc = 0x36c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15776 << 16));
    // 0x36c528: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x36c528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x36c52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36c52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36c530: 0x0  nop
    ctx->pc = 0x36c530u;
    // NOP
    // 0x36c534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36c534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36c538: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x36c538u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36c53c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36C53Cu;
    SET_GPR_U32(ctx, 31, 0x36C544u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36C53Cu, 0x36C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C544u;
label_36c544:
    // 0x36c544: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36c544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36c548: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c54c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36c550: 0xc067844  jal         func_19E110
    ctx->pc = 0x36C550u;
    SET_GPR_U32(ctx, 31, 0x36C558u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36C550u, 0x36C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C558u;
label_36c558:
    // 0x36c558: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36C558u;
    {
        const bool branch_taken_0x36c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c558) {
            ctx->pc = 0x36C5B8u;
            return;
        }
    }
    ctx->pc = 0x36C560u;
}
