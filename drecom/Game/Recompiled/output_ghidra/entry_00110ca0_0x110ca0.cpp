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

// Function: entry_00110ca0
// Address: 0x110ca0 - 0x110dcc
void entry_00110ca0_0x110ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ca0_0x110ca0");
#endif

    switch (ctx->pc) {
        case 0x110d84u: goto label_110d84;
        case 0x110d90u: goto label_110d90;
        case 0x110dbcu: goto label_110dbc;
        default: break;
    }

    ctx->pc = 0x110ca0u;

    // 0x110ca0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x110ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x110ca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x110ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x110ca8: 0x8e424618  lw          $v0, 0x4618($s2)
    ctx->pc = 0x110ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384618u));
    // 0x110cac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110cb0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x110CB0u;
    {
        const bool branch_taken_0x110cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CB0u;
        // 0x110cb4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cb0) {
            ctx->pc = 0x110DD4u;
            return;
        }
    }
    ctx->pc = 0x110CB8u;
    // 0x110cb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110cbc: 0x24515200  addiu       $s1, $v0, 0x5200
    ctx->pc = 0x110cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x110cc0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x110cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110cc4: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x110CC4u;
    {
        const bool branch_taken_0x110cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CC4u;
        // 0x110cc8: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110cc4) {
            ctx->pc = 0x110DD4u;
            return;
        }
    }
    ctx->pc = 0x110CCCu;
    // 0x110ccc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110cd0: 0x31080007  andi        $t0, $t0, 0x7
    ctx->pc = 0x110cd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x110cd4: 0x245052b0  addiu       $s0, $v0, 0x52B0
    ctx->pc = 0x110cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
    // 0x110cd8: 0xac4452b0  sw          $a0, 0x52B0($v0)
    ctx->pc = 0x110cd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3B52B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B0u, _value); } while (0);
    // 0x110cdc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x110cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3B52B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B4u, _value); } while (0);
    // 0x110ce0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110ce4: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x110ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3B52B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B52B8u, _value); } while (0);
    // 0x110ce8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x110ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cec: 0x24435240  addiu       $v1, $v0, 0x5240
    ctx->pc = 0x110cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x110cf0: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x110cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x110cf4: 0x244a5240  addiu       $t2, $v0, 0x5240
    ctx->pc = 0x110cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    // 0x110cf8: 0x68e60007  ldl         $a2, 0x7($a3)
    ctx->pc = 0x110cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x110cfc: 0x6ce60000  ldr         $a2, 0x0($a3)
    ctx->pc = 0x110cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x110d00: 0x68e8000f  ldl         $t0, 0xF($a3)
    ctx->pc = 0x110d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x110d04: 0x6ce80008  ldr         $t0, 0x8($a3)
    ctx->pc = 0x110d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x110d08: 0x68e90017  ldl         $t1, 0x17($a3)
    ctx->pc = 0x110d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x110d0c: 0x6ce90010  ldr         $t1, 0x10($a3)
    ctx->pc = 0x110d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x110d10: 0xb1460007  sdl         $a2, 0x7($t2)
    ctx->pc = 0x110d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d14: 0xb5460000  sdr         $a2, 0x0($t2)
    ctx->pc = 0x110d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d18: 0xb148000f  sdl         $t0, 0xF($t2)
    ctx->pc = 0x110d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d1c: 0xb5480008  sdr         $t0, 0x8($t2)
    ctx->pc = 0x110d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d20: 0xb1490017  sdl         $t1, 0x17($t2)
    ctx->pc = 0x110d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d24: 0xb5490010  sdr         $t1, 0x10($t2)
    ctx->pc = 0x110d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d28: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x110d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x110d2c: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x110d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x110d30: 0x68e80027  ldl         $t0, 0x27($a3)
    ctx->pc = 0x110d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x110d34: 0x6ce80020  ldr         $t0, 0x20($a3)
    ctx->pc = 0x110d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x110d38: 0x68e9002f  ldl         $t1, 0x2F($a3)
    ctx->pc = 0x110d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x110d3c: 0x6ce90028  ldr         $t1, 0x28($a3)
    ctx->pc = 0x110d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x110d40: 0xb146001f  sdl         $a2, 0x1F($t2)
    ctx->pc = 0x110d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d44: 0xb5460018  sdr         $a2, 0x18($t2)
    ctx->pc = 0x110d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d48: 0xb1480027  sdl         $t0, 0x27($t2)
    ctx->pc = 0x110d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d4c: 0xb5480020  sdr         $t0, 0x20($t2)
    ctx->pc = 0x110d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d50: 0xb149002f  sdl         $t1, 0x2F($t2)
    ctx->pc = 0x110d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d54: 0xb5490028  sdr         $t1, 0x28($t2)
    ctx->pc = 0x110d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d58: 0x68e60037  ldl         $a2, 0x37($a3)
    ctx->pc = 0x110d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x110d5c: 0x6ce60030  ldr         $a2, 0x30($a3)
    ctx->pc = 0x110d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x110d60: 0x68e8003f  ldl         $t0, 0x3F($a3)
    ctx->pc = 0x110d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x110d64: 0x6ce80038  ldr         $t0, 0x38($a3)
    ctx->pc = 0x110d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x110d68: 0xb1460037  sdl         $a2, 0x37($t2)
    ctx->pc = 0x110d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d6c: 0xb5460030  sdr         $a2, 0x30($t2)
    ctx->pc = 0x110d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d70: 0xb148003f  sdl         $t0, 0x3F($t2)
    ctx->pc = 0x110d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d74: 0xb5480038  sdr         $t0, 0x38($t2)
    ctx->pc = 0x110d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x110d78: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x110d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x110d7c: 0xc046c14  jal         func_11B050
    ctx->pc = 0x110D7Cu;
    SET_GPR_U32(ctx, 31, 0x110D84u);
    ctx->pc = 0x110D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D7Cu;
    // 0x110d80: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x110D84u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110D84u) { return; }
    ctx->pc = 0x110D84u;
label_110d84:
    // 0x110d84: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x110d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x110d88: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x110D88u;
    SET_GPR_U32(ctx, 31, 0x110D90u);
    ctx->pc = 0x110D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D88u;
    // 0x110d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x110D90u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110D90u) { return; }
    ctx->pc = 0x110D90u;
label_110d90:
    // 0x110d90: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110d90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x110d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d9c: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x110da0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110da4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x110da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x110da8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110dac: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x110dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x110db0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110db4: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110DB4u;
    SET_GPR_U32(ctx, 31, 0x110DBCu);
    ctx->pc = 0x110DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DB4u;
    // 0x110db8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x110DBCu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110DBCu) { return; }
    ctx->pc = 0x110DBCu;
label_110dbc:
    // 0x110dbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dc0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110DC0u;
    {
        const bool branch_taken_0x110dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DC0u;
        // 0x110dc4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dc0) {
            ctx->pc = 0x110DD4u;
            return;
        }
    }
    ctx->pc = 0x110DC8u;
    // 0x110dc8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x110dccu;
}
