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

// Function: entry_0034c32c
// Address: 0x34c32c - 0x34c450
void entry_0034c32c_0x34c32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c32c_0x34c32c");
#endif

    switch (ctx->pc) {
        case 0x34c3a0u: goto label_34c3a0;
        case 0x34c424u: goto label_34c424;
        case 0x34c430u: goto label_34c430;
        default: break;
    }

    ctx->pc = 0x34c32cu;

    // 0x34c32c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c330: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x34c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c334: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x34c334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x34c338: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x34c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x34c33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c340: 0x0  nop
    ctx->pc = 0x34c340u;
    // NOP
    // 0x34c344: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x34c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x34c348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c34c: 0x0  nop
    ctx->pc = 0x34c34cu;
    // NOP
    // 0x34c350: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x34c350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x34c354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c358: 0x0  nop
    ctx->pc = 0x34c358u;
    // NOP
    // 0x34c35c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x34c35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x34c360: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c368: 0x0  nop
    ctx->pc = 0x34c368u;
    // NOP
    // 0x34c36c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x34c36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x34c370: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x34c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x34c374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c378: 0x0  nop
    ctx->pc = 0x34c378u;
    // NOP
    // 0x34c37c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x34c37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34c380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c384: 0xa7a20094  sh          $v0, 0x94($sp)
    ctx->pc = 0x34c384u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x34c388: 0xa3a00096  sb          $zero, 0x96($sp)
    ctx->pc = 0x34c388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c38c: 0xa3a00097  sb          $zero, 0x97($sp)
    ctx->pc = 0x34c38cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c390: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c394: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34c398: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x34C398u;
    SET_GPR_U32(ctx, 31, 0x34C3A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x34C398u, 0x34C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C3A0u;
label_34c3a0:
    // 0x34c3a0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x34C3A0u;
    {
        const bool branch_taken_0x34c3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c3a0) {
            ctx->pc = 0x34C4E8u;
            return;
        }
    }
    ctx->pc = 0x34C3A8u;
    // 0x34c3a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3ac: 0x0  nop
    ctx->pc = 0x34c3acu;
    // NOP
    // 0x34c3b0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x34c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34c3b4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x34c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x34c3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3bc: 0x0  nop
    ctx->pc = 0x34c3bcu;
    // NOP
    // 0x34c3c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x34c3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3c8: 0x0  nop
    ctx->pc = 0x34c3c8u;
    // NOP
    // 0x34c3cc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x34c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34c3d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c3d8: 0x0  nop
    ctx->pc = 0x34c3d8u;
    // NOP
    // 0x34c3dc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x34c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x34c3e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c3e4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x34c3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c3e8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x34c3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x34c3ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c3f0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x34c3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x34c3f4: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x34c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x34c3f8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x34c3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x34c3fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34c400: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x34c400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34c404: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c408: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c40c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x34c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c410: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c410u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c414: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c418: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c418u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c41c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C41Cu;
    SET_GPR_U32(ctx, 31, 0x34C424u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C41Cu, 0x34C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C424u;
label_34c424:
    // 0x34c424: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c424u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c428: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C428u;
    SET_GPR_U32(ctx, 31, 0x34C430u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C428u, 0x34C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C430u;
label_34c430:
    // 0x34c430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c434: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C434u;
    {
        const bool branch_taken_0x34c434 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34c434) {
            ctx->pc = 0x34C450u;
            return;
        }
    }
    ctx->pc = 0x34C43Cu;
    // 0x34c43c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c43cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c440: 0x0  nop
    ctx->pc = 0x34c440u;
    // NOP
    // 0x34c444: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C448u;
    {
        const bool branch_taken_0x34c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c448) {
            ctx->pc = 0x34C46Cu;
            return;
        }
    }
    ctx->pc = 0x34C450u;
}
