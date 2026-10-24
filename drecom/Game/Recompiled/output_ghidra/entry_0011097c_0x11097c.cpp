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

// Function: entry_0011097c
// Address: 0x11097c - 0x11099c
void entry_0011097c_0x11097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011097c_0x11097c");
#endif

    switch (ctx->pc) {
        case 0x110994u: goto label_110994;
        default: break;
    }

    ctx->pc = 0x11097cu;

    // 0x11097c: 0x264257c0  addiu       $v0, $s2, 0x57C0
    ctx->pc = 0x11097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22464));
    // 0x110980: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x110980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x110984: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x110984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x110988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11098c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x11098Cu;
    SET_GPR_U32(ctx, 31, 0x110994u);
    ctx->pc = 0x110990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11098Cu;
    // 0x110990: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x110994u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x110994u) { return; }
    ctx->pc = 0x110994u;
label_110994:
    // 0x110994: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x110994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x110998: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x110998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x11099cu;
}
