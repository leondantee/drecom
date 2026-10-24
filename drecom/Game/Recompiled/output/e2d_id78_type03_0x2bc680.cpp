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

// Function: e2d_id78_type03
// Address: 0x2bc680 - 0x2bc834
void e2d_id78_type03_0x2bc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id78_type03_0x2bc680");
#endif

    switch (ctx->pc) {
        case 0x2bc6d4u: goto label_2bc6d4;
        case 0x2bc7c4u: goto label_2bc7c4;
        case 0x2bc7d4u: goto label_2bc7d4;
        default: break;
    }

    ctx->pc = 0x2bc680u;

    // 0x2bc680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc688: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc68c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2bc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2bc690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc698: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc69c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2bc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2bc6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc6a8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc6ac: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bc6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc6b8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc6bc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc6c8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bc6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bc6cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC6CCu;
    SET_GPR_U32(ctx, 31, 0x2BC6D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC6CCu, 0x2BC6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6D4u;
label_2bc6d4:
    // 0x2bc6d4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bc6d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc6dc: 0x0  nop
    ctx->pc = 0x2bc6dcu;
    // NOP
    // 0x2bc6e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc6e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bc6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6ec: 0x0  nop
    ctx->pc = 0x2bc6ecu;
    // NOP
    // 0x2bc6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc6f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc6f8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bc6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bc6fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc700: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc704: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc708: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc714: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc718: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc71c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc720: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc724: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc72c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc730: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc734: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc738: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc73c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc73cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc748: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2bc748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2bc74c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc750: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc754: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bc754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc758: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc75c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc760: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc76c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc770: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc774: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc778: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc77c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc780: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc788: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc78c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc790: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc798: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc79c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc7a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bc7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bc7a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc7a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc7ac: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bc7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc7b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc7b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc7b8: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bc7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc7bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC7BCu;
    SET_GPR_U32(ctx, 31, 0x2BC7C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC7BCu, 0x2BC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7C4u;
label_2bc7c4:
    // 0x2bc7c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc7c8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bc7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bc7cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC7CCu;
    SET_GPR_U32(ctx, 31, 0x2BC7D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC7CCu, 0x2BC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7D4u;
label_2bc7d4:
    // 0x2bc7d4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc7d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc7dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc7e0: 0x0  nop
    ctx->pc = 0x2bc7e0u;
    // NOP
    // 0x2bc7e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bc7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc7e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc7ec: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2bc7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2bc7f0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2bc7f4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc7fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc800: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bc800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bc804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bc804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bc808: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc80c: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2bc80cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc810: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bc810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2bc814: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc81c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc820: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bc820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bc824: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC834u;
}
