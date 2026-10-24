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

// Function: entry_0010d99c
// Address: 0x10d99c - 0x10da28
void entry_0010d99c_0x10d99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d99c_0x10d99c");
#endif

    switch (ctx->pc) {
        case 0x10d9f8u: goto label_10d9f8;
        case 0x10da10u: goto label_10da10;
        default: break;
    }

    ctx->pc = 0x10d99cu;

    // 0x10d99c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x10d99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10d9a0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10d9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10d9a4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10d9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10d9a8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x10d9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10d9ac: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x10d9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10d9b0: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x10d9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10d9b4: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x10d9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x10d9b8: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x10d9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10d9bc: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x10d9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10d9c0: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x10d9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9c4: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x10d9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9c8: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x10d9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9cc: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x10d9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9d0: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x10d9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9d4: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x10d9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9d8: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x10d9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9dc: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x10d9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d9e0: 0x8e8345a8  lw          $v1, 0x45A8($s4)
    ctx->pc = 0x10d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17832)));
    // 0x10d9e4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D9E4u;
    {
        const bool branch_taken_0x10d9e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9E4u;
        // 0x10d9e8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9e4) {
            ctx->pc = 0x10DA28u;
            return;
        }
    }
    ctx->pc = 0x10D9ECu;
    // 0x10d9ec: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x10d9f0: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D9F0u;
    SET_GPR_U32(ctx, 31, 0x10D9F8u);
    ctx->pc = 0x10D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D9F0u;
    // 0x10d9f4: 0x2484cc68  addiu       $a0, $a0, -0x3398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D9F8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D9F8u) { return; }
    ctx->pc = 0x10D9F8u;
label_10d9f8:
    // 0x10d9f8: 0x8e8345a8  lw          $v1, 0x45A8($s4)
    ctx->pc = 0x10d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17832)));
    // 0x10d9fc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10D9FCu;
    {
        const bool branch_taken_0x10d9fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9FCu;
        // 0x10da00: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9fc) {
            ctx->pc = 0x10DA28u;
            return;
        }
    }
    ctx->pc = 0x10DA04u;
    // 0x10da04: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x10da04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10da08: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DA08u;
    SET_GPR_U32(ctx, 31, 0x10DA10u);
    ctx->pc = 0x10DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA08u;
    // 0x10da0c: 0x2484cc78  addiu       $a0, $a0, -0x3388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DA10u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DA10u) { return; }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x8e8345a8  lw          $v1, 0x45A8($s4)
    ctx->pc = 0x10da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17832)));
    // 0x10da14: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DA14u;
    {
        const bool branch_taken_0x10da14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA14u;
        // 0x10da18: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da14) {
            ctx->pc = 0x10DA28u;
            return;
        }
    }
    ctx->pc = 0x10DA1Cu;
    // 0x10da1c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10da20: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DA20u;
    SET_GPR_U32(ctx, 31, 0x10DA28u);
    ctx->pc = 0x10DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA20u;
    // 0x10da24: 0x2484cc88  addiu       $a0, $a0, -0x3378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DA28u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DA28u) { return; }
    ctx->pc = 0x10DA28u;
}
