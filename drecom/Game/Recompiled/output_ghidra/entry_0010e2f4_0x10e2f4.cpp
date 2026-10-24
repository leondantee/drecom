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

// Function: entry_0010e2f4
// Address: 0x10e2f4 - 0x10e37c
void entry_0010e2f4_0x10e2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e2f4_0x10e2f4");
#endif

    switch (ctx->pc) {
        case 0x10e314u: goto label_10e314;
        case 0x10e324u: goto label_10e324;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e374u: goto label_10e374;
        default: break;
    }

    ctx->pc = 0x10e2f4u;

    // 0x10e2f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x10e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10e2f8: 0x24524380  addiu       $s2, $v0, 0x4380
    ctx->pc = 0x10e2f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x10e2fc: 0x24704350  addiu       $s0, $v1, 0x4350
    ctx->pc = 0x10e2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 17232));
    // 0x10e300: 0xac724350  sw          $s2, 0x4350($v1)
    ctx->pc = 0x10e300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3B4350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B4350u, _value); } while (0);
    // 0x10e304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e308: 0x24050810  addiu       $a1, $zero, 0x810
    ctx->pc = 0x10e308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x10e30c: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E30Cu;
    SET_GPR_U32(ctx, 31, 0x10E314u);
    ctx->pc = 0x10E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E30Cu;
    // 0x10e310: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E314u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E314u) { return; }
    ctx->pc = 0x10E314u;
label_10e314:
    // 0x10e314: 0x26b43c00  addiu       $s4, $s5, 0x3C00
    ctx->pc = 0x10e314u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 15360));
    // 0x10e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e31c: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E31Cu;
    SET_GPR_U32(ctx, 31, 0x10E324u);
    ctx->pc = 0x10E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E31Cu;
    // 0x10e320: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E324u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E324u) { return; }
    ctx->pc = 0x10E324u;
label_10e324:
    // 0x10e324: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10e324u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10e328: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e32c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10e330: 0xae2245f8  sw          $v0, 0x45F8($s1)
    ctx->pc = 0x10e330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10e334: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x10e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x10e338: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10e338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e33c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10e340: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10e344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e348: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x10e348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e34c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10e34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e350: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x10e350u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10e354: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10E354u;
    SET_GPR_U32(ctx, 31, 0x10E35Cu);
    ctx->pc = 0x10E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E354u;
    // 0x10e358: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10E35Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E35Cu) { return; }
    ctx->pc = 0x10E35Cu;
label_10e35c:
    // 0x10e35c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E35Cu;
    {
        const bool branch_taken_0x10e35c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e35c) {
            ctx->pc = 0x10E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E35Cu;
            // 0x10e360: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E37Cu;
            return;
        }
    }
    ctx->pc = 0x10E364u;
    // 0x10e364: 0xae2045f8  sw          $zero, 0x45F8($s1)
    ctx->pc = 0x10e364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17912), GPR_U32(ctx, 0));
    // 0x10e368: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10e36c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10E36Cu;
    SET_GPR_U32(ctx, 31, 0x10E374u);
    ctx->pc = 0x10E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E36Cu;
    // 0x10e370: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10E374u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E374u) { return; }
    ctx->pc = 0x10E374u;
label_10e374:
    // 0x10e374: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x10E374u;
    {
        const bool branch_taken_0x10e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E374u;
        // 0x10e378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e374) {
            ctx->pc = 0x10E524u;
            return;
        }
    }
    ctx->pc = 0x10E37Cu;
}
