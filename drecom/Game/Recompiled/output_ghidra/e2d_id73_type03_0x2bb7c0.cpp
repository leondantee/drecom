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

// Function: e2d_id73_type03
// Address: 0x2bb7c0 - 0x2bb8e4
void e2d_id73_type03_0x2bb7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type03_0x2bb7c0");
#endif

    switch (ctx->pc) {
        case 0x2bb814u: goto label_2bb814;
        case 0x2bb858u: goto label_2bb858;
        case 0x2bb87cu: goto label_2bb87c;
        default: break;
    }

    ctx->pc = 0x2bb7c0u;

    // 0x2bb7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb7c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb7c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb7cc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bb7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb7d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb7d8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb7dc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bb7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bb7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb7e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb7e8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb7ec: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x2bb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
    // 0x2bb7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb7f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb7f8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb7fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb808: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb80c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB80Cu;
    SET_GPR_U32(ctx, 31, 0x2BB814u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB80Cu, 0x2BB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB814u;
label_2bb814:
    // 0x2bb814: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bb814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bb818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb81c: 0x0  nop
    ctx->pc = 0x2bb81cu;
    // NOP
    // 0x2bb820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb824: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2bb824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2bb828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb82c: 0x0  nop
    ctx->pc = 0x2bb82cu;
    // NOP
    // 0x2bb830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb838: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bb838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bb83c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb840: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bb840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb848: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb84c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb850: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB850u;
    SET_GPR_U32(ctx, 31, 0x2BB858u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB850u, 0x2BB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB858u;
label_2bb858:
    // 0x2bb858: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bb858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bb85c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bb85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bb860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb864: 0x0  nop
    ctx->pc = 0x2bb864u;
    // NOP
    // 0x2bb868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bb868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb86c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb870: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb874: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BB874u;
    SET_GPR_U32(ctx, 31, 0x2BB87Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BB874u, 0x2BB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB87Cu;
label_2bb87c:
    // 0x2bb87c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bb880: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bb880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bb884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb888: 0x0  nop
    ctx->pc = 0x2bb888u;
    // NOP
    // 0x2bb88c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb890: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bb890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bb894: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bb894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bb898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb89c: 0x0  nop
    ctx->pc = 0x2bb89cu;
    // NOP
    // 0x2bb8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb8a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb8a8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bb8ac: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x2bb8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x2bb8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb8b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb8b8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bb8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bb8bc: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2bb8c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb8c4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bb8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb8c8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2bb8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bb8cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb8d0: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bb8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb8d4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb8d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb8d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB8E4u;
}
