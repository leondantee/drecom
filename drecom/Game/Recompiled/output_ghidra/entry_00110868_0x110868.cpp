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

// Function: entry_00110868
// Address: 0x110868 - 0x110910
void entry_00110868_0x110868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110868_0x110868");
#endif

    switch (ctx->pc) {
        case 0x1108bcu: goto label_1108bc;
        case 0x1108ccu: goto label_1108cc;
        case 0x1108f8u: goto label_1108f8;
        default: break;
    }

    ctx->pc = 0x110868u;

    // 0x110868: 0x8e824618  lw          $v0, 0x4618($s4)
    ctx->pc = 0x110868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17944)));
    // 0x11086c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x11086cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110870: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x110870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x110874: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x110874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x110878: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x110878u;
    {
        const bool branch_taken_0x110878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110878u;
        // 0x11087c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110878) {
            ctx->pc = 0x110910u;
            return;
        }
    }
    ctx->pc = 0x110880u;
    // 0x110880: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110884: 0x24535200  addiu       $s3, $v0, 0x5200
    ctx->pc = 0x110884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110888: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x110888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x11088c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11088Cu;
    {
        const bool branch_taken_0x11088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11088Cu;
        // 0x110890: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11088c) {
            ctx->pc = 0x110910u;
            return;
        }
    }
    ctx->pc = 0x110894u;
    // 0x110894: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110898: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11089c: 0x245052b0  addiu       $s0, $v0, 0x52B0
    ctx->pc = 0x11089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x1108a0: 0xac4452b0  sw          $a0, 0x52B0($v0)
    ctx->pc = 0x1108a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B52B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B0u, _value); } while (0);
    // 0x1108a4: 0xae0a0004  sw          $t2, 0x4($s0)
    ctx->pc = 0x1108a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3B52B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B4u, _value); } while (0);
    // 0x1108a8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1108a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1108ac: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1108acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3B52B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B8u, _value); } while (0);
    // 0x1108b0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1108b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3B52BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52BCu, _value); } while (0);
    // 0x1108b4: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1108B4u;
    SET_GPR_U32(ctx, 31, 0x1108BCu);
    ctx->pc = 0x1108B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108B4u;
    // 0x1108b8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x1108BCu;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1108BCu) { return; }
    ctx->pc = 0x1108BCu;
label_1108bc:
    // 0x1108bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108c0: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x1108c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1108c4: 0xc0854a6  jal         func_215298
    ctx->pc = 0x1108C4u;
    SET_GPR_U32(ctx, 31, 0x1108CCu);
    ctx->pc = 0x1108C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108C4u;
    // 0x1108c8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x1108CCu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1108CCu) { return; }
    ctx->pc = 0x1108CCu;
label_1108cc:
    // 0x1108cc: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x1108d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1108d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1108d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108d8: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x1108d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x1108dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1108dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1108e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1108e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1108e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1108e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1108e8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1108e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1108ec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1108ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1108f0: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1108F0u;
    SET_GPR_U32(ctx, 31, 0x1108F8u);
    ctx->pc = 0x1108F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108F0u;
    // 0x1108f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1108F8u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1108F8u) { return; }
    ctx->pc = 0x1108F8u;
label_1108f8:
    // 0x1108f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1108f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1108FCu;
    {
        const bool branch_taken_0x1108fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108FCu;
        // 0x110900: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108fc) {
            ctx->pc = 0x110910u;
            return;
        }
    }
    ctx->pc = 0x110904u;
    // 0x110904: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x110904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x110908: 0xae824618  sw          $v0, 0x4618($s4)
    ctx->pc = 0x110908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17944), GPR_U32(ctx, 2));
    // 0x11090c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11090cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110910u;
}
