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

// Function: entry_00186668
// Address: 0x186668 - 0x1866f0
void entry_00186668_0x186668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186668_0x186668");
#endif

    switch (ctx->pc) {
        case 0x186678u: goto label_186678;
        case 0x186688u: goto label_186688;
        case 0x1866d0u: goto label_1866d0;
        default: break;
    }

    ctx->pc = 0x186668u;

    // 0x186668: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18666c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186670: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186670u;
    SET_GPR_U32(ctx, 31, 0x186678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186678u) { return; }
    ctx->pc = 0x186678u;
label_186678:
    // 0x186678: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x186678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18667c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186680: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186680u;
    SET_GPR_U32(ctx, 31, 0x186688u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186688u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186688u) { return; }
    ctx->pc = 0x186688u;
label_186688:
    // 0x186688: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x186688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18668c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186694: 0x0  nop
    ctx->pc = 0x186694u;
    // NOP
    // 0x186698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18669c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x18669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1866a0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1866a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1866a4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1866a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866ac: 0x0  nop
    ctx->pc = 0x1866acu;
    // NOP
    // 0x1866b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1866b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1866b4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1866b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1866b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1866b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1866bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1866bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1866c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1866c4: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1866c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1866c8: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x1866C8u;
    SET_GPR_U32(ctx, 31, 0x1866D0u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1866C8u, 0x1866D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1866D0u;
label_1866d0:
    // 0x1866d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1866d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1866d4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x1866F0u;
            return;
        }
    }
    ctx->pc = 0x1866DCu;
    // 0x1866dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1866dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1866e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1866e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1866e4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1866e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1866e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1866e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1866ec: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1866ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->pc = 0x1866f0u;
}
