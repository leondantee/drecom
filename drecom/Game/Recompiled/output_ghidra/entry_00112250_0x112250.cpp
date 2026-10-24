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

// Function: entry_00112250
// Address: 0x112250 - 0x112274
void entry_00112250_0x112250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112250_0x112250");
#endif

    switch (ctx->pc) {
        case 0x112268u: goto label_112268;
        case 0x112270u: goto label_112270;
        default: break;
    }

    ctx->pc = 0x112250u;

    // 0x112250: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x112250u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112254: 0x0  nop
    ctx->pc = 0x112254u;
    // NOP
    // 0x112258: 0x0  nop
    ctx->pc = 0x112258u;
    // NOP
    // 0x11225c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x11225cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x112260: 0xc045420  jal         func_115080
    ctx->pc = 0x112260u;
    SET_GPR_U32(ctx, 31, 0x112268u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x112260u, 0x112268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112268u;
label_112268:
    // 0x112268: 0xc045330  jal         func_114CC0
    ctx->pc = 0x112268u;
    SET_GPR_U32(ctx, 31, 0x112270u);
    ctx->pc = 0x11226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112268u;
    // 0x11226c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x112268u, 0x112270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112270u;
label_112270:
    // 0x112270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    ctx->pc = 0x112274u;
}
