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

// Function: entry_0010f648
// Address: 0x10f648 - 0x10f674
void entry_0010f648_0x10f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f648_0x10f648");
#endif

    ctx->pc = 0x10f648u;

    // 0x10f648: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x10f648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x10f64c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x10f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x10f650: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x10f650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10f654: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x10f654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10f658: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x10f658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f65c: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x10f65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f660: 0x8e6345a8  lw          $v1, 0x45A8($s3)
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17832)));
    // 0x10f664: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F664u;
    {
        const bool branch_taken_0x10f664 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F664u;
        // 0x10f668: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f664) {
            ctx->pc = 0x10F674u;
            return;
        }
    }
    ctx->pc = 0x10F66Cu;
    // 0x10f66c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10F66Cu;
    SET_GPR_U32(ctx, 31, 0x10F674u);
    ctx->pc = 0x10F670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F66Cu;
    // 0x10f670: 0x2484ce88  addiu       $a0, $a0, -0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10F674u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F674u) { return; }
    ctx->pc = 0x10F674u;
}
