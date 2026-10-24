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

// Function: entry_00159180
// Address: 0x159180 - 0x159220
void entry_00159180_0x159180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159180_0x159180");
#endif

    switch (ctx->pc) {
        case 0x15919cu: goto label_15919c;
        case 0x1591f4u: goto label_1591f4;
        case 0x159210u: goto label_159210;
        default: break;
    }

    ctx->pc = 0x159180u;

    // 0x159180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159184: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159188: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15918c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x159190: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x159190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x159194: 0xc040d62  jal         func_103588
    ctx->pc = 0x159194u;
    SET_GPR_U32(ctx, 31, 0x15919Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x15919Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15919Cu) { return; }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591a0: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x1591a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1591a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1591ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591b0: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x1591b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1591b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1591bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591c0: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x1591c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1591c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1591cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1591ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1591d0: 0x0  nop
    ctx->pc = 0x1591d0u;
    // NOP
    // 0x1591d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1591d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1591d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591dc: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1591dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1591e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591e4: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x1591e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1591e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1591e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1591ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1591ECu;
    SET_GPR_U32(ctx, 31, 0x1591F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1591F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1591F4u) { return; }
    ctx->pc = 0x1591F4u;
label_1591f4:
    // 0x1591f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1591f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1591f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1591fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159200: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159204: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159208: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159208u;
    SET_GPR_U32(ctx, 31, 0x159210u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159208u, 0x159210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159210u;
label_159210:
    // 0x159210: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159214: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159218: 0x3e00008  jr          $ra
    ctx->pc = 0x159218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159220u;
}
