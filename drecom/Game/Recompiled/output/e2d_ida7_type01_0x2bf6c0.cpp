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

// Function: e2d_ida7_type01
// Address: 0x2bf6c0 - 0x2bf7d8
void e2d_ida7_type01_0x2bf6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida7_type01_0x2bf6c0");
#endif

    switch (ctx->pc) {
        case 0x2bf714u: goto label_2bf714;
        default: break;
    }

    ctx->pc = 0x2bf6c0u;

    // 0x2bf6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf6c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf6c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf6cc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf6d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf6d8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf6dc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf6e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf6e8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf6ec: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf6f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf6f8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf6fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bf700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf704: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf708: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bf708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bf70c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BF70Cu;
    SET_GPR_U32(ctx, 31, 0x2BF714u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BF70Cu, 0x2BF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF714u;
label_2bf714:
    // 0x2bf714: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bf714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bf718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf71c: 0x0  nop
    ctx->pc = 0x2bf71cu;
    // NOP
    // 0x2bf720: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf724: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2bf724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2bf728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf72c: 0x0  nop
    ctx->pc = 0x2bf72cu;
    // NOP
    // 0x2bf730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf738: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf73c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x2bf73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x2bf740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf748: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2bf748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2bf74c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2bf74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf758: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bf758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bf75c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2bf75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2bf760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf768: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bf768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bf76c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bf76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf778: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bf778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bf77c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2bf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2bf780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf788: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bf788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bf78c: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x2bf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
    // 0x2bf790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf798: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bf798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bf79c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2bf79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2bf7a0: 0x24648e80  addiu       $a0, $v1, -0x7180
    ctx->pc = 0x2bf7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938240));
    // 0x2bf7a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf7a8: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2bf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x2bf7ac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2bf7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2bf7b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf7b4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x2bf7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2bf7b8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf7c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf7c4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2bf7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2bf7c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf7c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf7cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF7D8u;
}
