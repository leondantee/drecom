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

// Function: sqrtf
// Address: 0x1158c0 - 0x1159d4
void sqrtf_0x1158c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sqrtf_0x1158c0");
#endif

    switch (ctx->pc) {
        case 0x1158e4u: goto label_1158e4;
        case 0x1158fcu: goto label_1158fc;
        case 0x115934u: goto label_115934;
        case 0x115970u: goto label_115970;
        case 0x115980u: goto label_115980;
        case 0x11599cu: goto label_11599c;
        case 0x1159acu: goto label_1159ac;
        default: break;
    }

    ctx->pc = 0x1158c0u;

    // 0x1158c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1158c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1158c4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1158c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1158c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1158c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1158cc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1158ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1158d0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1158d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1158d4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1158d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1158d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1158d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1158dc: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x1158DCu;
    SET_GPR_U32(ctx, 31, 0x1158E4u);
    ctx->pc = 0x1158E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158DCu;
    // 0x1158e0: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x1158DCu, 0x1158E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158E4u;
label_1158e4:
    // 0x1158e4: 0x8e30d888  lw          $s0, -0x2778($s1)
    ctx->pc = 0x1158e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957192)));
    // 0x1158e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1158ec: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1158ECu;
    {
        const bool branch_taken_0x1158ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158ECu;
        // 0x1158f0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158ec) {
            ctx->pc = 0x1159B4u;
            goto label_1159b4;
        }
    }
    ctx->pc = 0x1158F4u;
    // 0x1158f4: 0xc045462  jal         func_115188
    ctx->pc = 0x1158F4u;
    SET_GPR_U32(ctx, 31, 0x1158FCu);
    ctx->pc = 0x1158F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158F4u;
    // 0x1158f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115188u, 0x1158F4u, 0x1158FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158FCu;
label_1158fc:
    // 0x1158fc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1158FCu;
    {
        const bool branch_taken_0x1158fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158FCu;
        // 0x115900: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158fc) {
            ctx->pc = 0x1159B8u;
            goto label_1159b8;
        }
    }
    ctx->pc = 0x115904u;
    // 0x115904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x115904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115908: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x115908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11590c: 0x0  nop
    ctx->pc = 0x11590cu;
    // NOP
    // 0x115910: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x115910u;
    {
        const bool branch_taken_0x115910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x115914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115910u;
        // 0x115914: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115910) {
            ctx->pc = 0x1159B4u;
            goto label_1159b4;
        }
    }
    ctx->pc = 0x115918u;
    // 0x115918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11591c: 0x2442d940  addiu       $v0, $v0, -0x26C0
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x115920: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x115920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x115924: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x115924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x115928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x115928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11592c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x11592Cu;
    SET_GPR_U32(ctx, 31, 0x115934u);
    ctx->pc = 0x115930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11592Cu;
    // 0x115930: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x11592Cu, 0x115934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115934u;
label_115934:
    // 0x115934: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x115934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x115938: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115938u;
    {
        const bool branch_taken_0x115938 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115938u;
        // 0x11593c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115938) {
            ctx->pc = 0x11594Cu;
            goto label_11594c;
        }
    }
    ctx->pc = 0x115940u;
    // 0x115940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115944u;
    {
        const bool branch_taken_0x115944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115944) {
            ctx->pc = 0x115958u;
            goto label_115958;
        }
    }
    ctx->pc = 0x11594Cu;
label_11594c:
    // 0x11594c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115950: 0xdc43d948  ld          $v1, -0x26B8($v0)
    ctx->pc = 0x115950u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AD948u));
    // 0x115954: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x115954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_115958:
    // 0x115958: 0x8e23d888  lw          $v1, -0x2778($s1)
    ctx->pc = 0x115958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957192)));
    // 0x11595c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115960: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115960u;
    {
        const bool branch_taken_0x115960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x115960) {
            ctx->pc = 0x115978u;
            goto label_115978;
        }
    }
    ctx->pc = 0x115968u;
    // 0x115968: 0xc04527a  jal         func_1149E8
    ctx->pc = 0x115968u;
    SET_GPR_U32(ctx, 31, 0x115970u);
    ctx->pc = 0x11596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115968u;
    // 0x11596c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1149E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1149E8u, 0x115968u, 0x115970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115970u;
label_115970:
    // 0x115970: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115970u;
    {
        const bool branch_taken_0x115970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115970u;
        // 0x115974: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115970) {
            ctx->pc = 0x11598Cu;
            goto label_11598c;
        }
    }
    ctx->pc = 0x115978u;
label_115978:
    // 0x115978: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115978u;
    SET_GPR_U32(ctx, 31, 0x115980u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115978u, 0x115980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115980u;
label_115980:
    // 0x115980: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x115984: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x115988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11598c:
    // 0x11598c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11598c) {
            ctx->pc = 0x1159A4u;
            goto label_1159a4;
        }
    }
    ctx->pc = 0x115994u;
    // 0x115994: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x115994u;
    SET_GPR_U32(ctx, 31, 0x11599Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x115994u, 0x11599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11599Cu;
label_11599c:
    // 0x11599c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1159a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1159a4:
    // 0x1159a4: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1159A4u;
    SET_GPR_U32(ctx, 31, 0x1159ACu);
    ctx->pc = 0x1159A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159A4u;
    // 0x1159a8: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1159A4u, 0x1159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159ACu;
label_1159ac:
    // 0x1159ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1159ACu;
    {
        const bool branch_taken_0x1159ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159ACu;
        // 0x1159b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159ac) {
            ctx->pc = 0x1159BCu;
            goto label_1159bc;
        }
    }
    ctx->pc = 0x1159B4u;
label_1159b4:
    // 0x1159b4: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1159b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1159b8:
    // 0x1159b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1159b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1159bc:
    // 0x1159bc: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1159bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1159c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1159c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1159c4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1159c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1159c8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1159c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1159cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1159CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159CCu;
        // 0x1159d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1159CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1159D4u;
}
