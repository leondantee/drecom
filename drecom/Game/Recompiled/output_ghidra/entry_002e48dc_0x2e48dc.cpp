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

// Function: entry_002e48dc
// Address: 0x2e48dc - 0x2e4900
void entry_002e48dc_0x2e48dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e48dc_0x2e48dc");
#endif

    switch (ctx->pc) {
        case 0x2e48fcu: goto label_2e48fc;
        default: break;
    }

    ctx->pc = 0x2e48dcu;

    // 0x2e48dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2e48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e48e0: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2e48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2e48e4: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2e48e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2e48e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e48e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e48ec: 0x0  nop
    ctx->pc = 0x2e48ecu;
    // NOP
    // 0x2e48f0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e48f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e48f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E48F4u;
    SET_GPR_U32(ctx, 31, 0x2E48FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E48F4u, 0x2E48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48FCu;
label_2e48fc:
    // 0x2e48fc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2e48fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x2e4900u;
}
