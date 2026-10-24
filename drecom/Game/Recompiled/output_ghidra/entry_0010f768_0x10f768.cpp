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

// Function: entry_0010f768
// Address: 0x10f768 - 0x10f7a0
void entry_0010f768_0x10f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f768_0x10f768");
#endif

    switch (ctx->pc) {
        case 0x10f77cu: goto label_10f77c;
        case 0x10f79cu: goto label_10f79c;
        default: break;
    }

    ctx->pc = 0x10f768u;

    // 0x10f768: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10f76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f770: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x10f770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x10f774: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10F774u;
    SET_GPR_U32(ctx, 31, 0x10F77Cu);
    ctx->pc = 0x10F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F774u;
    // 0x10f778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10F77Cu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F77Cu) { return; }
    ctx->pc = 0x10F77Cu;
label_10f77c:
    // 0x10f77c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10F77Cu;
    {
        const bool branch_taken_0x10f77c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10f77c) {
            ctx->pc = 0x10F780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F77Cu;
            // 0x10f780: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F7CCu;
            return;
        }
    }
    ctx->pc = 0x10F784u;
    // 0x10f784: 0x8e4245a8  lw          $v0, 0x45A8($s2)
    ctx->pc = 0x10f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17832)));
    // 0x10f788: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F788u;
    {
        const bool branch_taken_0x10f788 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F788u;
        // 0x10f78c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f788) {
            ctx->pc = 0x10F7A0u;
            return;
        }
    }
    ctx->pc = 0x10F790u;
    // 0x10f790: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f794: 0xc046760  jal         func_119D80
    ctx->pc = 0x10F794u;
    SET_GPR_U32(ctx, 31, 0x10F79Cu);
    ctx->pc = 0x10F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F794u;
    // 0x10f798: 0x2484ceb8  addiu       $a0, $a0, -0x3148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10F79Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F79Cu) { return; }
    ctx->pc = 0x10F79Cu;
label_10f79c:
    // 0x10f79c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10f7a0u;
}
