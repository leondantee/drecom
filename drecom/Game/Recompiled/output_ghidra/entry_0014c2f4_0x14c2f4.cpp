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

// Function: entry_0014c2f4
// Address: 0x14c2f4 - 0x14c454
void entry_0014c2f4_0x14c2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c2f4_0x14c2f4");
#endif

    switch (ctx->pc) {
        case 0x14c314u: goto label_14c314;
        default: break;
    }

    ctx->pc = 0x14c2f4u;

    // 0x14c2f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c2f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c2fc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x14c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x14c300: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14c300u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c304: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c308: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c30c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C30Cu;
    SET_GPR_U32(ctx, 31, 0x14C314u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C30Cu, 0x14C314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C314u;
label_14c314:
    // 0x14c314: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c318: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x14c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c31c: 0x946210e0  lhu         $v0, 0x10E0($v1)
    ctx->pc = 0x14c31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4320)));
    // 0x14c320: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14c324: 0xa46210e0  sh          $v0, 0x10E0($v1)
    ctx->pc = 0x14c324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4320), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c32c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c330: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c334: 0xe44010bc  swc1        $f0, 0x10BC($v0)
    ctx->pc = 0x14c334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4284), bits); }
    // 0x14c338: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c33c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c340: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c344: 0xe44010c0  swc1        $f0, 0x10C0($v0)
    ctx->pc = 0x14c344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4288), bits); }
    // 0x14c348: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x14c34c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c358: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c35c: 0xe44010c4  swc1        $f0, 0x10C4($v0)
    ctx->pc = 0x14c35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4292), bits); }
    // 0x14c360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c364: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c368: 0x94621270  lhu         $v0, 0x1270($v1)
    ctx->pc = 0x14c368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4720)));
    // 0x14c36c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14c36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14c370: 0xa4621270  sh          $v0, 0x1270($v1)
    ctx->pc = 0x14c370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4720), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c378: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c37c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c380: 0xe440124c  swc1        $f0, 0x124C($v0)
    ctx->pc = 0x14c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4684), bits); }
    // 0x14c384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c38c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c390: 0xe4401250  swc1        $f0, 0x1250($v0)
    ctx->pc = 0x14c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4688), bits); }
    // 0x14c394: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x14c398: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c3a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3a4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c3a8: 0xe4401254  swc1        $f0, 0x1254($v0)
    ctx->pc = 0x14c3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4692), bits); }
    // 0x14c3ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3b0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c3b4: 0x94621bd0  lhu         $v0, 0x1BD0($v1)
    ctx->pc = 0x14c3b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x14c3b8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14c3bc: 0xa4621bd0  sh          $v0, 0x1BD0($v1)
    ctx->pc = 0x14c3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7120), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c3c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c3c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c3c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3c8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c3cc: 0xe4401bac  swc1        $f0, 0x1BAC($v0)
    ctx->pc = 0x14c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7084), bits); }
    // 0x14c3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c3d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3d8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c3dc: 0xe4401bb0  swc1        $f0, 0x1BB0($v0)
    ctx->pc = 0x14c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7088), bits); }
    // 0x14c3e0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14c3e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c3ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3f0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c3f4: 0xe4401bb4  swc1        $f0, 0x1BB4($v0)
    ctx->pc = 0x14c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7092), bits); }
    // 0x14c3f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c3fc: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x14c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c400: 0x94621d60  lhu         $v0, 0x1D60($v1)
    ctx->pc = 0x14c400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7520)));
    // 0x14c404: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x14c408: 0xa4621d60  sh          $v0, 0x1D60($v1)
    ctx->pc = 0x14c408u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7520), (uint16_t)GPR_U32(ctx, 2));
    // 0x14c40c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c414: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c418: 0xe4401d3c  swc1        $f0, 0x1D3C($v0)
    ctx->pc = 0x14c418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7484), bits); }
    // 0x14c41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c424: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c428: 0xe4401d40  swc1        $f0, 0x1D40($v0)
    ctx->pc = 0x14c428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7488), bits); }
    // 0x14c42c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x14c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x14c430: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14c434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c438: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c43c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x14c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x14c440: 0xe4401d44  swc1        $f0, 0x1D44($v0)
    ctx->pc = 0x14c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7492), bits); }
    // 0x14c444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c448: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c44c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c450: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14c454u;
}
