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

// Function: floorf
// Address: 0x1150a0 - 0x115184
void floorf_0x1150a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("floorf_0x1150a0");
#endif

    switch (ctx->pc) {
        case 0x115120u: goto label_115120;
        default: break;
    }

    ctx->pc = 0x1150a0u;

    // 0x1150a0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1150a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1150a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1150a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150a8: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x1150a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x1150ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1150acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1150b0: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1150b4: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x1150b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1150b8: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1150B8u;
    {
        const bool branch_taken_0x1150b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1150b8) {
            ctx->pc = 0x1150BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1150B8u;
            // 0x1150bc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115168u;
            goto label_115168;
        }
    }
    ctx->pc = 0x1150C0u;
    // 0x1150c0: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1150C0u;
    {
        const bool branch_taken_0x1150c0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1150c0) {
            ctx->pc = 0x1150C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1150C0u;
            // 0x1150c4: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11510Cu;
            goto label_11510c;
        }
    }
    ctx->pc = 0x1150C8u;
    // 0x1150c8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1150c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1150cc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1150ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1150d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1150d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1150d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1150d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1150d8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1150d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1150dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1150dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1150e0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1150E0u;
    {
        const bool branch_taken_0x1150e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1150e0) {
            ctx->pc = 0x115178u;
            goto label_115178;
        }
    }
    ctx->pc = 0x1150E8u;
    // 0x1150e8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1150E8u;
    {
        const bool branch_taken_0x1150e8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1150ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150E8u;
        // 0x1150ec: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150e8) {
            ctx->pc = 0x1150F8u;
            goto label_1150f8;
        }
    }
    ctx->pc = 0x1150F0u;
    // 0x1150f0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1150F0u;
    {
        const bool branch_taken_0x1150f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150F0u;
        // 0x1150f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f0) {
            ctx->pc = 0x115178u;
            goto label_115178;
        }
    }
    ctx->pc = 0x1150F8u;
label_1150f8:
    // 0x1150f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1150f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1150fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1150fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115100: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x115104: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x115104u;
    {
        const bool branch_taken_0x115104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115104u;
        // 0x115108: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115104) {
            ctx->pc = 0x115178u;
            goto label_115178;
        }
    }
    ctx->pc = 0x11510Cu;
label_11510c:
    // 0x11510c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115110: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x115110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x115114: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x115114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x115118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115118u;
    {
        const bool branch_taken_0x115118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115118) {
            ctx->pc = 0x115128u;
            goto label_115128;
        }
    }
    ctx->pc = 0x115120u;
label_115120:
    // 0x115120: 0x3e00008  jr          $ra
    ctx->pc = 0x115120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115120u;
        // 0x115124: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115128u;
label_115128:
    // 0x115128: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11512c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11512cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x115130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115134: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x115134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115138: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x115138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11513c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11513cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x115140: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x115140) {
            ctx->pc = 0x115178u;
            goto label_115178;
        }
    }
    ctx->pc = 0x115148u;
    // 0x115148: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115148u;
    {
        const bool branch_taken_0x115148 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115148u;
        // 0x11514c: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115148) {
            ctx->pc = 0x115160u;
            goto label_115160;
        }
    }
    ctx->pc = 0x115150u;
    // 0x115150: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x115154: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x115154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x115158: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11515c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_115160:
    // 0x115160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115160u;
    {
        const bool branch_taken_0x115160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115160u;
        // 0x115164: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115160) {
            ctx->pc = 0x115178u;
            goto label_115178;
        }
    }
    ctx->pc = 0x115168u;
label_115168:
    // 0x115168: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x115168u;
    {
        const bool branch_taken_0x115168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x115168) {
            ctx->pc = 0x115120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115120;
        }
    }
    ctx->pc = 0x115170u;
    // 0x115170: 0x3e00008  jr          $ra
    ctx->pc = 0x115170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115170u;
        // 0x115174: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115178u;
label_115178:
    // 0x115178: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x115178u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11517c: 0x3e00008  jr          $ra
    ctx->pc = 0x11517Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11517Cu;
        // 0x115180: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11517Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115184u;
}
