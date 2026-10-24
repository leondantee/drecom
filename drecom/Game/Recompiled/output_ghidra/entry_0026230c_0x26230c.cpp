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

// Function: entry_0026230c
// Address: 0x26230c - 0x262378
void entry_0026230c_0x26230c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026230c_0x26230c");
#endif

    switch (ctx->pc) {
        case 0x26231cu: goto label_26231c;
        case 0x26233cu: goto label_26233c;
        case 0x262360u: goto label_262360;
        default: break;
    }

    ctx->pc = 0x26230cu;

    // 0x26230c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262310: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262314: 0xc040c24  jal         func_103090
    ctx->pc = 0x262314u;
    SET_GPR_U32(ctx, 31, 0x26231Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x26231Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26231Cu) { return; }
    ctx->pc = 0x26231Cu;
label_26231c:
    // 0x26231c: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x26231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262320: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x262320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262324: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x262324u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x262328: 0x27b50190  addiu       $s5, $sp, 0x190
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x26232c: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x26232cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x262330: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262334: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x262334u;
    SET_GPR_U32(ctx, 31, 0x26233Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26233Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26233Cu) { return; }
    ctx->pc = 0x26233Cu;
label_26233c:
    // 0x26233c: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x262340: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x262344: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x262344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x262348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x262348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26234c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x26234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x262350: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x262350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x262354: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x262354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x262358: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x262358u;
    SET_GPR_U32(ctx, 31, 0x262360u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x262358u, 0x262360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262360u;
label_262360:
    // 0x262360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262364: 0x0  nop
    ctx->pc = 0x262364u;
    // NOP
    // 0x262368: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x262368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x26236c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26236cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262370: 0x0  nop
    ctx->pc = 0x262370u;
    // NOP
    // 0x262374: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x262374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    ctx->pc = 0x262378u;
}
