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

// Function: entry_00104428
// Address: 0x104428 - 0x1044c4
void entry_00104428_0x104428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104428_0x104428");
#endif

    switch (ctx->pc) {
        case 0x104454u: goto label_104454;
        case 0x104494u: goto label_104494;
        default: break;
    }

    ctx->pc = 0x104428u;

    // 0x104428: 0x1662002d  bne         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x104428u;
    {
        const bool branch_taken_0x104428 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x10442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104428u;
        // 0x10442c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104428) {
            ctx->pc = 0x1044E0u;
            return;
        }
    }
    ctx->pc = 0x104430u;
    // 0x104430: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104434: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x104434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104438: 0x8c433d1c  lw          $v1, 0x3D1C($v0)
    ctx->pc = 0x104438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x10443c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x10443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104440: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x104440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104444: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x104444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x104448: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10444c: 0xc041730  jal         func_105CC0
    ctx->pc = 0x10444Cu;
    SET_GPR_U32(ctx, 31, 0x104454u);
    ctx->pc = 0x104450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10444Cu;
    // 0x104450: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CC0u, 0x10444Cu, 0x104454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104454u;
label_104454:
    // 0x104454: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104458: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x104458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x10445c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104460: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10446c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x10446cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104474: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10447c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104480: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104488: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10448c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10448Cu;
    SET_GPR_U32(ctx, 31, 0x104494u);
    ctx->pc = 0x104490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10448Cu;
    // 0x104490: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10448Cu, 0x104494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104494u;
label_104494:
    // 0x104494: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x104494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104498: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10449c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x10449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1044a0: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1044a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x1044a4: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1044a4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1044a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1044a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1044ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1044acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1044b0: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x1044b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1044b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1044b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1044b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1044b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1044bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1044c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1044c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1044c4u;
}
