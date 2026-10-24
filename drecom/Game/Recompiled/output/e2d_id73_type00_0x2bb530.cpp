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

// Function: e2d_id73_type00
// Address: 0x2bb530 - 0x2bb654
void e2d_id73_type00_0x2bb530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type00_0x2bb530");
#endif

    switch (ctx->pc) {
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5ecu: goto label_2bb5ec;
        default: break;
    }

    ctx->pc = 0x2bb530u;

    // 0x2bb530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb534: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bb534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bb538: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bb538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bb53c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x2bb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x2bb540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb548: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bb548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bb54c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bb550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb558: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bb558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bb55c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb564: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb568: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bb568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bb56c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bb570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb578: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bb578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bb57c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB57Cu;
    SET_GPR_U32(ctx, 31, 0x2BB584u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB57Cu, 0x2BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB584u;
label_2bb584:
    // 0x2bb584: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bb584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bb588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb58c: 0x0  nop
    ctx->pc = 0x2bb58cu;
    // NOP
    // 0x2bb590: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb594: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2bb598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bb598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb59c: 0x0  nop
    ctx->pc = 0x2bb59cu;
    // NOP
    // 0x2bb5a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb5a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb5a8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bb5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bb5ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb5b0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bb5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bb5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb5b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb5bc: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bb5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bb5c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BB5C0u;
    SET_GPR_U32(ctx, 31, 0x2BB5C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BB5C0u, 0x2BB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5C8u;
label_2bb5c8:
    // 0x2bb5c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bb5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bb5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bb5d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bb5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb5d4: 0x0  nop
    ctx->pc = 0x2bb5d4u;
    // NOP
    // 0x2bb5d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bb5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb5dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb5e0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bb5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bb5e4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BB5E4u;
    SET_GPR_U32(ctx, 31, 0x2BB5ECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BB5E4u, 0x2BB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5ECu;
label_2bb5ec:
    // 0x2bb5ec: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bb5f0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bb5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bb5f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bb5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb5f8: 0x0  nop
    ctx->pc = 0x2bb5f8u;
    // NOP
    // 0x2bb5fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bb5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bb600: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bb600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bb604: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bb604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bb608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb60c: 0x0  nop
    ctx->pc = 0x2bb60cu;
    // NOP
    // 0x2bb610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bb610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bb614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb618: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bb618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bb61c: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2bb61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2bb620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bb620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb628: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bb628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bb62c: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x2bb62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2bb630: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb634: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bb634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb638: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x2bb638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2bb63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bb63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb640: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bb640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bb644: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bb644u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb64c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB654u;
}
