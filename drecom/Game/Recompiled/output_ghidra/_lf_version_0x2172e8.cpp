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

// Function: _lf_version
// Address: 0x2172e8 - 0x21734c
void _lf_version_0x2172e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_version_0x2172e8");
#endif

    switch (ctx->pc) {
        case 0x217318u: goto label_217318;
        case 0x217330u: goto label_217330;
        default: break;
    }

    ctx->pc = 0x2172e8u;

    // 0x2172e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2172e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2172ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2172f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2172f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2172f4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x2172f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x2172f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2172f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2172fc: 0x2451cee8  addiu       $s1, $v0, -0x3118
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954728));
    // 0x217300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217304: 0x24a5aabc  addiu       $a1, $a1, -0x5544
    ctx->pc = 0x217304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945468));
    // 0x217308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x217308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21730c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217310: 0xc046280  jal         func_118A00
    ctx->pc = 0x217310u;
    SET_GPR_U32(ctx, 31, 0x217318u);
    ctx->pc = 0x217314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217310u;
    // 0x217314: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x217318u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217318u) { return; }
    ctx->pc = 0x217318u;
label_217318:
    // 0x217318: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217318u;
    {
        const bool branch_taken_0x217318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217318u;
        // 0x21731c: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217318) {
            ctx->pc = 0x217334u;
            goto label_217334;
        }
    }
    ctx->pc = 0x217320u;
    // 0x217320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217324: 0x8c45ab04  lw          $a1, -0x54FC($v0)
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945540)));
    // 0x217328: 0xc046280  jal         func_118A00
    ctx->pc = 0x217328u;
    SET_GPR_U32(ctx, 31, 0x217330u);
    ctx->pc = 0x21732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217328u;
    // 0x21732c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x217330u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217330u) { return; }
    ctx->pc = 0x217330u;
label_217330:
    // 0x217330: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x217330u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_217334:
    // 0x217334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21733c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21733cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217344: 0x3e00008  jr          $ra
    ctx->pc = 0x217344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217344u;
        // 0x217348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21734Cu;
}
