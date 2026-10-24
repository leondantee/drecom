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

// Function: entry_0010e06c
// Address: 0x10e06c - 0x10e0c0
void entry_0010e06c_0x10e06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e06c_0x10e06c");
#endif

    switch (ctx->pc) {
        case 0x10e080u: goto label_10e080;
        case 0x10e090u: goto label_10e090;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0acu: goto label_10e0ac;
        default: break;
    }

    ctx->pc = 0x10e06cu;

    // 0x10e06c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e070: 0x25104340  addiu       $s0, $t0, 0x4340
    ctx->pc = 0x10e070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 17216));
    // 0x10e074: 0xad004340  sw          $zero, 0x4340($t0)
    ctx->pc = 0x10e074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 17216), GPR_U32(ctx, 0));
    // 0x10e078: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E078u;
    SET_GPR_U32(ctx, 31, 0x10E080u);
    ctx->pc = 0x10E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E078u;
    // 0x10e07c: 0x26b43f00  addiu       $s4, $s5, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E080u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E080u) { return; }
    ctx->pc = 0x10E080u;
label_10e080:
    // 0x10e080: 0x26723fc0  addiu       $s2, $s3, 0x3FC0
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16320));
    // 0x10e084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e088: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E088u;
    SET_GPR_U32(ctx, 31, 0x10E090u);
    ctx->pc = 0x10E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E088u;
    // 0x10e08c: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E090u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E090u) { return; }
    ctx->pc = 0x10E090u;
label_10e090:
    // 0x10e090: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10e090u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10e094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e098: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E098u;
    SET_GPR_U32(ctx, 31, 0x10E0A0u);
    ctx->pc = 0x10E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E098u;
    // 0x10e09c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E0A0u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E0A0u) { return; }
    ctx->pc = 0x10E0A0u;
label_10e0a0:
    // 0x10e0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e0a4: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10E0A4u;
    SET_GPR_U32(ctx, 31, 0x10E0ACu);
    ctx->pc = 0x10E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0A4u;
    // 0x10e0a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10E0ACu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E0ACu) { return; }
    ctx->pc = 0x10E0ACu;
label_10e0ac:
    // 0x10e0ac: 0x8e6245a8  lw          $v0, 0x45A8($s3)
    ctx->pc = 0x10e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17832)));
    // 0x10e0b0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E0B0u;
    {
        const bool branch_taken_0x10e0b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B0u;
        // 0x10e0b4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0b0) {
            ctx->pc = 0x10E0C0u;
            return;
        }
    }
    ctx->pc = 0x10E0B8u;
    // 0x10e0b8: 0xc046760  jal         func_119D80
    ctx->pc = 0x10E0B8u;
    SET_GPR_U32(ctx, 31, 0x10E0C0u);
    ctx->pc = 0x10E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0B8u;
    // 0x10e0bc: 0x2484cd68  addiu       $a0, $a0, -0x3298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10E0C0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E0C0u) { return; }
    ctx->pc = 0x10E0C0u;
}
