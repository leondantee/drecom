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

// Function: entry_001130d8
// Address: 0x1130d8 - 0x113178
void entry_001130d8_0x1130d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001130d8_0x1130d8");
#endif

    switch (ctx->pc) {
        case 0x1130ecu: goto label_1130ec;
        case 0x1130fcu: goto label_1130fc;
        case 0x113124u: goto label_113124;
        case 0x11312cu: goto label_11312c;
        case 0x113134u: goto label_113134;
        case 0x113150u: goto label_113150;
        case 0x11315cu: goto label_11315c;
        case 0x113164u: goto label_113164;
        default: break;
    }

    ctx->pc = 0x1130d8u;

    // 0x1130d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1130d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130dc: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x1130dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1130e0: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1130e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1130e4: 0xc045284  jal         func_114A10
    ctx->pc = 0x1130E4u;
    SET_GPR_U32(ctx, 31, 0x1130ECu);
    ctx->pc = 0x1130E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130E4u;
    // 0x1130e8: 0x62823  negu        $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x1130E4u, 0x1130ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130ECu;
label_1130ec:
    // 0x1130ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1130ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1130f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130f4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1130F4u;
    SET_GPR_U32(ctx, 31, 0x1130FCu);
    ctx->pc = 0x1130F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130F4u;
    // 0x1130f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1130F4u, 0x1130FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130FCu;
label_1130fc:
    // 0x1130fc: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1130FCu;
    {
        const bool branch_taken_0x1130fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x113100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130FCu;
        // 0x113100: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130fc) {
            ctx->pc = 0x113178u;
            return;
        }
    }
    ctx->pc = 0x113104u;
    // 0x113104: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x113104u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113108: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x113108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x11310c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11310cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x113110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113114: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x113114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x113118: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x113118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x11311c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11311Cu;
    SET_GPR_U32(ctx, 31, 0x113124u);
    ctx->pc = 0x113120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11311Cu;
    // 0x113120: 0xafa80248  sw          $t0, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11311Cu, 0x113124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113124u;
label_113124:
    // 0x113124: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x113124u;
    SET_GPR_U32(ctx, 31, 0x11312Cu);
    ctx->pc = 0x113128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113124u;
    // 0x113128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x113124u, 0x11312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11312Cu;
label_11312c:
    // 0x11312c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11312Cu;
    SET_GPR_U32(ctx, 31, 0x113134u);
    ctx->pc = 0x113130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11312Cu;
    // 0x113130: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11312Cu, 0x113134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113134u;
label_113134:
    // 0x113134: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x113134u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11313c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x11313cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113140: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113144: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x113144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113148: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113148u;
    SET_GPR_U32(ctx, 31, 0x113150u);
    ctx->pc = 0x11314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113148u;
    // 0x11314c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113148u, 0x113150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113150u;
label_113150:
    // 0x113150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113154: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113154u;
    SET_GPR_U32(ctx, 31, 0x11315Cu);
    ctx->pc = 0x113158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113154u;
    // 0x113158: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113154u, 0x11315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11315Cu;
label_11315c:
    // 0x11315c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11315Cu;
    SET_GPR_U32(ctx, 31, 0x113164u);
    ctx->pc = 0x113160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11315Cu;
    // 0x113160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11315Cu, 0x113164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113164u;
label_113164:
    // 0x113164: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113168: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x113168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11316c: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x113170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113170u;
    {
        const bool branch_taken_0x113170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113170u;
        // 0x113174: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113170) {
            ctx->pc = 0x11318Cu;
            return;
        }
    }
    ctx->pc = 0x113178u;
}
