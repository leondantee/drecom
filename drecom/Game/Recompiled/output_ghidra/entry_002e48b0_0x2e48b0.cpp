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

// Function: entry_002e48b0
// Address: 0x2e48b0 - 0x2e48dc
void entry_002e48b0_0x2e48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e48b0_0x2e48b0");
#endif

    switch (ctx->pc) {
        case 0x2e48d0u: goto label_2e48d0;
        default: break;
    }

    ctx->pc = 0x2e48b0u;

    // 0x2e48b0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2e48b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e48b4: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2e48b8: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2e48b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2e48bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e48bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e48c0: 0x0  nop
    ctx->pc = 0x2e48c0u;
    // NOP
    // 0x2e48c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e48c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e48c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E48C8u;
    SET_GPR_U32(ctx, 31, 0x2E48D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E48C8u, 0x2E48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48D0u;
label_2e48d0:
    // 0x2e48d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2e48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2e48d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E48D4u;
    {
        const bool branch_taken_0x2e48d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48d4) {
            ctx->pc = 0x2E4900u;
            return;
        }
    }
    ctx->pc = 0x2E48DCu;
}
