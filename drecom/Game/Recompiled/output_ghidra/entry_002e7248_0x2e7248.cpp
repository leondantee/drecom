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

// Function: entry_002e7248
// Address: 0x2e7248 - 0x2e7280
void entry_002e7248_0x2e7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7248_0x2e7248");
#endif

    switch (ctx->pc) {
        case 0x2e7250u: goto label_2e7250;
        default: break;
    }

    ctx->pc = 0x2e7248u;

    // 0x2e7248: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7248u;
    SET_GPR_U32(ctx, 31, 0x2E7250u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7248u, 0x2E7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7250u;
label_2e7250:
    // 0x2e7250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e7254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e7258: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7258u;
    {
        const bool branch_taken_0x2e7258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7258) {
            ctx->pc = 0x2E7280u;
            return;
        }
    }
    ctx->pc = 0x2E7260u;
    // 0x2e7260: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2e7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e7268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e726c: 0x0  nop
    ctx->pc = 0x2e726cu;
    // NOP
    // 0x2e7270: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e7274: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e7274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e7278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7278u;
    {
        const bool branch_taken_0x2e7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7278) {
            ctx->pc = 0x2E7298u;
            return;
        }
    }
    ctx->pc = 0x2E7280u;
}
