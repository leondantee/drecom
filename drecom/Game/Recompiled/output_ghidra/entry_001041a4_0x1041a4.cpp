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

// Function: entry_001041a4
// Address: 0x1041a4 - 0x10429c
void entry_001041a4_0x1041a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001041a4_0x1041a4");
#endif

    switch (ctx->pc) {
        case 0x1041c8u: goto label_1041c8;
        case 0x104200u: goto label_104200;
        case 0x104234u: goto label_104234;
        case 0x10426cu: goto label_10426c;
        default: break;
    }

    ctx->pc = 0x1041a4u;

    // 0x1041a4: 0x1666003d  bne         $s3, $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1041A4u;
    {
        const bool branch_taken_0x1041a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x1041A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A4u;
        // 0x1041a8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041a4) {
            ctx->pc = 0x10429Cu;
            return;
        }
    }
    ctx->pc = 0x1041ACu;
    // 0x1041ac: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1041b0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041b4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1041b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1041b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1041bc: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1041bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1041c0: 0xc041730  jal         func_105CC0
    ctx->pc = 0x1041C0u;
    SET_GPR_U32(ctx, 31, 0x1041C8u);
    ctx->pc = 0x1041C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041C0u;
    // 0x1041c4: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CC0u, 0x1041C0u, 0x1041C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041C8u;
label_1041c8:
    // 0x1041c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1041c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1041cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041d0: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1041d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1041d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1041d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1041dc: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x1041dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x1041e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1041e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1041e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1041e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041e8: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1041e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1041ec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1041f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1041f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1041f4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1041f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041f8: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1041F8u;
    SET_GPR_U32(ctx, 31, 0x104200u);
    ctx->pc = 0x1041FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F8u;
    // 0x1041fc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1041F8u, 0x104200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104200u;
label_104200:
    // 0x104200: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x104200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x104204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104208: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x10420c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104210: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x104210u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104218: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10421c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10421cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104220: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104224: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104228: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x104228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x10422c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10422Cu;
    SET_GPR_U32(ctx, 31, 0x104234u);
    ctx->pc = 0x104230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10422Cu;
    // 0x104230: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10422Cu, 0x104234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104234u;
label_104234:
    // 0x104234: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104238: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10423c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x10423cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104244: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104248: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x10424c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104254: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104258: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10425c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10425cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104260: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104264: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104264u;
    SET_GPR_U32(ctx, 31, 0x10426Cu);
    ctx->pc = 0x104268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104264u;
    // 0x104268: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104264u, 0x10426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x10426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104274: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104278: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10427c: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104284: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104288: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10428c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x10428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x104290: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104294: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x104294u;
    {
        const bool branch_taken_0x104294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104294) {
            ctx->pc = 0x1044D0u;
            return;
        }
    }
    ctx->pc = 0x10429Cu;
}
