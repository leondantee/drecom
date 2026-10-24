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

// Function: e2d_id00_type04
// Address: 0x2a9750 - 0x2a9834
void e2d_id00_type04_0x2a9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type04_0x2a9750");
#endif

    switch (ctx->pc) {
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97e0u: goto label_2a97e0;
        default: break;
    }

    ctx->pc = 0x2a9750u;

    // 0x2a9750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9754: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9758: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a975c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9768: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a976c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2a9770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9778: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a977c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9788: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a978c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2a978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2a9790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9798: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a979c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2A979Cu;
    SET_GPR_U32(ctx, 31, 0x2A97A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2A979Cu, 0x2A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97A4u;
label_2a97a4:
    // 0x2a97a4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a97a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a97a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a97ac: 0x0  nop
    ctx->pc = 0x2a97acu;
    // NOP
    // 0x2a97b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a97b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a97b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a97b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a97b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a97bc: 0x0  nop
    ctx->pc = 0x2a97bcu;
    // NOP
    // 0x2a97c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a97c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a97c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a97c8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a97c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a97cc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2a97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a97d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a97d4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2a97d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a97d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A97D8u;
    SET_GPR_U32(ctx, 31, 0x2A97E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A97D8u, 0x2A97E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97E0u;
label_2a97e0:
    // 0x2a97e0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2a97e4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a97e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a97e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a97ec: 0x0  nop
    ctx->pc = 0x2a97ecu;
    // NOP
    // 0x2a97f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a97f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a97f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a97f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a97f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a97fc: 0x0  nop
    ctx->pc = 0x2a97fcu;
    // NOP
    // 0x2a9800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9808: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2a9808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2a980c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9810: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9814: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2a9814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9818: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a981c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9820: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2a9820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9824: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a982c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9834u;
}
