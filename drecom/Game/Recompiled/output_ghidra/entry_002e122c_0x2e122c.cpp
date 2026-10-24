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

// Function: entry_002e122c
// Address: 0x2e122c - 0x2e1264
void entry_002e122c_0x2e122c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e122c_0x2e122c");
#endif

    switch (ctx->pc) {
        case 0x2e1234u: goto label_2e1234;
        default: break;
    }

    ctx->pc = 0x2e122cu;

    // 0x2e122c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E122Cu;
    SET_GPR_U32(ctx, 31, 0x2E1234u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E122Cu, 0x2E1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1234u;
label_2e1234:
    // 0x2e1234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e123c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E123Cu;
    {
        const bool branch_taken_0x2e123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e123c) {
            ctx->pc = 0x2E1264u;
            return;
        }
    }
    ctx->pc = 0x2E1244u;
    // 0x2e1244: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1248: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1250: 0x0  nop
    ctx->pc = 0x2e1250u;
    // NOP
    // 0x2e1254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1258: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e1258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e125c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E125Cu;
    {
        const bool branch_taken_0x2e125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e125c) {
            ctx->pc = 0x2E127Cu;
            return;
        }
    }
    ctx->pc = 0x2E1264u;
}
