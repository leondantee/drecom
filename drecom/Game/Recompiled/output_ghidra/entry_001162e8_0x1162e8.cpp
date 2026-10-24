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

// Function: entry_001162e8
// Address: 0x1162e8 - 0x116340
void entry_001162e8_0x1162e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162e8_0x1162e8");
#endif

    switch (ctx->pc) {
        case 0x116304u: goto label_116304;
        case 0x11633cu: goto label_11633c;
        default: break;
    }

    ctx->pc = 0x1162e8u;

    // 0x1162e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1162e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1162ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1162ECu;
    {
        const bool branch_taken_0x1162ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1162ec) {
            ctx->pc = 0x116340u;
            return;
        }
    }
    ctx->pc = 0x1162F4u;
    // 0x1162f4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1162f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1162f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1162f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1162fc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1162FCu;
    SET_GPR_U32(ctx, 31, 0x116304u);
    ctx->pc = 0x116300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162FCu;
    // 0x116300: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1162FCu, 0x116304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116304u;
label_116304:
    // 0x116304: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x116304u;
    {
        const bool branch_taken_0x116304 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116304u;
        // 0x116308: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116304) {
            ctx->pc = 0x116340u;
            return;
        }
    }
    ctx->pc = 0x11630Cu;
    // 0x11630c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11630Cu;
    {
        const bool branch_taken_0x11630c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11630c) {
            ctx->pc = 0x116340u;
            return;
        }
    }
    ctx->pc = 0x116314u;
    // 0x116314: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x116314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116318: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x116318u;
    {
        const bool branch_taken_0x116318 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116318u;
        // 0x11631c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116318) {
            ctx->pc = 0x1165CCu;
            return;
        }
    }
    ctx->pc = 0x116320u;
    // 0x116320: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116324: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116328: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x11632c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x116330: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x116330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x116334: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116334u;
    SET_GPR_U32(ctx, 31, 0x11633Cu);
    ctx->pc = 0x116338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116334u;
    // 0x116338: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116334u, 0x11633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11633Cu;
label_11633c:
    // 0x11633c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11633cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116340u;
}
