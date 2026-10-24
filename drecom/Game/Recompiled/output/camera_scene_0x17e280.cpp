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

// Function: camera_scene
// Address: 0x17e280 - 0x17e350
void camera_scene_0x17e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_scene_0x17e280");
#endif

    switch (ctx->pc) {
        case 0x17e328u: goto label_17e328;
        default: break;
    }

    ctx->pc = 0x17e280u;

    // 0x17e280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e284: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17e284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17e288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e28c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17e290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e294: 0x8c30006c  lw          $s0, 0x6C($at)
    ctx->pc = 0x17e294u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x17e298: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x17e298u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17e29c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e2a0: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x17e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x17e2a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e2a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e2ac: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e2b0: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17e2b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e2b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e2bc: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x17e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x17e2c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17e2c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e2c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e2c8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e2cc: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x17e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x17e2d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17e2d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e2d8: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e2dc: 0xc4610190  lwc1        $f1, 0x190($v1)
    ctx->pc = 0x17e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e2e0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x17e2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e2e8: 0x0  nop
    ctx->pc = 0x17e2e8u;
    // NOP
    // 0x17e2ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17e2ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17e2f0: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x17e2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
    // 0x17e2f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e2f8: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e2fc: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x17e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e300: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x17e304: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17e308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e30c: 0x0  nop
    ctx->pc = 0x17e30cu;
    // NOP
    // 0x17e310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17e310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17e314: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x17e314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x17e318: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e31c: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e320: 0xc056518  jal         func_159460
    ctx->pc = 0x17E320u;
    SET_GPR_U32(ctx, 31, 0x17E328u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17E320u, 0x17E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E328u;
label_17e328:
    // 0x17e328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e32c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x17e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x17e330: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e334: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e338: 0xac640168  sw          $a0, 0x168($v1)
    ctx->pc = 0x17e338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 4));
    // 0x17e33c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17e33cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e344: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17e344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e348: 0x3e00008  jr          $ra
    ctx->pc = 0x17E348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E350u;
}
