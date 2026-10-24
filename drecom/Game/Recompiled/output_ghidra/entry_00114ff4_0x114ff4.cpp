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

// Function: entry_00114ff4
// Address: 0x114ff4 - 0x115024
void entry_00114ff4_0x114ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ff4_0x114ff4");
#endif

    switch (ctx->pc) {
        case 0x114ffcu: goto label_114ffc;
        default: break;
    }

    ctx->pc = 0x114ff4u;

    // 0x114ff4: 0xc0448c6  jal         func_112318
    ctx->pc = 0x114FF4u;
    SET_GPR_U32(ctx, 31, 0x114FFCu);
    ctx->pc = 0x114FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FF4u;
    // 0x114ff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x114FFCu;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x114FFCu) { return; }
    ctx->pc = 0x114FFCu;
label_114ffc:
    // 0x114ffc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x114ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x115000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115004: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x115004u;
    {
        const bool branch_taken_0x115004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115004u;
        // 0x115008: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115004) {
            ctx->pc = 0x115044u;
            return;
        }
    }
    ctx->pc = 0x11500Cu;
    // 0x11500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11500Cu;
    {
        const bool branch_taken_0x11500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11500Cu;
        // 0x115010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11500c) {
            ctx->pc = 0x115024u;
            return;
        }
    }
    ctx->pc = 0x115014u;
    // 0x115014: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115014u;
    {
        const bool branch_taken_0x115014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115014u;
        // 0x115018: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115014) {
            ctx->pc = 0x115034u;
            return;
        }
    }
    ctx->pc = 0x11501Cu;
    // 0x11501c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11501Cu;
    {
        const bool branch_taken_0x11501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11501c) {
            ctx->pc = 0x11506Cu;
            return;
        }
    }
    ctx->pc = 0x115024u;
}
