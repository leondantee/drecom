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
// Address: 0x26f31c - 0x26f3f0
void caseD_0_0x26f31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x26f31c");
#endif

    switch (ctx->pc) {
        case 0x26f358u: goto label_26f358;
        case 0x26f3e0u: goto label_26f3e0;
        default: break;
    }

    ctx->pc = 0x26f31cu;

    // 0x26f31c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26f320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f324: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26f324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f328: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f32c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x26f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f334: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26f334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26f338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f33c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f340: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f344: 0x24061e6c  addiu       $a2, $zero, 0x1E6C
    ctx->pc = 0x26f344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7788));
    // 0x26f348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f34c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f350: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F350u;
    SET_GPR_U32(ctx, 31, 0x26F358u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F350u, 0x26F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F358u;
label_26f358:
    // 0x26f358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26f35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f364: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26f364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26f368: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x26f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x26f36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26f36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f370: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f374: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26f378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f37c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26f380: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26f384: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f388: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26f388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26f38c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f390: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26f390u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x26f394: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x26f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26f398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f39c: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26f39cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x26f3a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f3a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26f3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26f3a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26f3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26f3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26f3b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26f3b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f3b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f3bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26f3c0: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x26f3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
    // 0x26f3c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f3c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f3c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f3cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26f3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f3d0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x26f3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26f3d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26f3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f3d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x26F3D8u;
    SET_GPR_U32(ctx, 31, 0x26F3E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26F3D8u, 0x26F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3E0u;
label_26f3e0:
    // 0x26f3e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f3e4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26f3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f3ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x26f3f0u;
}
