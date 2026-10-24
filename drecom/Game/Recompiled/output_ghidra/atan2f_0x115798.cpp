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

// Function: atan2f
// Address: 0x115798 - 0x1158c0
void atan2f_0x115798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atan2f_0x115798");
#endif

    switch (ctx->pc) {
        case 0x1157bcu: goto label_1157bc;
        case 0x1157d8u: goto label_1157d8;
        case 0x1157e8u: goto label_1157e8;
        case 0x11581cu: goto label_11581c;
        case 0x115828u: goto label_115828;
        case 0x11585cu: goto label_11585c;
        case 0x11586cu: goto label_11586c;
        case 0x115888u: goto label_115888;
        case 0x115898u: goto label_115898;
        default: break;
    }

    ctx->pc = 0x115798u;

    // 0x115798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x115798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11579c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11579cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1157a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1157a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1157a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1157a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1157a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1157a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1157ac: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1157acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1157b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1157b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1157b4: 0xc04480c  jal         func_112030
    ctx->pc = 0x1157B4u;
    SET_GPR_U32(ctx, 31, 0x1157BCu);
    ctx->pc = 0x1157B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157B4u;
    // 0x1157b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112030u, 0x1157B4u, 0x1157BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157BCu;
label_1157bc:
    // 0x1157bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1157c0: 0x8c50d888  lw          $s0, -0x2778($v0)
    ctx->pc = 0x1157c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3AD888u));
    // 0x1157c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1157c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1157c8: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1157C8u;
    {
        const bool branch_taken_0x1157c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1157CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157C8u;
        // 0x1157cc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157c8) {
            ctx->pc = 0x1158A0u;
            goto label_1158a0;
        }
    }
    ctx->pc = 0x1157D0u;
    // 0x1157d0: 0xc045462  jal         func_115188
    ctx->pc = 0x1157D0u;
    SET_GPR_U32(ctx, 31, 0x1157D8u);
    ctx->pc = 0x1157D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157D0u;
    // 0x1157d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115188u, 0x1157D0u, 0x1157D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157D8u;
label_1157d8:
    // 0x1157d8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1157D8u;
    {
        const bool branch_taken_0x1157d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1157DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157D8u;
        // 0x1157dc: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157d8) {
            ctx->pc = 0x1158A4u;
            goto label_1158a4;
        }
    }
    ctx->pc = 0x1157E0u;
    // 0x1157e0: 0xc045462  jal         func_115188
    ctx->pc = 0x1157E0u;
    SET_GPR_U32(ctx, 31, 0x1157E8u);
    ctx->pc = 0x1157E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1157E0u;
    // 0x1157e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115188u, 0x1157E0u, 0x1157E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1157E8u;
label_1157e8:
    // 0x1157e8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1157ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E8u;
        // 0x1157ec: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x1158A4u;
            goto label_1158a4;
        }
    }
    ctx->pc = 0x1157F0u;
    // 0x1157f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1157f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1157f4: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1157f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1157f8: 0x0  nop
    ctx->pc = 0x1157f8u;
    // NOP
    // 0x1157fc: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x1157FCu;
    {
        const bool branch_taken_0x1157fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1157fc) {
            ctx->pc = 0x115800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1157FCu;
            // 0x115800: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1158A4u;
            goto label_1158a4;
        }
    }
    ctx->pc = 0x115804u;
    // 0x115804: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x115804u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115808: 0x0  nop
    ctx->pc = 0x115808u;
    // NOP
    // 0x11580c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x11580Cu;
    {
        const bool branch_taken_0x11580c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11580Cu;
        // 0x115810: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11580c) {
            ctx->pc = 0x1158A4u;
            goto label_1158a4;
        }
    }
    ctx->pc = 0x115814u;
    // 0x115814: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x115814u;
    SET_GPR_U32(ctx, 31, 0x11581Cu);
    ctx->pc = 0x115818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115814u;
    // 0x115818: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x115814u, 0x11581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11581Cu;
label_11581c:
    // 0x11581c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11581cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x115820: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x115820u;
    SET_GPR_U32(ctx, 31, 0x115828u);
    ctx->pc = 0x115824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115820u;
    // 0x115824: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x115820u, 0x115828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115828u;
label_115828:
    // 0x115828: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x115828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x11582c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x11582cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x115830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115838: 0x2463d938  addiu       $v1, $v1, -0x26C8
    ctx->pc = 0x115838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957368));
    // 0x11583c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x11583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x115840: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x115840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115848: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x115848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11584c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11584Cu;
    {
        const bool branch_taken_0x11584c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11584c) {
            ctx->pc = 0x115864u;
            goto label_115864;
        }
    }
    ctx->pc = 0x115854u;
    // 0x115854: 0xc04527a  jal         func_1149E8
    ctx->pc = 0x115854u;
    SET_GPR_U32(ctx, 31, 0x11585Cu);
    ctx->pc = 0x115858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115854u;
    // 0x115858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149E8u, 0x115854u, 0x11585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11585Cu;
label_11585c:
    // 0x11585c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11585Cu;
    {
        const bool branch_taken_0x11585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11585Cu;
        // 0x115860: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11585c) {
            ctx->pc = 0x115878u;
            goto label_115878;
        }
    }
    ctx->pc = 0x115864u;
label_115864:
    // 0x115864: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115864u;
    SET_GPR_U32(ctx, 31, 0x11586Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115864u, 0x11586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11586Cu;
label_11586c:
    // 0x11586c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x11586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x115874: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_115878:
    // 0x115878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115878u;
    {
        const bool branch_taken_0x115878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115878) {
            ctx->pc = 0x115890u;
            goto label_115890;
        }
    }
    ctx->pc = 0x115880u;
    // 0x115880: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115880u;
    SET_GPR_U32(ctx, 31, 0x115888u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115880u, 0x115888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115888u;
label_115888:
    // 0x115888: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11588c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11588cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_115890:
    // 0x115890: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x115890u;
    SET_GPR_U32(ctx, 31, 0x115898u);
    ctx->pc = 0x115894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115890u;
    // 0x115894: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x115890u, 0x115898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115898u;
label_115898:
    // 0x115898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115898u;
        // 0x11589c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115898) {
            ctx->pc = 0x1158A8u;
            goto label_1158a8;
        }
    }
    ctx->pc = 0x1158A0u;
label_1158a0:
    // 0x1158a0: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x1158a0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_1158a4:
    // 0x1158a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1158a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1158a8:
    // 0x1158a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1158a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1158ac: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1158acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1158b0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1158b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1158b4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1158b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1158b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1158B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1158BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158B8u;
        // 0x1158bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1158B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1158C0u;
}
