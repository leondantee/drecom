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

// Function: e2d_id00_type11
// Address: 0x2aa120 - 0x2aa204
void e2d_id00_type11_0x2aa120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type11_0x2aa120");
#endif

    switch (ctx->pc) {
        case 0x2aa134u: goto label_2aa134;
        case 0x2aa1b0u: goto label_2aa1b0;
        default: break;
    }

    ctx->pc = 0x2aa120u;

    // 0x2aa120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa124: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aa124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aa128: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aa128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aa12c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2AA12Cu;
    SET_GPR_U32(ctx, 31, 0x2AA134u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2AA12Cu, 0x2AA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA134u;
label_2aa134:
    // 0x2aa134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aa134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aa138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa13c: 0x0  nop
    ctx->pc = 0x2aa13cu;
    // NOP
    // 0x2aa140: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa144: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2aa148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa14c: 0x0  nop
    ctx->pc = 0x2aa14cu;
    // NOP
    // 0x2aa150: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa158: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2aa158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2aa15c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa164: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa168: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aa168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aa16c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aa170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa178: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aa178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aa17c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2aa180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa188: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aa188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aa18c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2aa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2aa190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa198: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aa198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aa19c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2aa19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa1a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aa1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa1a4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2aa1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aa1a8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AA1A8u;
    SET_GPR_U32(ctx, 31, 0x2AA1B0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AA1A8u, 0x2AA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1B0u;
label_2aa1b0:
    // 0x2aa1b0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2aa1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2aa1b4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2aa1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2aa1b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aa1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa1bc: 0x0  nop
    ctx->pc = 0x2aa1bcu;
    // NOP
    // 0x2aa1c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aa1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa1c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2aa1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aa1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa1cc: 0x0  nop
    ctx->pc = 0x2aa1ccu;
    // NOP
    // 0x2aa1d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aa1d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa1d8: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2aa1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2aa1dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa1e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa1e4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2aa1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa1e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2aa1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa1ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aa1f0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aa1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aa1f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aa1f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa1f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA204u;
}
