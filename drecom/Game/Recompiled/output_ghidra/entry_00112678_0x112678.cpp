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

// Function: entry_00112678
// Address: 0x112678 - 0x11269c
void entry_00112678_0x112678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112678_0x112678");
#endif

    ctx->pc = 0x112678u;

label_112678:
    // 0x112678: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x112678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11267c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112684: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x112684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x112688: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x112688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11268c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11268cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112690: 0x0  nop
    ctx->pc = 0x112690u;
    // NOP
    // 0x112694: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x112694u;
    {
        const bool branch_taken_0x112694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112694) {
            ctx->pc = 0x112698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112694u;
            // 0x112698: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112678;
        }
    }
    ctx->pc = 0x11269Cu;
}
