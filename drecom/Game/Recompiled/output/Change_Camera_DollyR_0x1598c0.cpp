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

// Function: Change_Camera_DollyR
// Address: 0x1598c0 - 0x1599f8
void Change_Camera_DollyR_0x1598c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_DollyR_0x1598c0");
#endif

    switch (ctx->pc) {
        case 0x1598f0u: goto label_1598f0;
        case 0x159928u: goto label_159928;
        case 0x159944u: goto label_159944;
        case 0x159960u: goto label_159960;
        case 0x1599b8u: goto label_1599b8;
        case 0x1599d4u: goto label_1599d4;
        case 0x1599e0u: goto label_1599e0;
        default: break;
    }

    ctx->pc = 0x1598c0u;

    // 0x1598c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1598c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1598c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1598c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1598c8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1598c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1598cc: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1598ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x1598d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1598d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1598d4: 0x0  nop
    ctx->pc = 0x1598d4u;
    // NOP
    // 0x1598d8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1598d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1598dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1598e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1598e4: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1598e8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1598E8u;
    SET_GPR_U32(ctx, 31, 0x1598F0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1598F0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1598F0u) { return; }
    ctx->pc = 0x1598F0u;
label_1598f0:
    // 0x1598f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1598f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1598f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1598f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1598f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1598f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1598fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x159900: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x159900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159904: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159908: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x159908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15990c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159910: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x159914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159918: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15991c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159920: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159920u;
    SET_GPR_U32(ctx, 31, 0x159928u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159928u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159928u) { return; }
    ctx->pc = 0x159928u;
label_159928:
    // 0x159928: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15992c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159930: 0x24640190  addiu       $a0, $v1, 0x190
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x159934: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x159934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x159938: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15993c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x15993Cu;
    SET_GPR_U32(ctx, 31, 0x159944u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x159944u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159944u) { return; }
    ctx->pc = 0x159944u;
label_159944:
    // 0x159944: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159948: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15994c: 0x246401a0  addiu       $a0, $v1, 0x1A0
    ctx->pc = 0x15994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x159950: 0x244501a0  addiu       $a1, $v0, 0x1A0
    ctx->pc = 0x159950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x159954: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159958: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x159958u;
    SET_GPR_U32(ctx, 31, 0x159960u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x159960u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159960u) { return; }
    ctx->pc = 0x159960u;
label_159960:
    // 0x159960: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159964: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x159964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159968: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159968u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15996c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x15996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159970: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159974: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159978: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159978u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15997c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159980: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159984: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x159984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159988: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x159988u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15998c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x15998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159994: 0x0  nop
    ctx->pc = 0x159994u;
    // NOP
    // 0x159998: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15999c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599a0: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1599a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1599a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1599a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599a8: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1599ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1599b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1599B0u;
    SET_GPR_U32(ctx, 31, 0x1599B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1599B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1599B8u) { return; }
    ctx->pc = 0x1599B8u;
label_1599b8:
    // 0x1599b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1599b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1599bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1599bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1599c0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599c4: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x1599c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x1599c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599cc: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x1599CCu;
    SET_GPR_U32(ctx, 31, 0x1599D4u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x1599CCu, 0x1599D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599D4u;
label_1599d4:
    // 0x1599d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599d8: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x1599D8u;
    SET_GPR_U32(ctx, 31, 0x1599E0u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x1599D8u, 0x1599E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599E0u;
label_1599e0:
    // 0x1599e0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1599e4: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x1599e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x1599e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1599e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1599ec: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1599ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1599f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1599F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1599F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1599F8u;
}
