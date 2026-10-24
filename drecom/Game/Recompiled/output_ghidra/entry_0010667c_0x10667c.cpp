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

// Function: entry_0010667c
// Address: 0x10667c - 0x1066c8
void entry_0010667c_0x10667c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010667c_0x10667c");
#endif

    switch (ctx->pc) {
        case 0x1066c0u: goto label_1066c0;
        default: break;
    }

    ctx->pc = 0x10667cu;

    // 0x10667c: 0x8c4344b0  lw          $v1, 0x44B0($v0)
    ctx->pc = 0x10667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17584)));
    // 0x106680: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x106680u;
    {
        const bool branch_taken_0x106680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106680u;
        // 0x106684: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106680) {
            ctx->pc = 0x1066C8u;
            return;
        }
    }
    ctx->pc = 0x106688u;
    // 0x106688: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x106688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x10668c: 0x24433d98  addiu       $v1, $v0, 0x3D98
    ctx->pc = 0x10668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15768));
    // 0x106690: 0x8c4a3d98  lw          $t2, 0x3D98($v0)
    ctx->pc = 0x106690u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15768)));
    // 0x106694: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x106694u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x106698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10669c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x10669cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1066a0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1066a4: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1066a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1066a8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1066ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b8: 0xc041a8a  jal         func_106A28
    ctx->pc = 0x1066B8u;
    SET_GPR_U32(ctx, 31, 0x1066C0u);
    ctx->pc = 0x1066BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066B8u;
    // 0x1066bc: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A28u, 0x1066B8u, 0x1066C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1066C0u;
label_1066c0:
    // 0x1066c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1066C0u;
    {
        const bool branch_taken_0x1066c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066C0u;
        // 0x1066c4: 0x3c1e0038  lui         $fp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066c0) {
            ctx->pc = 0x1066F8u;
            return;
        }
    }
    ctx->pc = 0x1066C8u;
}
