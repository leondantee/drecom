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

// Function: entry_00133864
// Address: 0x133864 - 0x1338c4
void entry_00133864_0x133864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133864_0x133864");
#endif

    switch (ctx->pc) {
        case 0x13386cu: goto label_13386c;
        case 0x133894u: goto label_133894;
        case 0x1338bcu: goto label_1338bc;
        default: break;
    }

    ctx->pc = 0x133864u;

    // 0x133864: 0xc067694  jal         func_19DA50
    ctx->pc = 0x133864u;
    SET_GPR_U32(ctx, 31, 0x13386Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x133864u, 0x13386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13386Cu;
label_13386c:
    // 0x13386c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13386cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133870: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x133870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x133874: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x133874u;
    {
        const bool branch_taken_0x133874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133874) {
            ctx->pc = 0x133938u;
            return;
        }
    }
    ctx->pc = 0x13387Cu;
    // 0x13387c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133880: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133884: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133888: 0x244502f0  addiu       $a1, $v0, 0x2F0
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x13388c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13388Cu;
    SET_GPR_U32(ctx, 31, 0x133894u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x133894u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x133894u) { return; }
    ctx->pc = 0x133894u;
label_133894:
    // 0x133894: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x133894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133898: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x13389c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13389cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1338a0: 0x0  nop
    ctx->pc = 0x1338a0u;
    // NOP
    // 0x1338a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1338a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1338a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1338a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1338ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1338b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1338b4: 0xc086158  jal         func_218560
    ctx->pc = 0x1338B4u;
    SET_GPR_U32(ctx, 31, 0x1338BCu);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x1338B4u, 0x1338BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338BCu;
label_1338bc:
    // 0x1338bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1338BCu;
    {
        const bool branch_taken_0x1338bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338bc) {
            ctx->pc = 0x133938u;
            return;
        }
    }
    ctx->pc = 0x1338C4u;
}
