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

// Function: entry_001163ec
// Address: 0x1163ec - 0x116430
void entry_001163ec_0x1163ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001163ec_0x1163ec");
#endif

    switch (ctx->pc) {
        case 0x11641cu: goto label_11641c;
        case 0x116428u: goto label_116428;
        default: break;
    }

    ctx->pc = 0x1163ecu;

    // 0x1163ec: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1163ECu;
    {
        const bool branch_taken_0x1163ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163ECu;
        // 0x1163f0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163ec) {
            ctx->pc = 0x1164D8u;
            return;
        }
    }
    ctx->pc = 0x1163F4u;
    // 0x1163f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1163f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1163f8: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x1163f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x1163fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1163fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116400: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x116400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x116404: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x116408: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x116408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11640c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11640cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116414: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x116414u;
    SET_GPR_U32(ctx, 31, 0x11641Cu);
    ctx->pc = 0x116418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116414u;
    // 0x116418: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x116414u, 0x11641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11641Cu;
label_11641c:
    // 0x11641c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116420: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116420u;
    SET_GPR_U32(ctx, 31, 0x116428u);
    ctx->pc = 0x116424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116420u;
    // 0x116424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116420u, 0x116428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116428u;
label_116428:
    // 0x116428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x116428u;
    {
        const bool branch_taken_0x116428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116428u;
        // 0x11642c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116428) {
            ctx->pc = 0x116458u;
            return;
        }
    }
    ctx->pc = 0x116430u;
}
