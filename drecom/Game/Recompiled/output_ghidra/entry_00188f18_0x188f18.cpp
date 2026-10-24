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

// Function: entry_00188f18
// Address: 0x188f18 - 0x188f44
void entry_00188f18_0x188f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188f18_0x188f18");
#endif

    switch (ctx->pc) {
        case 0x188f38u: goto label_188f38;
        default: break;
    }

    ctx->pc = 0x188f18u;

    // 0x188f18: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x188f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x188f1c: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x188F1Cu;
    {
        const bool branch_taken_0x188f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f1c) {
            ctx->pc = 0x188E1Cu;
            return;
        }
    }
    ctx->pc = 0x188F24u;
    // 0x188f24: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x188f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x188f28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188f2c: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x188f30: 0xc06224c  jal         func_188930
    ctx->pc = 0x188F30u;
    SET_GPR_U32(ctx, 31, 0x188F38u);
    ctx->pc = 0x188930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188930u, 0x188F30u, 0x188F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F38u;
label_188f38:
    // 0x188f38: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188f3c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f40: 0x0  nop
    ctx->pc = 0x188f40u;
    // NOP
    ctx->pc = 0x188f44u;
}
