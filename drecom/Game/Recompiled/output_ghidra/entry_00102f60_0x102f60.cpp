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

// Function: entry_00102f60
// Address: 0x102f60 - 0x102f90
void entry_00102f60_0x102f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f60_0x102f60");
#endif

    ctx->pc = 0x102f60u;

    // 0x102f60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102f64: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x102f64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x102f68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x102f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102f6c: 0x3123000c  andi        $v1, $t1, 0xC
    ctx->pc = 0x102f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
    // 0x102f70: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x102f70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x102f74: 0x1012  mflo        $v0
    ctx->pc = 0x102f74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x102f78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x102f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102f7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x102f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x102f80: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x102f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x102f84: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x102F84u;
    {
        const bool branch_taken_0x102f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F84u;
        // 0x102f88: 0xfd060000  sd          $a2, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f84) {
            ctx->pc = 0x102FACu;
            return;
        }
    }
    ctx->pc = 0x102F8Cu;
    // 0x102f8c: 0x0  nop
    ctx->pc = 0x102f8cu;
    // NOP
    ctx->pc = 0x102f90u;
}
