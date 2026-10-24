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

// Function: entry_002e71f8
// Address: 0x2e71f8 - 0x2e7230
void entry_002e71f8_0x2e71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e71f8_0x2e71f8");
#endif

    switch (ctx->pc) {
        case 0x2e7200u: goto label_2e7200;
        default: break;
    }

    ctx->pc = 0x2e71f8u;

    // 0x2e71f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E71F8u;
    SET_GPR_U32(ctx, 31, 0x2E7200u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E71F8u, 0x2E7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7200u;
label_2e7200:
    // 0x2e7200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e7204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e7208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7208u;
    {
        const bool branch_taken_0x2e7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7208) {
            ctx->pc = 0x2E7230u;
            return;
        }
    }
    ctx->pc = 0x2E7210u;
    // 0x2e7210: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2e7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7214: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e7218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e721c: 0x0  nop
    ctx->pc = 0x2e721cu;
    // NOP
    // 0x2e7220: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7224: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e7224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e7228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7228u;
    {
        const bool branch_taken_0x2e7228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7228) {
            ctx->pc = 0x2E7248u;
            return;
        }
    }
    ctx->pc = 0x2E7230u;
}
