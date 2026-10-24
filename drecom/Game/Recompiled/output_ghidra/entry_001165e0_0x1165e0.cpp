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

// Function: entry_001165e0
// Address: 0x1165e0 - 0x116650
void entry_001165e0_0x1165e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001165e0_0x1165e0");
#endif

    switch (ctx->pc) {
        case 0x116634u: goto label_116634;
        case 0x116640u: goto label_116640;
        default: break;
    }

    ctx->pc = 0x1165e0u;

    // 0x1165e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1165e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1165e4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1165E4u;
    {
        const bool branch_taken_0x1165e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1165E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165E4u;
        // 0x1165e8: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165e4) {
            ctx->pc = 0x116760u;
            return;
        }
    }
    ctx->pc = 0x1165ECu;
    // 0x1165ec: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1165ECu;
    {
        const bool branch_taken_0x1165ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165ECu;
        // 0x1165f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165ec) {
            ctx->pc = 0x116760u;
            return;
        }
    }
    ctx->pc = 0x1165F4u;
    // 0x1165f4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1165f8: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x1165f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x1165fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1165fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116600: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116604: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x116604u;
    {
        const bool branch_taken_0x116604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116604u;
        // 0x116608: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116604) {
            ctx->pc = 0x116650u;
            return;
        }
    }
    ctx->pc = 0x11660Cu;
    // 0x11660c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116610: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x116610u;
    {
        const bool branch_taken_0x116610 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x116614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116610u;
        // 0x116614: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116610) {
            ctx->pc = 0x116658u;
            return;
        }
    }
    ctx->pc = 0x116618u;
    // 0x116618: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x116618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x11661c: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x11661Cu;
    {
        const bool branch_taken_0x11661c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x116620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11661Cu;
        // 0x116620: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11661c) {
            ctx->pc = 0x116AD8u;
            return;
        }
    }
    ctx->pc = 0x116624u;
    // 0x116624: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x116624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x116628: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11662c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11662Cu;
    SET_GPR_U32(ctx, 31, 0x116634u);
    ctx->pc = 0x116630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11662Cu;
    // 0x116630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11662Cu, 0x116634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116634u;
label_116634:
    // 0x116634: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116638: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116638u;
    SET_GPR_U32(ctx, 31, 0x116640u);
    ctx->pc = 0x11663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116638u;
    // 0x11663c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116638u, 0x116640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116640u;
label_116640:
    // 0x116640: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x116640u;
    {
        const bool branch_taken_0x116640 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x116644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116640u;
        // 0x116644: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116640) {
            ctx->pc = 0x116AD8u;
            return;
        }
    }
    ctx->pc = 0x116648u;
    // 0x116648: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x116648u;
    {
        const bool branch_taken_0x116648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116648u;
        // 0x11664c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116648) {
            ctx->pc = 0x116AECu;
            return;
        }
    }
    ctx->pc = 0x116650u;
}
