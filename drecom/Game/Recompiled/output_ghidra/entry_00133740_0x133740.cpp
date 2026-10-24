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

// Function: entry_00133740
// Address: 0x133740 - 0x1337b4
void entry_00133740_0x133740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133740_0x133740");
#endif

    switch (ctx->pc) {
        case 0x133764u: goto label_133764;
        case 0x13378cu: goto label_13378c;
        default: break;
    }

    ctx->pc = 0x133740u;

    // 0x133740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133744: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133748: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x133748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13374c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13374cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x133750: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x133754: 0x14200078  bnez        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x133754u;
    {
        const bool branch_taken_0x133754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x133754) {
            ctx->pc = 0x133938u;
            return;
        }
    }
    ctx->pc = 0x13375Cu;
    // 0x13375c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x13375Cu;
    SET_GPR_U32(ctx, 31, 0x133764u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13375Cu, 0x133764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x133764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133768: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x133768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13376c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13376Cu;
    {
        const bool branch_taken_0x13376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13376c) {
            ctx->pc = 0x1337B4u;
            return;
        }
    }
    ctx->pc = 0x133774u;
    // 0x133774: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133778: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13377c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133780: 0x24450270  addiu       $a1, $v0, 0x270
    ctx->pc = 0x133780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x133784: 0xc040c9e  jal         func_103278
    ctx->pc = 0x133784u;
    SET_GPR_U32(ctx, 31, 0x13378Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13378Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13378Cu) { return; }
    ctx->pc = 0x13378Cu;
label_13378c:
    // 0x13378c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x13378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133790: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x133794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133798: 0x0  nop
    ctx->pc = 0x133798u;
    // NOP
    // 0x13379c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13379cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1337a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1337a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1337a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1337a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1337a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1337ac: 0xc086158  jal         func_218560
    ctx->pc = 0x1337ACu;
    SET_GPR_U32(ctx, 31, 0x1337B4u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x1337ACu, 0x1337B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337B4u;
}
