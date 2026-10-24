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

// Function: entry_0025e39c
// Address: 0x25e39c - 0x25e3b0
void entry_0025e39c_0x25e39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e39c_0x25e39c");
#endif

    switch (ctx->pc) {
        case 0x25e3acu: goto label_25e3ac;
        default: break;
    }

    ctx->pc = 0x25e39cu;

    // 0x25e39c: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x25e39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25e3a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e3a4: 0xc098440  jal         func_261100
    ctx->pc = 0x25E3A4u;
    SET_GPR_U32(ctx, 31, 0x25E3ACu);
    ctx->pc = 0x261100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261100u, 0x25E3A4u, 0x25E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3ACu;
label_25e3ac:
    // 0x25e3ac: 0xe60015e8  swc1        $f0, 0x15E8($s0)
    ctx->pc = 0x25e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5608), bits); }
    ctx->pc = 0x25e3b0u;
}
