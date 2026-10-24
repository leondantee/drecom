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

// Function: entry_002618ac
// Address: 0x2618ac - 0x261918
void entry_002618ac_0x2618ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002618ac_0x2618ac");
#endif

    switch (ctx->pc) {
        case 0x2618bcu: goto label_2618bc;
        case 0x2618dcu: goto label_2618dc;
        case 0x261900u: goto label_261900;
        default: break;
    }

    ctx->pc = 0x2618acu;

    // 0x2618ac: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2618acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618b0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2618b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618b4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2618B4u;
    SET_GPR_U32(ctx, 31, 0x2618BCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2618BCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2618BCu) { return; }
    ctx->pc = 0x2618BCu;
label_2618bc:
    // 0x2618bc: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2618bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2618c0: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x2618c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2618c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2618c8: 0x27b50190  addiu       $s5, $sp, 0x190
    ctx->pc = 0x2618c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618cc: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2618ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2618d0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2618d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618d4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2618D4u;
    SET_GPR_U32(ctx, 31, 0x2618DCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2618DCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2618DCu) { return; }
    ctx->pc = 0x2618DCu;
label_2618dc:
    // 0x2618dc: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x2618dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2618e0: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2618e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2618e4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2618e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2618e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2618ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2618f0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2618f4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2618f8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2618F8u;
    SET_GPR_U32(ctx, 31, 0x261900u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2618F8u, 0x261900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261900u;
label_261900:
    // 0x261900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x261900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261904: 0x0  nop
    ctx->pc = 0x261904u;
    // NOP
    // 0x261908: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x261908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26190c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26190cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261910: 0x0  nop
    ctx->pc = 0x261910u;
    // NOP
    // 0x261914: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x261914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    ctx->pc = 0x261918u;
}
