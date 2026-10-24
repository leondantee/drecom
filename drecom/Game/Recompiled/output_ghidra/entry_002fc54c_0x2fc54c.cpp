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

// Function: entry_002fc54c
// Address: 0x2fc54c - 0x2fc578
void entry_002fc54c_0x2fc54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc54c_0x2fc54c");
#endif

    switch (ctx->pc) {
        case 0x2fc554u: goto label_2fc554;
        default: break;
    }

    ctx->pc = 0x2fc54cu;

    // 0x2fc54c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC54Cu;
    SET_GPR_U32(ctx, 31, 0x2FC554u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC54Cu, 0x2FC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC554u;
label_2fc554:
    // 0x2fc554: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2fc554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2fc558: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc55c: 0x0  nop
    ctx->pc = 0x2fc55cu;
    // NOP
    // 0x2fc560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc564: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2fc564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2fc568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc56c: 0x0  nop
    ctx->pc = 0x2fc56cu;
    // NOP
    // 0x2fc570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc574: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    ctx->pc = 0x2fc578u;
}
