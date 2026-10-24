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

// Function: entry_0013380c
// Address: 0x13380c - 0x133864
void entry_0013380c_0x13380c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013380c_0x13380c");
#endif

    switch (ctx->pc) {
        case 0x133814u: goto label_133814;
        case 0x13383cu: goto label_13383c;
        default: break;
    }

    ctx->pc = 0x13380cu;

    // 0x13380c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x13380Cu;
    SET_GPR_U32(ctx, 31, 0x133814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13380Cu, 0x133814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133814u;
label_133814:
    // 0x133814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133818: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x133818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13381c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133864u;
            return;
        }
    }
    ctx->pc = 0x133824u;
    // 0x133824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133828: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13382c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133830: 0x244501f0  addiu       $a1, $v0, 0x1F0
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x133834: 0xc040c9e  jal         func_103278
    ctx->pc = 0x133834u;
    SET_GPR_U32(ctx, 31, 0x13383Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13383Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13383Cu) { return; }
    ctx->pc = 0x13383Cu;
label_13383c:
    // 0x13383c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x13383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133840: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x133844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133848: 0x0  nop
    ctx->pc = 0x133848u;
    // NOP
    // 0x13384c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13384cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133850: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x133850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x133854: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133858: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13385c: 0xc086158  jal         func_218560
    ctx->pc = 0x13385Cu;
    SET_GPR_U32(ctx, 31, 0x133864u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x13385Cu, 0x133864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133864u;
}
