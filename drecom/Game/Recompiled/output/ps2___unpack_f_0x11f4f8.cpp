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

// Function: __unpack_f
// Address: 0x11f4f8 - 0x11f588
void ps2___unpack_f_0x11f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x11f4f8");
#endif

    ctx->pc = 0x11f4f8u;

    // 0x11f4f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f4fc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x11f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x11f500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11f500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11f504: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x11f504u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11f508: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x11f508u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x11f50c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x11f50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11f510: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11f510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x11f514: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F514u;
    {
        const bool branch_taken_0x11f514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F514u;
        // 0x11f518: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f514) {
            ctx->pc = 0x11F528u;
            goto label_11f528;
        }
    }
    ctx->pc = 0x11F51Cu;
    // 0x11f51c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f520: 0x3e00008  jr          $ra
    ctx->pc = 0x11F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F520u;
        // 0x11f524: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F528u;
label_11f528:
    // 0x11f528: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f52c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11F52Cu;
    {
        const bool branch_taken_0x11f52c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F52Cu;
        // 0x11f530: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f52c) {
            ctx->pc = 0x11F568u;
            goto label_11f568;
        }
    }
    ctx->pc = 0x11F534u;
    // 0x11f534: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F534u;
    {
        const bool branch_taken_0x11f534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F534u;
        // 0x11f538: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f534) {
            ctx->pc = 0x11F548u;
            goto label_11f548;
        }
    }
    ctx->pc = 0x11F53Cu;
    // 0x11f53c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11f540: 0x3e00008  jr          $ra
    ctx->pc = 0x11F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F540u;
        // 0x11f544: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F548u;
label_11f548:
    // 0x11f548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11f54c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F54Cu;
    {
        const bool branch_taken_0x11f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F54Cu;
        // 0x11f550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f54c) {
            ctx->pc = 0x11F55Cu;
            goto label_11f55c;
        }
    }
    ctx->pc = 0x11F554u;
    // 0x11f554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F554u;
    {
        const bool branch_taken_0x11f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F554u;
        // 0x11f558: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f554) {
            ctx->pc = 0x11F560u;
            goto label_11f560;
        }
    }
    ctx->pc = 0x11F55Cu;
label_11f55c:
    // 0x11f55c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_11f560:
    // 0x11f560: 0x3e00008  jr          $ra
    ctx->pc = 0x11F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F560u;
        // 0x11f564: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F568u;
label_11f568:
    // 0x11f568: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x11f568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x11f56c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11f56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f570: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x11f570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x11f574: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f578: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x11f578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x11f57c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x11f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x11f580: 0x3e00008  jr          $ra
    ctx->pc = 0x11F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F580u;
        // 0x11f584: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F588u;
}
