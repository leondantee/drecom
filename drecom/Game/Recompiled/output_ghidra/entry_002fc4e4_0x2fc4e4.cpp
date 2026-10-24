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

// Function: entry_002fc4e4
// Address: 0x2fc4e4 - 0x2fc518
void entry_002fc4e4_0x2fc4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc4e4_0x2fc4e4");
#endif

    switch (ctx->pc) {
        case 0x2fc4ecu: goto label_2fc4ec;
        default: break;
    }

    ctx->pc = 0x2fc4e4u;

    // 0x2fc4e4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC4E4u;
    SET_GPR_U32(ctx, 31, 0x2FC4ECu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC4E4u, 0x2FC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4ECu;
label_2fc4ec:
    // 0x2fc4ec: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x2fc4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
    // 0x2fc4f0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2fc4f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4f4: 0x0  nop
    ctx->pc = 0x2fc4f4u;
    // NOP
    // 0x2fc4f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc4fc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2fc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2fc500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc504: 0x0  nop
    ctx->pc = 0x2fc504u;
    // NOP
    // 0x2fc508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc50c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc510: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FC510u;
    {
        const bool branch_taken_0x2fc510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc510) {
            ctx->pc = 0x2FC578u;
            return;
        }
    }
    ctx->pc = 0x2FC518u;
}
