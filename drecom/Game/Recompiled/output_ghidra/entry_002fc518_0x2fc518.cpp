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

// Function: entry_002fc518
// Address: 0x2fc518 - 0x2fc54c
void entry_002fc518_0x2fc518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc518_0x2fc518");
#endif

    switch (ctx->pc) {
        case 0x2fc520u: goto label_2fc520;
        default: break;
    }

    ctx->pc = 0x2fc518u;

    // 0x2fc518: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC518u;
    SET_GPR_U32(ctx, 31, 0x2FC520u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC518u, 0x2FC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC520u;
label_2fc520:
    // 0x2fc520: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2fc524: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fc524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc528: 0x0  nop
    ctx->pc = 0x2fc528u;
    // NOP
    // 0x2fc52c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc530: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x2fc530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
    // 0x2fc534: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc534u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc538: 0x0  nop
    ctx->pc = 0x2fc538u;
    // NOP
    // 0x2fc53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc540: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc544: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FC544u;
    {
        const bool branch_taken_0x2fc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc544) {
            ctx->pc = 0x2FC578u;
            return;
        }
    }
    ctx->pc = 0x2FC54Cu;
}
