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

// Function: entry_001337b4
// Address: 0x1337b4 - 0x13380c
void entry_001337b4_0x1337b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001337b4_0x1337b4");
#endif

    switch (ctx->pc) {
        case 0x1337bcu: goto label_1337bc;
        case 0x1337e4u: goto label_1337e4;
        default: break;
    }

    ctx->pc = 0x1337b4u;

    // 0x1337b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1337B4u;
    SET_GPR_U32(ctx, 31, 0x1337BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1337B4u, 0x1337BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337BCu;
label_1337bc:
    // 0x1337bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1337bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1337c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1337c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1337c4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1337C4u;
    {
        const bool branch_taken_0x1337c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337c4) {
            ctx->pc = 0x13380Cu;
            return;
        }
    }
    ctx->pc = 0x1337CCu;
    // 0x1337cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1337d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1337d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1337d8: 0x24450370  addiu       $a1, $v0, 0x370
    ctx->pc = 0x1337d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x1337dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1337DCu;
    SET_GPR_U32(ctx, 31, 0x1337E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1337E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1337E4u) { return; }
    ctx->pc = 0x1337E4u;
label_1337e4:
    // 0x1337e4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1337e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1337e8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1337e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1337ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1337ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1337f0: 0x0  nop
    ctx->pc = 0x1337f0u;
    // NOP
    // 0x1337f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1337f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1337f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1337f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1337fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133800: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x133804: 0xc086158  jal         func_218560
    ctx->pc = 0x133804u;
    SET_GPR_U32(ctx, 31, 0x13380Cu);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x133804u, 0x13380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13380Cu;
}
