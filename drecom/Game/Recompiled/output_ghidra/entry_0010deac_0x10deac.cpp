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

// Function: entry_0010deac
// Address: 0x10deac - 0x10dedc
void entry_0010deac_0x10deac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010deac_0x10deac");
#endif

    switch (ctx->pc) {
        case 0x10debcu: goto label_10debc;
        case 0x10dec8u: goto label_10dec8;
        default: break;
    }

    ctx->pc = 0x10deacu;

    // 0x10deac: 0x26d04000  addiu       $s0, $s6, 0x4000
    ctx->pc = 0x10deacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16384));
    // 0x10deb0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x10deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10deb4: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10DEB4u;
    SET_GPR_U32(ctx, 31, 0x10DEBCu);
    ctx->pc = 0x10DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEB4u;
    // 0x10deb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10DEBCu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DEBCu) { return; }
    ctx->pc = 0x10DEBCu;
label_10debc:
    // 0x10debc: 0x26e44340  addiu       $a0, $s7, 0x4340
    ctx->pc = 0x10debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17216));
    // 0x10dec0: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10DEC0u;
    SET_GPR_U32(ctx, 31, 0x10DEC8u);
    ctx->pc = 0x10DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DEC0u;
    // 0x10dec4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10DEC8u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DEC8u) { return; }
    ctx->pc = 0x10DEC8u;
label_10dec8:
    // 0x10dec8: 0x8ea245a8  lw          $v0, 0x45A8($s5)
    ctx->pc = 0x10dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
    // 0x10decc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DECCu;
    {
        const bool branch_taken_0x10decc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DECCu;
        // 0x10ded0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10decc) {
            ctx->pc = 0x10DEDCu;
            return;
        }
    }
    ctx->pc = 0x10DED4u;
    // 0x10ded4: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DED4u;
    SET_GPR_U32(ctx, 31, 0x10DEDCu);
    ctx->pc = 0x10DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DED4u;
    // 0x10ded8: 0x2484cd40  addiu       $a0, $a0, -0x32C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DEDCu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DEDCu) { return; }
    ctx->pc = 0x10DEDCu;
}
