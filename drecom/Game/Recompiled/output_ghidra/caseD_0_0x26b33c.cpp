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

// Function: caseD_0
// Address: 0x26b33c - 0x26b440
void caseD_0_0x26b33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26b33c");
#endif

    switch (ctx->pc) {
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3d4u: goto label_26b3d4;
        default: break;
    }

    ctx->pc = 0x26b33cu;

    // 0x26b33c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26b340: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26b344: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x26b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x26b348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26b34c: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x26b34cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26b350: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26b354: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b358: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26b358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b360: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b364: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x26b368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b36c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b370: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26b370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26b374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b37c: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26b380: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b384: 0xace01b64  sw          $zero, 0x1B64($a3)
    ctx->pc = 0x26b384u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7012), GPR_U32(ctx, 0));
    // 0x26b388: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b38c: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x26b38cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x26b390: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b394: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x26b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b398: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26b398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b39c: 0xe5001290  swc1        $f0, 0x1290($t0)
    ctx->pc = 0x26b39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4752), bits); }
    // 0x26b3a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b3a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b3a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26b3ac: 0x24060a82  addiu       $a2, $zero, 0xA82
    ctx->pc = 0x26b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2690));
    // 0x26b3b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b3b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26b3b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26B3B8u;
    SET_GPR_U32(ctx, 31, 0x26B3C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B3B8u, 0x26B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3C0u;
label_26b3c0:
    // 0x26b3c0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26b3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b3c4: 0x24e50120  addiu       $a1, $a3, 0x120
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x26b3c8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26b3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26b3cc: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x26B3CCu;
    SET_GPR_U32(ctx, 31, 0x26B3D4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26B3CCu, 0x26B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B3D4u;
label_26b3d4:
    // 0x26b3d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26b3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b3d8: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x26b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b3dc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x26b3e0: 0x34484000  ori         $t0, $v0, 0x4000
    ctx->pc = 0x26b3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26b3e4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x26b3e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b3e8: 0x0  nop
    ctx->pc = 0x26b3e8u;
    // NOP
    // 0x26b3ec: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x26b3ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26b3f0: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x26b3f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26b3f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b3f8: 0x0  nop
    ctx->pc = 0x26b3f8u;
    // NOP
    // 0x26b3fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26b3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26b400: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26b400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26b404: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x26b408: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x26b408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b40c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x26b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x26b410: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x26b410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26b414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26b414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b418: 0x0  nop
    ctx->pc = 0x26b418u;
    // NOP
    // 0x26b41c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26b41cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b420: 0x0  nop
    ctx->pc = 0x26b420u;
    // NOP
    // 0x26b424: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26B424u;
    {
        const bool branch_taken_0x26b424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b424) {
            ctx->pc = 0x26B440u;
            return;
        }
    }
    ctx->pc = 0x26B42Cu;
    // 0x26b42c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x26b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x26b430: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26b430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b438: 0x0  nop
    ctx->pc = 0x26b438u;
    // NOP
    // 0x26b43c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x26b440u;
}
