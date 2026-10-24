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

// Function: entry_00111458
// Address: 0x111458 - 0x1114a8
void entry_00111458_0x111458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111458_0x111458");
#endif

    switch (ctx->pc) {
        case 0x111464u: goto label_111464;
        case 0x11146cu: goto label_11146c;
        case 0x111480u: goto label_111480;
        case 0x111490u: goto label_111490;
        default: break;
    }

    ctx->pc = 0x111458u;

label_111458:
    // 0x111458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11145c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11145Cu;
    SET_GPR_U32(ctx, 31, 0x111464u);
    ctx->pc = 0x111460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11145Cu;
    // 0x111460: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11145Cu, 0x111464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111464u;
label_111464:
    // 0x111464: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x111464u;
    SET_GPR_U32(ctx, 31, 0x11146Cu);
    ctx->pc = 0x111468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111464u;
    // 0x111468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x111464u, 0x11146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11146Cu;
label_11146c:
    // 0x11146c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111470: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x111470u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x111474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111478: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111478u;
    SET_GPR_U32(ctx, 31, 0x111480u);
    ctx->pc = 0x11147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111478u;
    // 0x11147c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111478u, 0x111480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111480u;
label_111480:
    // 0x111480: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x111480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x111484: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x111484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x111488: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111488u;
    SET_GPR_U32(ctx, 31, 0x111490u);
    ctx->pc = 0x11148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111488u;
    // 0x11148c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111488u, 0x111490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111490u;
label_111490:
    // 0x111490: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111490u;
    {
        const bool branch_taken_0x111490 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x111494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111490u;
        // 0x111494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111490) {
            ctx->pc = 0x111458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111458;
        }
    }
    ctx->pc = 0x111498u;
    // 0x111498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11149c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11149Cu;
    {
        const bool branch_taken_0x11149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11149Cu;
        // 0x1114a0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11149c) {
            ctx->pc = 0x1114ACu;
            return;
        }
    }
    ctx->pc = 0x1114A4u;
    // 0x1114a4: 0x0  nop
    ctx->pc = 0x1114a4u;
    // NOP
    ctx->pc = 0x1114a8u;
}
