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

// Function: entry_0010a6dc
// Address: 0x10a6dc - 0x10a764
void entry_0010a6dc_0x10a6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a6dc_0x10a6dc");
#endif

    switch (ctx->pc) {
        case 0x10a6e4u: goto label_10a6e4;
        case 0x10a70cu: goto label_10a70c;
        case 0x10a730u: goto label_10a730;
        case 0x10a754u: goto label_10a754;
        default: break;
    }

    ctx->pc = 0x10a6dcu;

    // 0x10a6dc: 0xc042a9c  jal         func_10AA70
    ctx->pc = 0x10A6DCu;
    SET_GPR_U32(ctx, 31, 0x10A6E4u);
    ctx->pc = 0x10A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6DCu;
    // 0x10a6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA70u, 0x10A6DCu, 0x10A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A6E4u;
label_10a6e4:
    // 0x10a6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10A6E8u;
    {
        const bool branch_taken_0x10a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E8u;
        // 0x10a6ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6e8) {
            ctx->pc = 0x10A764u;
            return;
        }
    }
    ctx->pc = 0x10A6F0u;
    // 0x10a6f0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x10a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x10a6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6f8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x10a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x10a6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a700: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x10a700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x10a704: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A704u;
    SET_GPR_U32(ctx, 31, 0x10A70Cu);
    ctx->pc = 0x10A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A704u;
    // 0x10a708: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A704u, 0x10A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A70Cu;
label_10a70c:
    // 0x10a70c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x10a710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a718: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10A718u;
    {
        const bool branch_taken_0x10a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A718u;
        // 0x10a71c: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a718) {
            ctx->pc = 0x10A764u;
            return;
        }
    }
    ctx->pc = 0x10A720u;
    // 0x10a720: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x10a720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10a724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a728: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A728u;
    SET_GPR_U32(ctx, 31, 0x10A730u);
    ctx->pc = 0x10A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A728u;
    // 0x10a72c: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A728u, 0x10A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A730u;
label_10a730:
    // 0x10a730: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10a734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a73c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10A73Cu;
    {
        const bool branch_taken_0x10a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A73Cu;
        // 0x10a740: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a73c) {
            ctx->pc = 0x10A764u;
            return;
        }
    }
    ctx->pc = 0x10A744u;
    // 0x10a744: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x10a744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10a748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a74c: 0xc042a30  jal         func_10A8C0
    ctx->pc = 0x10A74Cu;
    SET_GPR_U32(ctx, 31, 0x10A754u);
    ctx->pc = 0x10A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A74Cu;
    // 0x10a750: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8C0u, 0x10A74Cu, 0x10A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A754u;
label_10a754:
    // 0x10a754: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x10a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x10a758: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a75c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a760: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x10a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x10a764u;
}
