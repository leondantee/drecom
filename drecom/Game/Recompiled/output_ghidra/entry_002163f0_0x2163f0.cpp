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

// Function: entry_002163f0
// Address: 0x2163f0 - 0x216438
void entry_002163f0_0x2163f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002163f0_0x2163f0");
#endif

    switch (ctx->pc) {
        case 0x2163f8u: goto label_2163f8;
        case 0x216424u: goto label_216424;
        default: break;
    }

    ctx->pc = 0x2163f0u;

    // 0x2163f0: 0xc0854a6  jal         func_215298
    ctx->pc = 0x2163F0u;
    SET_GPR_U32(ctx, 31, 0x2163F8u);
    ctx->pc = 0x2163F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163F0u;
    // 0x2163f4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x2163F8u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2163F8u) { return; }
    ctx->pc = 0x2163F8u;
label_2163f8:
    // 0x2163f8: 0x2610c880  addiu       $s0, $s0, -0x3780
    ctx->pc = 0x2163f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953088));
    // 0x2163fc: 0x2624ca50  addiu       $a0, $s1, -0x35B0
    ctx->pc = 0x2163fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953552));
    // 0x216400: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x216404: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x216404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x216408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21640c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21640cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x216410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216414: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x216414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216418: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21641c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x21641Cu;
    SET_GPR_U32(ctx, 31, 0x216424u);
    ctx->pc = 0x216420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21641Cu;
    // 0x216420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x216424u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216424u) { return; }
    ctx->pc = 0x216424u;
label_216424:
    // 0x216424: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216424u;
    {
        const bool branch_taken_0x216424 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x216424) {
            ctx->pc = 0x216428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216424u;
            // 0x216428: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216438u;
            return;
        }
    }
    ctx->pc = 0x21642Cu;
    // 0x21642c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x21642cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x216430: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x216430u;
    {
        const bool branch_taken_0x216430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216430u;
        // 0x216434: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216430) {
            ctx->pc = 0x216464u;
            return;
        }
    }
    ctx->pc = 0x216438u;
}
