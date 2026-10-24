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

// Function: entry_0011536c
// Address: 0x11536c - 0x11539c
void entry_0011536c_0x11536c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011536c_0x11536c");
#endif

    switch (ctx->pc) {
        case 0x115374u: goto label_115374;
        default: break;
    }

    ctx->pc = 0x11536cu;

    // 0x11536c: 0xc0448c6  jal         func_112318
    ctx->pc = 0x11536Cu;
    SET_GPR_U32(ctx, 31, 0x115374u);
    ctx->pc = 0x115370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11536Cu;
    // 0x115370: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x115374u;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115374u) { return; }
    ctx->pc = 0x115374u;
label_115374:
    // 0x115374: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x115374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x115378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11537c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11537Cu;
    {
        const bool branch_taken_0x11537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11537Cu;
        // 0x115380: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11537c) {
            ctx->pc = 0x1153C0u;
            return;
        }
    }
    ctx->pc = 0x115384u;
    // 0x115384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115384u;
    {
        const bool branch_taken_0x115384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115384u;
        // 0x115388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115384) {
            ctx->pc = 0x11539Cu;
            return;
        }
    }
    ctx->pc = 0x11538Cu;
    // 0x11538c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11538Cu;
    {
        const bool branch_taken_0x11538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11538Cu;
        // 0x115390: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11538c) {
            ctx->pc = 0x1153ACu;
            return;
        }
    }
    ctx->pc = 0x115394u;
    // 0x115394: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115394u;
    {
        const bool branch_taken_0x115394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115394) {
            ctx->pc = 0x1153E8u;
            return;
        }
    }
    ctx->pc = 0x11539Cu;
}
