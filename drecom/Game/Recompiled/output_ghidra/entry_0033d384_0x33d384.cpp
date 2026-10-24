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

// Function: entry_0033d384
// Address: 0x33d384 - 0x33d440
void entry_0033d384_0x33d384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d384_0x33d384");
#endif

    switch (ctx->pc) {
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3b4u: goto label_33d3b4;
        default: break;
    }

    ctx->pc = 0x33d384u;

    // 0x33d384: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d388: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d38c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33d38cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33d390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d394: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33d394u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d398: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x33D398u;
    SET_GPR_U32(ctx, 31, 0x33D3A0u);
    ctx->pc = 0x1DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE850u, 0x33D398u, 0x33D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3A0u;
label_33d3a0:
    // 0x33d3a0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33d3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33d3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d3a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d3ac: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x33D3ACu;
    SET_GPR_U32(ctx, 31, 0x33D3B4u);
    ctx->pc = 0x1DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE850u, 0x33D3ACu, 0x33D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3B4u;
label_33d3b4:
    // 0x33d3b4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3b8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3c0: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x33d3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33d3c4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3c8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3cc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3d0: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x33d3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x33d3d4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3d8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3dc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3e0: 0x24510240  addiu       $s1, $v0, 0x240
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x33d3e4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d3ec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3f0: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x33d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33d3f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33d3f8: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d3fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d400: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d404: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33d408: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33d40c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d410: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x33d410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33d414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d418: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x33d418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d41c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x33d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x33d420: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x33d424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d428: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d42c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x33d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x33d430: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d434: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x33d434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x33d438: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d43c: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x33d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    ctx->pc = 0x33d440u;
}
