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

// Function: entry_00165944
// Address: 0x165944 - 0x165960
void entry_00165944_0x165944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165944_0x165944");
#endif

    switch (ctx->pc) {
        case 0x16595cu: goto label_16595c;
        default: break;
    }

    ctx->pc = 0x165944u;

    // 0x165944: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165948: 0xac205a08  sw          $zero, 0x5A08($at)
    ctx->pc = 0x165948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A08u, _value); } while (0);
    // 0x16594c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165950: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x165954: 0xc0598c0  jal         func_166300
    ctx->pc = 0x165954u;
    SET_GPR_U32(ctx, 31, 0x16595Cu);
    ctx->pc = 0x166300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166300u, 0x165954u, 0x16595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16595Cu;
label_16595c:
    // 0x16595c: 0x0  nop
    ctx->pc = 0x16595cu;
    // NOP
    ctx->pc = 0x165960u;
}
