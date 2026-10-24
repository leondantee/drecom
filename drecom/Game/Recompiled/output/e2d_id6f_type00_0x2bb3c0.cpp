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

// Function: e2d_id6f_type00
// Address: 0x2bb3c0 - 0x2bb48c
void e2d_id6f_type00_0x2bb3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id6f_type00_0x2bb3c0");
#endif

    switch (ctx->pc) {
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb450u: goto label_2bb450;
        default: break;
    }

    ctx->pc = 0x2bb3c0u;

    // 0x2bb3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb3c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb3c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb3cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BB3CCu;
    SET_GPR_U32(ctx, 31, 0x2BB3D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BB3CCu, 0x2BB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3D4u;
label_2bb3d4:
    // 0x2bb3d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bb3d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb3dc: 0x0  nop
    ctx->pc = 0x2bb3dcu;
    // NOP
    // 0x2bb3e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb3e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb3e4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2bb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2bb3e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb3ec: 0x0  nop
    ctx->pc = 0x2bb3ecu;
    // NOP
    // 0x2bb3f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb3f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb3f8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bb3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bb3fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bb400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb404: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2bb404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb408: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bb408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bb40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb414: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb418: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bb418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bb41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb424: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb428: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bb42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb434: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb438: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x2bb438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x2bb43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb440: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb444: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb448: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BB448u;
    SET_GPR_U32(ctx, 31, 0x2BB450u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BB448u, 0x2BB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB450u;
label_2bb450:
    // 0x2bb450: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2bb450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2bb454: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bb454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bb458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb45c: 0x0  nop
    ctx->pc = 0x2bb45cu;
    // NOP
    // 0x2bb460: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb464: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb46c: 0x0  nop
    ctx->pc = 0x2bb46cu;
    // NOP
    // 0x2bb470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb478: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2bb478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2bb47c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb47cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb484: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB48Cu;
}
