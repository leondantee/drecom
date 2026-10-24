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

// Function: e2d_id73_type04
// Address: 0x2bb8f0 - 0x2bba14
void e2d_id73_type04_0x2bb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type04_0x2bb8f0");
#endif

    switch (ctx->pc) {
        case 0x2bb944u: goto label_2bb944;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb9acu: goto label_2bb9ac;
        default: break;
    }

    ctx->pc = 0x2bb8f0u;

    // 0x2bb8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb8f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb8f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb8fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb904: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb908: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb90c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb914: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb918: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb91c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bb920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb928: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb92c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb938: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb93c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB93Cu;
    SET_GPR_U32(ctx, 31, 0x2BB944u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB93Cu, 0x2BB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB944u;
label_2bb944:
    // 0x2bb944: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bb944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bb948: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb94c: 0x0  nop
    ctx->pc = 0x2bb94cu;
    // NOP
    // 0x2bb950: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb954: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2bb954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2bb958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb95c: 0x0  nop
    ctx->pc = 0x2bb95cu;
    // NOP
    // 0x2bb960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb968: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bb968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bb96c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb970: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bb970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb978: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb97c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb97cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb980: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB980u;
    SET_GPR_U32(ctx, 31, 0x2BB988u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB980u, 0x2BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB988u;
label_2bb988:
    // 0x2bb988: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bb988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bb98c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bb98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bb990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb994: 0x0  nop
    ctx->pc = 0x2bb994u;
    // NOP
    // 0x2bb998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bb998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb99c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb9a0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb9a4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BB9A4u;
    SET_GPR_U32(ctx, 31, 0x2BB9ACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BB9A4u, 0x2BB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB9ACu;
label_2bb9ac:
    // 0x2bb9ac: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bb9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bb9b0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bb9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bb9b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb9b8: 0x0  nop
    ctx->pc = 0x2bb9b8u;
    // NOP
    // 0x2bb9bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb9c0: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bb9c4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bb9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bb9c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb9cc: 0x0  nop
    ctx->pc = 0x2bb9ccu;
    // NOP
    // 0x2bb9d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb9d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb9d8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bb9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bb9dc: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2bb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2bb9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb9e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb9e8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bb9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bb9ec: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2bb9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb9f4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bb9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb9f8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2bb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2bb9fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba00: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bba00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bba04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bba04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bba08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBA14u;
}
