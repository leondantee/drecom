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

// Function: entry_001066f8
// Address: 0x1066f8 - 0x106760
void entry_001066f8_0x1066f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001066f8_0x1066f8");
#endif

    switch (ctx->pc) {
        case 0x106758u: goto label_106758;
        default: break;
    }

    ctx->pc = 0x1066f8u;

    // 0x1066f8: 0x8fc23d08  lw          $v0, 0x3D08($fp)
    ctx->pc = 0x1066f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
    // 0x1066fc: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1066FCu;
    {
        const bool branch_taken_0x1066fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066FCu;
        // 0x106700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066fc) {
            ctx->pc = 0x10696Cu;
            return;
        }
    }
    ctx->pc = 0x106704u;
    // 0x106704: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106708: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x106708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10670c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10670Cu;
    {
        const bool branch_taken_0x10670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10670Cu;
        // 0x106710: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10670c) {
            ctx->pc = 0x10678Cu;
            return;
        }
    }
    ctx->pc = 0x106714u;
    // 0x106714: 0x8c4344b0  lw          $v1, 0x44B0($v0)
    ctx->pc = 0x106714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17584)));
    // 0x106718: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x106718u;
    {
        const bool branch_taken_0x106718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106718u;
        // 0x10671c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106718) {
            ctx->pc = 0x106760u;
            return;
        }
    }
    ctx->pc = 0x106720u;
    // 0x106720: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x106720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x106724: 0x24423d98  addiu       $v0, $v0, 0x3D98
    ctx->pc = 0x106724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x106728: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x106728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10672c: 0x8c4b000c  lw          $t3, 0xC($v0)
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x106730: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x106730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106734: 0x8c4a0008  lw          $t2, 0x8($v0)
    ctx->pc = 0x106734u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106738: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x106738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10673c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10673cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106740: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x106744: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x106744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x106748: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x106748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x10674c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106750: 0xc041a8a  jal         func_106A28
    ctx->pc = 0x106750u;
    SET_GPR_U32(ctx, 31, 0x106758u);
    ctx->pc = 0x106754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106750u;
    // 0x106754: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A28u, 0x106750u, 0x106758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106758u;
label_106758:
    // 0x106758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x106758u;
    {
        const bool branch_taken_0x106758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106758u;
        // 0x10675c: 0x8fc23d08  lw          $v0, 0x3D08($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106758) {
            ctx->pc = 0x106790u;
            return;
        }
    }
    ctx->pc = 0x106760u;
}
