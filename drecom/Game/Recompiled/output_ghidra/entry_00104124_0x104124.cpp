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

// Function: entry_00104124
// Address: 0x104124 - 0x1041a4
void entry_00104124_0x104124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104124_0x104124");
#endif

    switch (ctx->pc) {
        case 0x104164u: goto label_104164;
        case 0x10419cu: goto label_10419c;
        default: break;
    }

    ctx->pc = 0x104124u;

    // 0x104124: 0x1677001f  bne         $s3, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x104124u;
    {
        const bool branch_taken_0x104124 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x104128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104124u;
        // 0x104128: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104124) {
            ctx->pc = 0x1041A4u;
            return;
        }
    }
    ctx->pc = 0x10412Cu;
    // 0x10412c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104130: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x104130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x104134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104138: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104138u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10413c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10413cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104140: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104148: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10414c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10414cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104150: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x104150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x104154: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104158: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10415c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10415Cu;
    SET_GPR_U32(ctx, 31, 0x104164u);
    ctx->pc = 0x104160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10415Cu;
    // 0x104160: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10415Cu, 0x104164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104164u;
label_104164:
    // 0x104164: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x104168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10416c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x104170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104174: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x104174u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104178: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10417c: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104180: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104188: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10418c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x10418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x104190: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104194: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104194u;
    SET_GPR_U32(ctx, 31, 0x10419Cu);
    ctx->pc = 0x104198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104194u;
    // 0x104198: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104194u, 0x10419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10419Cu;
label_10419c:
    // 0x10419c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x10419Cu;
    {
        const bool branch_taken_0x10419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10419Cu;
        // 0x1041a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10419c) {
            ctx->pc = 0x1044F0u;
            return;
        }
    }
    ctx->pc = 0x1041A4u;
}
