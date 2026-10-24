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

// Function: _lf_bind
// Address: 0x2171e8 - 0x2172e8
void _lf_bind_0x2171e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_bind_0x2171e8");
#endif

    switch (ctx->pc) {
        case 0x217210u: goto label_217210;
        case 0x217224u: goto label_217224;
        case 0x217268u: goto label_217268;
        case 0x2172a8u: goto label_2172a8;
        default: break;
    }

    ctx->pc = 0x2171e8u;

    // 0x2171e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2171ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2171ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2171f0: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x2171f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2171f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2171f8: 0x8e42ab00  lw          $v0, -0x5500($s2)
    ctx->pc = 0x2171f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB00u));
    // 0x2171fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2171fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x217200: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x217200u;
    {
        const bool branch_taken_0x217200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x217204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217200u;
        // 0x217204: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217200) {
            ctx->pc = 0x2172CCu;
            goto label_2172cc;
        }
    }
    ctx->pc = 0x217208u;
    // 0x217208: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x21720c: 0x2630cec0  addiu       $s0, $s1, -0x3140
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954688));
label_217210:
    // 0x217210: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x217210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x217214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217218: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x217218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x21721c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x21721Cu;
    SET_GPR_U32(ctx, 31, 0x217224u);
    ctx->pc = 0x217220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21721Cu;
    // 0x217220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x217224u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217224u) { return; }
    ctx->pc = 0x217224u;
label_217224:
    // 0x217224: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217224u;
    {
        const bool branch_taken_0x217224 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217224) {
            ctx->pc = 0x217228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217224u;
            // 0x217228: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217234u;
            goto label_217234;
        }
    }
    ctx->pc = 0x21722Cu;
    // 0x21722c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21722Cu;
    {
        const bool branch_taken_0x21722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21722Cu;
        // 0x217230: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21722c) {
            ctx->pc = 0x2172D0u;
            goto label_2172d0;
        }
    }
    ctx->pc = 0x217234u;
label_217234:
    // 0x217234: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x217234u;
    {
        const bool branch_taken_0x217234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217234u;
        // 0x217238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217234) {
            ctx->pc = 0x21729Cu;
            goto label_21729c;
        }
    }
    ctx->pc = 0x21723Cu;
    // 0x21723c: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x217240: 0xae40ab00  sw          $zero, -0x5500($s2)
    ctx->pc = 0x217240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945536), GPR_U32(ctx, 0));
    // 0x217244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217248: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21724c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21724cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x217254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217258: 0x2629ccc0  addiu       $t1, $s1, -0x3340
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954176));
    // 0x21725c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217260: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217260u;
    SET_GPR_U32(ctx, 31, 0x217268u);
    ctx->pc = 0x217264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217260u;
    // 0x217264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217268u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217268u) { return; }
    ctx->pc = 0x217268u;
label_217268:
    // 0x217268: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217268u;
    {
        const bool branch_taken_0x217268 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217268u;
        // 0x21726c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217268) {
            ctx->pc = 0x21727Cu;
            goto label_21727c;
        }
    }
    ctx->pc = 0x217270u;
    // 0x217270: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217274: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x217274u;
    {
        const bool branch_taken_0x217274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217274u;
        // 0x217278: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217274) {
            ctx->pc = 0x2172D0u;
            goto label_2172d0;
        }
    }
    ctx->pc = 0x21727Cu;
label_21727c:
    // 0x21727c: 0x2627ccc0  addiu       $a3, $s1, -0x3340
    ctx->pc = 0x21727cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954176));
    // 0x217280: 0x2466cee8  addiu       $a2, $v1, -0x3118
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954728));
    // 0x217284: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x217284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x217288: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x217288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x21728c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x21728cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x217290: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x217290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x217294: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x217294u;
    {
        const bool branch_taken_0x217294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217294u;
        // 0x217298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217294) {
            ctx->pc = 0x2172D0u;
            goto label_2172d0;
        }
    }
    ctx->pc = 0x21729Cu;
label_21729c:
    // 0x21729c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x21729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2172a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2172a4: 0x0  nop
    ctx->pc = 0x2172a4u;
    // NOP
label_2172a8:
    // 0x2172a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2172ac: 0x0  nop
    ctx->pc = 0x2172acu;
    // NOP
    // 0x2172b0: 0x0  nop
    ctx->pc = 0x2172b0u;
    // NOP
    // 0x2172b4: 0x0  nop
    ctx->pc = 0x2172b4u;
    // NOP
    // 0x2172b8: 0x0  nop
    ctx->pc = 0x2172b8u;
    // NOP
    // 0x2172bc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2172BCu;
    {
        const bool branch_taken_0x2172bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2172bc) {
            ctx->pc = 0x2172A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2172a8;
        }
    }
    ctx->pc = 0x2172C4u;
    // 0x2172c4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x2172C4u;
    {
        const bool branch_taken_0x2172c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C4u;
        // 0x2172c8: 0x2630cec0  addiu       $s0, $s1, -0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c4) {
            ctx->pc = 0x217210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217210;
        }
    }
    ctx->pc = 0x2172CCu;
label_2172cc:
    // 0x2172cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2172ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2172d0:
    // 0x2172d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2172d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2172d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2172d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2172d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2172dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2172dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2172E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E0u;
        // 0x2172e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172E8u;
}
