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

// Function: e2d_id00_type16
// Address: 0x2aa440 - 0x2aa524
void e2d_id00_type16_0x2aa440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type16_0x2aa440");
#endif

    switch (ctx->pc) {
        case 0x2aa494u: goto label_2aa494;
        case 0x2aa4d0u: goto label_2aa4d0;
        default: break;
    }

    ctx->pc = 0x2aa440u;

    // 0x2aa440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa444: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa448: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa44c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa458: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa45c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa468: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa46c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2aa46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2aa470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa474: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa478: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa47c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2aa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2aa480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa488: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa48c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2AA48Cu;
    SET_GPR_U32(ctx, 31, 0x2AA494u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2AA48Cu, 0x2AA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA494u;
label_2aa494:
    // 0x2aa494: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2aa494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2aa498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa49c: 0x0  nop
    ctx->pc = 0x2aa49cu;
    // NOP
    // 0x2aa4a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa4a4: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2aa4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2aa4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa4ac: 0x0  nop
    ctx->pc = 0x2aa4acu;
    // NOP
    // 0x2aa4b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa4b8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2aa4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2aa4bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2aa4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa4c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa4c4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2aa4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa4c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA4C8u;
    SET_GPR_U32(ctx, 31, 0x2AA4D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA4C8u, 0x2AA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4D0u;
label_2aa4d0:
    // 0x2aa4d0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2aa4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2aa4d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aa4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aa4d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa4dc: 0x0  nop
    ctx->pc = 0x2aa4dcu;
    // NOP
    // 0x2aa4e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa4e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa4e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa4ec: 0x0  nop
    ctx->pc = 0x2aa4ecu;
    // NOP
    // 0x2aa4f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa4f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa4f8: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2aa4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2aa4fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa500: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa504: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2aa504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa50c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa510: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aa510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa514: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa514u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa518: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa51c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA524u;
}
