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

// Function: entry_001107b8
// Address: 0x1107b8 - 0x110820
void entry_001107b8_0x1107b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001107b8_0x1107b8");
#endif

    switch (ctx->pc) {
        case 0x1107e0u: goto label_1107e0;
        case 0x110810u: goto label_110810;
        default: break;
    }

    ctx->pc = 0x1107b8u;

    // 0x1107b8: 0x26105700  addiu       $s0, $s0, 0x5700
    ctx->pc = 0x1107b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22272));
    // 0x1107bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1107bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1107c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1107c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1107c4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1107c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1107c8: 0xac495228  sw          $t1, 0x5228($v0)
    ctx->pc = 0x1107c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3B5228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5228u, _value); } while (0);
    // 0x1107cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1107ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1107d0: 0xac67522c  sw          $a3, 0x522C($v1)
    ctx->pc = 0x1107d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3B522Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B522Cu, _value); } while (0);
    // 0x1107d4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1107d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1107d8: 0xc0854a6  jal         func_215298
    ctx->pc = 0x1107D8u;
    SET_GPR_U32(ctx, 31, 0x1107E0u);
    ctx->pc = 0x1107DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107D8u;
    // 0x1107dc: 0xacc85230  sw          $t0, 0x5230($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 21040), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x1107E0u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1107E0u) { return; }
    ctx->pc = 0x1107E0u;
label_1107e0:
    // 0x1107e0: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x1107e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x1107e4: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x1107e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x1107e8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1107e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1107ec: 0x26445200  addiu       $a0, $s2, 0x5200
    ctx->pc = 0x1107ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20992));
    // 0x1107f0: 0x26275280  addiu       $a3, $s1, 0x5280
    ctx->pc = 0x1107f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
    // 0x1107f4: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x1107f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x1107f8: 0x256b06b8  addiu       $t3, $t3, 0x6B8
    ctx->pc = 0x1107f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1720));
    // 0x1107fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1107fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110804: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x110804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110808: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110808u;
    SET_GPR_U32(ctx, 31, 0x110810u);
    ctx->pc = 0x11080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110808u;
    // 0x11080c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110810u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110810u) { return; }
    ctx->pc = 0x110810u;
label_110810:
    // 0x110810: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110814: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110814u;
    {
        const bool branch_taken_0x110814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110814u;
        // 0x110818: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110814) {
            ctx->pc = 0x110828u;
            return;
        }
    }
    ctx->pc = 0x11081Cu;
    // 0x11081c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x110820u;
}
