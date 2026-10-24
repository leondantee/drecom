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

// Function: entry_0010f814
// Address: 0x10f814 - 0x10f828
void entry_0010f814_0x10f814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f814_0x10f814");
#endif

    switch (ctx->pc) {
        case 0x10f820u: goto label_10f820;
        default: break;
    }

    ctx->pc = 0x10f814u;

    // 0x10f814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f818: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10F818u;
    SET_GPR_U32(ctx, 31, 0x10F820u);
    ctx->pc = 0x10F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F818u;
    // 0x10f81c: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10F820u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F820u) { return; }
    ctx->pc = 0x10F820u;
label_10f820:
    // 0x10f820: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f824: 0x0  nop
    ctx->pc = 0x10f824u;
    // NOP
    ctx->pc = 0x10f828u;
}
