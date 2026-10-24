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

// Function: entry_001103c4
// Address: 0x1103c4 - 0x11046c
void entry_001103c4_0x1103c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001103c4_0x1103c4");
#endif

    switch (ctx->pc) {
        case 0x110420u: goto label_110420;
        case 0x11042cu: goto label_11042c;
        case 0x11045cu: goto label_11045c;
        default: break;
    }

    ctx->pc = 0x1103c4u;

    // 0x1103c4: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1103c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x1103c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1103c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1103cc: 0x8e624618  lw          $v0, 0x4618($s3)
    ctx->pc = 0x1103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x1103d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1103d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1103d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1103d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1103d8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1103D8u;
    {
        const bool branch_taken_0x1103d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103D8u;
        // 0x1103dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103d8) {
            ctx->pc = 0x110474u;
            return;
        }
    }
    ctx->pc = 0x1103E0u;
    // 0x1103e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1103e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1103e4: 0x24525200  addiu       $s2, $v0, 0x5200
    ctx->pc = 0x1103e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x1103e8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1103e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x1103ec: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1103ECu;
    {
        const bool branch_taken_0x1103ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103ECu;
        // 0x1103f0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103ec) {
            ctx->pc = 0x110474u;
            return;
        }
    }
    ctx->pc = 0x1103F4u;
    // 0x1103f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1103f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1103f8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1103fc: 0x24515280  addiu       $s1, $v0, 0x5280
    ctx->pc = 0x1103fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x110400: 0x26105700  addiu       $s0, $s0, 0x5700
    ctx->pc = 0x110400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22272));
    // 0x110404: 0xac445280  sw          $a0, 0x5280($v0)
    ctx->pc = 0x110404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B5280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5280u, _value); } while (0);
    // 0x110408: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11040c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110410: 0xae270018  sw          $a3, 0x18($s1)
    ctx->pc = 0x110410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3B5298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B5298u, _value); } while (0);
    // 0x110414: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x110414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3B528Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B528Cu, _value); } while (0);
    // 0x110418: 0xc0854a6  jal         func_215298
    ctx->pc = 0x110418u;
    SET_GPR_U32(ctx, 31, 0x110420u);
    ctx->pc = 0x11041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110418u;
    // 0x11041c: 0xae30001c  sw          $s0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x110420u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110420u) { return; }
    ctx->pc = 0x110420u;
label_110420:
    // 0x110420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110424: 0xc0854a6  jal         func_215298
    ctx->pc = 0x110424u;
    SET_GPR_U32(ctx, 31, 0x11042Cu);
    ctx->pc = 0x110428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110424u;
    // 0x110428: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x11042Cu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11042Cu) { return; }
    ctx->pc = 0x11042Cu;
label_11042c:
    // 0x11042c: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110430: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x110434: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x110434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x110438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11043c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11043cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110440: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110444: 0x256b0328  addiu       $t3, $t3, 0x328
    ctx->pc = 0x110444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 808));
    // 0x110448: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x110448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11044c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110450: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x110450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110454: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110454u;
    SET_GPR_U32(ctx, 31, 0x11045Cu);
    ctx->pc = 0x110458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110454u;
    // 0x110458: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x11045Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11045Cu) { return; }
    ctx->pc = 0x11045Cu;
label_11045c:
    // 0x11045c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110460: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110460u;
    {
        const bool branch_taken_0x110460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110460u;
        // 0x110464: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110460) {
            ctx->pc = 0x110474u;
            return;
        }
    }
    ctx->pc = 0x110468u;
    // 0x110468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x110468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11046cu;
}
