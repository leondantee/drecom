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

// Function: entry_0010ce20
// Address: 0x10ce20 - 0x10ce98
void entry_0010ce20_0x10ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ce20_0x10ce20");
#endif

    switch (ctx->pc) {
        case 0x10ce88u: goto label_10ce88;
        default: break;
    }

    ctx->pc = 0x10ce20u;

    // 0x10ce20: 0x24503b00  addiu       $s0, $v0, 0x3B00
    ctx->pc = 0x10ce20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15104));
    // 0x10ce24: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10ce28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ce2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10ce2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce30: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10ce34: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ce38: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 3));
    // 0x10ce3c: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10ce40: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x10ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x10ce44: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10ce44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10ce48: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x10ce48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10ce4c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x10ce4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10ce50: 0x88c3000b  lwl         $v1, 0xB($a2)
    ctx->pc = 0x10ce50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x10ce54: 0x98c30008  lwr         $v1, 0x8($a2)
    ctx->pc = 0x10ce54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x10ce58: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x10ce58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ce5c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x10ce5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ce60: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x10ce60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10ce64: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x10ce64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x10ce68: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10ce68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10ce74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ce74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10ce78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce7c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10ce7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10ce80: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CE80u;
    SET_GPR_U32(ctx, 31, 0x10CE88u);
    ctx->pc = 0x10CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE80u;
    // 0x10ce84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CE88u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CE88u) { return; }
    ctx->pc = 0x10CE88u;
label_10ce88:
    // 0x10ce88: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CE88u;
    {
        const bool branch_taken_0x10ce88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ce88) {
            ctx->pc = 0x10CE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CE88u;
            // 0x10ce8c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE98u;
            return;
        }
    }
    ctx->pc = 0x10CE90u;
    // 0x10ce90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10CE90u;
    {
        const bool branch_taken_0x10ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE90u;
        // 0x10ce94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce90) {
            ctx->pc = 0x10CEBCu;
            return;
        }
    }
    ctx->pc = 0x10CE98u;
}
