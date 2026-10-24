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

// Function: entry_0010c11c
// Address: 0x10c11c - 0x10c174
void entry_0010c11c_0x10c11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c11c_0x10c11c");
#endif

    switch (ctx->pc) {
        case 0x10c16cu: goto label_10c16c;
        default: break;
    }

    ctx->pc = 0x10c11cu;

    // 0x10c11c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x10c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10c120: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x10c120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10c124: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x10c124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c128: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x10c128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10c12c: 0x3c1e003b  lui         $fp, 0x3B
    ctx->pc = 0x10c12cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    // 0x10c130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c134: 0x27c23990  addiu       $v0, $fp, 0x3990
    ctx->pc = 0x10c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 14736));
    // 0x10c138: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c13c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c140: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c144: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x10C144u;
    {
        const bool branch_taken_0x10c144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x10C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C144u;
        // 0x10c148: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c144) {
            ctx->pc = 0x10C174u;
            return;
        }
    }
    ctx->pc = 0x10C14Cu;
    // 0x10c14c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10c150: 0x8c434564  lw          $v1, 0x4564($v0)
    ctx->pc = 0x10c150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x384564u));
    // 0x10c154: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x10C154u;
    {
        const bool branch_taken_0x10c154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C154u;
        // 0x10c158: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c154) {
            ctx->pc = 0x10C204u;
            return;
        }
    }
    ctx->pc = 0x10C15Cu;
    // 0x10c15c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c160: 0x2484cb58  addiu       $a0, $a0, -0x34A8
    ctx->pc = 0x10c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953816));
    // 0x10c164: 0xc046760  jal         func_119D80
    ctx->pc = 0x10C164u;
    SET_GPR_U32(ctx, 31, 0x10C16Cu);
    ctx->pc = 0x10C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C164u;
    // 0x10c168: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10C16Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C16Cu) { return; }
    ctx->pc = 0x10C16Cu;
label_10c16c:
    // 0x10c16c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x10C16Cu;
    {
        const bool branch_taken_0x10c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C16Cu;
        // 0x10c170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c16c) {
            ctx->pc = 0x10C26Cu;
            return;
        }
    }
    ctx->pc = 0x10C174u;
}
