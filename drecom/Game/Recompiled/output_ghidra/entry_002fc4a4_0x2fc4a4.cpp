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

// Function: entry_002fc4a4
// Address: 0x2fc4a4 - 0x2fc4e4
void entry_002fc4a4_0x2fc4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc4a4_0x2fc4a4");
#endif

    switch (ctx->pc) {
        case 0x2fc4acu: goto label_2fc4ac;
        default: break;
    }

    ctx->pc = 0x2fc4a4u;

    // 0x2fc4a4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FC4A4u;
    SET_GPR_U32(ctx, 31, 0x2FC4ACu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FC4A4u, 0x2FC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4ACu;
label_2fc4ac:
    // 0x2fc4ac: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x2fc4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x2fc4b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fc4b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fc4b4: 0x0  nop
    ctx->pc = 0x2fc4b4u;
    // NOP
    // 0x2fc4b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fc4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fc4bc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2fc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2fc4c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc4c4: 0x0  nop
    ctx->pc = 0x2fc4c4u;
    // NOP
    // 0x2fc4c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fc4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fc4cc: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2fc4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2fc4d0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x2fc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fc4d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fc4d8: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2fc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x2fc4dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FC4DCu;
    {
        const bool branch_taken_0x2fc4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc4dc) {
            ctx->pc = 0x2FC578u;
            return;
        }
    }
    ctx->pc = 0x2FC4E4u;
}
