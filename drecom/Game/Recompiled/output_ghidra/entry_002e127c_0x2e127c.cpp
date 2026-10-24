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

// Function: entry_002e127c
// Address: 0x2e127c - 0x2e12b4
void entry_002e127c_0x2e127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e127c_0x2e127c");
#endif

    switch (ctx->pc) {
        case 0x2e1284u: goto label_2e1284;
        default: break;
    }

    ctx->pc = 0x2e127cu;

    // 0x2e127c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E127Cu;
    SET_GPR_U32(ctx, 31, 0x2E1284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E127Cu, 0x2E1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1284u;
label_2e1284:
    // 0x2e1284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e128c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E128Cu;
    {
        const bool branch_taken_0x2e128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e128c) {
            ctx->pc = 0x2E12B4u;
            return;
        }
    }
    ctx->pc = 0x2E1294u;
    // 0x2e1294: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2e1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1298: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e1298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e12a0: 0x0  nop
    ctx->pc = 0x2e12a0u;
    // NOP
    // 0x2e12a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e12a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e12a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e12a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e12ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E12ACu;
    {
        const bool branch_taken_0x2e12ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12ac) {
            ctx->pc = 0x2E12CCu;
            return;
        }
    }
    ctx->pc = 0x2E12B4u;
}
