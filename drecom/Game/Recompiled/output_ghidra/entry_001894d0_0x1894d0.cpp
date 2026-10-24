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

// Function: entry_001894d0
// Address: 0x1894d0 - 0x18953c
void entry_001894d0_0x1894d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001894d0_0x1894d0");
#endif

    switch (ctx->pc) {
        case 0x1894ecu: goto label_1894ec;
        case 0x189508u: goto label_189508;
        default: break;
    }

    ctx->pc = 0x1894d0u;

    // 0x1894d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1894d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1894dc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1894e0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1894e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1894e4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1894E4u;
    SET_GPR_U32(ctx, 31, 0x1894ECu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1894E4u, 0x1894ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894ECu;
label_1894ec:
    // 0x1894ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1894f4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1894f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1894f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1894f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1894fc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1894fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189500: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x189500u;
    SET_GPR_U32(ctx, 31, 0x189508u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x189508u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189508u) { return; }
    ctx->pc = 0x189508u;
label_189508:
    // 0x189508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x189508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18950c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18950cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189514: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x189514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x189518: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x189518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18951c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x189520: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x189520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x189524: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x189524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x189528: 0xac8300f0  sw          $v1, 0xF0($a0)
    ctx->pc = 0x189528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
    // 0x18952c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x18952cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189534: 0x3e00008  jr          $ra
    ctx->pc = 0x189534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18953Cu;
}
