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

// Function: e2d_id5a_type04
// Address: 0x2b8340 - 0x2b8468
void e2d_id5a_type04_0x2b8340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5a_type04_0x2b8340");
#endif

    switch (ctx->pc) {
        case 0x2b8394u: goto label_2b8394;
        case 0x2b83d8u: goto label_2b83d8;
        case 0x2b83fcu: goto label_2b83fc;
        default: break;
    }

    ctx->pc = 0x2b8340u;

    // 0x2b8340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8344: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b8344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b8348: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b8348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b834c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2b834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2b8350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8358: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b8358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b835c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2b835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2b8360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8368: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b836c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2b836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2b8370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8374: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8378: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b8378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b837c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b8380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b8380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8384: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b8384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8388: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b8388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b838c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B838Cu;
    SET_GPR_U32(ctx, 31, 0x2B8394u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B838Cu, 0x2B8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8394u;
label_2b8394:
    // 0x2b8394: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b8398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b8398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b839c: 0x0  nop
    ctx->pc = 0x2b839cu;
    // NOP
    // 0x2b83a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b83a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b83a4: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2b83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2b83a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b83a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b83ac: 0x0  nop
    ctx->pc = 0x2b83acu;
    // NOP
    // 0x2b83b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b83b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b83b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b83b8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b83b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b83bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b83c0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2b83c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b83c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b83c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b83cc: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b83ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b83d0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B83D0u;
    SET_GPR_U32(ctx, 31, 0x2B83D8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B83D0u, 0x2B83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b83dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b83dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b83e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b83e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b83e4: 0x0  nop
    ctx->pc = 0x2b83e4u;
    // NOP
    // 0x2b83e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b83e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b83ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b83f0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b83f4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B83F4u;
    SET_GPR_U32(ctx, 31, 0x2B83FCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B83F4u, 0x2B83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83FCu;
label_2b83fc:
    // 0x2b83fc: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2b8400: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2b8400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2b8404: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b8404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8408: 0x0  nop
    ctx->pc = 0x2b8408u;
    // NOP
    // 0x2b840c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b840cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b8410: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2b8410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2b8414: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2b8414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2b8418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b841c: 0x0  nop
    ctx->pc = 0x2b841cu;
    // NOP
    // 0x2b8420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b8420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8428: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2b8428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2b842c: 0x3c03458c  lui         $v1, 0x458C
    ctx->pc = 0x2b842cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17804 << 16));
    // 0x2b8430: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2b8430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2b8434: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b843c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2b8440: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b8440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b8444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8448: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b8448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b844c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2b844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b8450: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b8450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8454: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b8454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8458: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b8458u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b845c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b845cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8460: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8468u;
}
