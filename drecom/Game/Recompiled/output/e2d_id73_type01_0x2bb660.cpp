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

// Function: e2d_id73_type01
// Address: 0x2bb660 - 0x2bb788
void e2d_id73_type01_0x2bb660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type01_0x2bb660");
#endif

    switch (ctx->pc) {
        case 0x2bb6b4u: goto label_2bb6b4;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb71cu: goto label_2bb71c;
        default: break;
    }

    ctx->pc = 0x2bb660u;

    // 0x2bb660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb664: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb668: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb66c: 0x3c02431c  lui         $v0, 0x431C
    ctx->pc = 0x2bb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17180 << 16));
    // 0x2bb670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb678: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb67c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bb680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb684: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb688: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb68c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2bb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2bb690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb698: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb69c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bb6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb6a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb6ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB6ACu;
    SET_GPR_U32(ctx, 31, 0x2BB6B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB6ACu, 0x2BB6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6B4u;
label_2bb6b4:
    // 0x2bb6b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bb6b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb6bc: 0x0  nop
    ctx->pc = 0x2bb6bcu;
    // NOP
    // 0x2bb6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb6c4: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2bb6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb6cc: 0x0  nop
    ctx->pc = 0x2bb6ccu;
    // NOP
    // 0x2bb6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb6d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb6d8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bb6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bb6dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb6e0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bb6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb6e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb6ec: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb6f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB6F0u;
    SET_GPR_U32(ctx, 31, 0x2BB6F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB6F0u, 0x2BB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6F8u;
label_2bb6f8:
    // 0x2bb6f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bb6fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bb6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bb700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb704: 0x0  nop
    ctx->pc = 0x2bb704u;
    // NOP
    // 0x2bb708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bb708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb70c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb710: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb714: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BB714u;
    SET_GPR_U32(ctx, 31, 0x2BB71Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BB714u, 0x2BB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB71Cu;
label_2bb71c:
    // 0x2bb71c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bb720: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bb720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bb724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb728: 0x0  nop
    ctx->pc = 0x2bb728u;
    // NOP
    // 0x2bb72c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb72cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb730: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bb730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bb734: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bb734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bb738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb73c: 0x0  nop
    ctx->pc = 0x2bb73cu;
    // NOP
    // 0x2bb740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb748: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bb748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bb74c: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2bb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2bb750: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2bb750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2bb754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb758: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb75c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bb75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bb760: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2bb760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2bb764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb768: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bb768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb76c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2bb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2bb770: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb774: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bb774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb778: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb778u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb77c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb780: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB788u;
}
