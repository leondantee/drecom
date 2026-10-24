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

// Function: entry_001102a0
// Address: 0x1102a0 - 0x110310
void entry_001102a0_0x1102a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001102a0_0x1102a0");
#endif

    switch (ctx->pc) {
        case 0x110300u: goto label_110300;
        default: break;
    }

    ctx->pc = 0x1102a0u;

    // 0x1102a0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1102a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1102a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1102a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1102a8: 0x8e024618  lw          $v0, 0x4618($s0)
    ctx->pc = 0x1102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x1102ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1102ACu;
    {
        const bool branch_taken_0x1102ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1102B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102ACu;
        // 0x1102b0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102ac) {
            ctx->pc = 0x110318u;
            return;
        }
    }
    ctx->pc = 0x1102B4u;
    // 0x1102b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1102b8: 0x24445200  addiu       $a0, $v0, 0x5200
    ctx->pc = 0x1102b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x1102bc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x1102c0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1102C0u;
    {
        const bool branch_taken_0x1102c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102C0u;
        // 0x1102c4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102c0) {
            ctx->pc = 0x110318u;
            return;
        }
    }
    ctx->pc = 0x1102C8u;
    // 0x1102c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1102cc: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x1102ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x1102d0: 0xac485280  sw          $t0, 0x5280($v0)
    ctx->pc = 0x1102d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3B5280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5280u, _value); } while (0);
    // 0x1102d4: 0x24475280  addiu       $a3, $v0, 0x5280
    ctx->pc = 0x1102d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1102d8: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1102d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B5290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5290u, _value); } while (0);
    // 0x1102dc: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x1102e0: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x1102e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3B5294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5294u, _value); } while (0);
    // 0x1102e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1102e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1102e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1102e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1102ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1102ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1102f0: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1102f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1102f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1102f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1102f8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1102F8u;
    SET_GPR_U32(ctx, 31, 0x110300u);
    ctx->pc = 0x1102FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102F8u;
    // 0x1102fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110300u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110300u) { return; }
    ctx->pc = 0x110300u;
label_110300:
    // 0x110300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110304: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110304u;
    {
        const bool branch_taken_0x110304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110304u;
        // 0x110308: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110304) {
            ctx->pc = 0x110318u;
            return;
        }
    }
    ctx->pc = 0x11030Cu;
    // 0x11030c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x110310u;
}
