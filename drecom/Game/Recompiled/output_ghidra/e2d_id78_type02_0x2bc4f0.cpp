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

// Function: e2d_id78_type02
// Address: 0x2bc4f0 - 0x2bc674
void e2d_id78_type02_0x2bc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id78_type02_0x2bc4f0");
#endif

    switch (ctx->pc) {
        case 0x2bc534u: goto label_2bc534;
        case 0x2bc624u: goto label_2bc624;
        case 0x2bc634u: goto label_2bc634;
        default: break;
    }

    ctx->pc = 0x2bc4f0u;

    // 0x2bc4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc4f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc4f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc4fc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bc500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc508: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc50c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc514: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc518: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc51c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc524: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc528: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc52c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC52Cu;
    SET_GPR_U32(ctx, 31, 0x2BC534u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC52Cu, 0x2BC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC534u;
label_2bc534:
    // 0x2bc534: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bc534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bc538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc53c: 0x0  nop
    ctx->pc = 0x2bc53cu;
    // NOP
    // 0x2bc540: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc544: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bc548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc54c: 0x0  nop
    ctx->pc = 0x2bc54cu;
    // NOP
    // 0x2bc550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc558: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bc558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bc55c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc560: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc560u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc564: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc568: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc574: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc578: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc57c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc580: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc584: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc58c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc590: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc594: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc598: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc59c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc5a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc5a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc5a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2bc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2bc5ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc5b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc5b4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bc5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc5b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc5bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc5c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc5c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc5cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc5d0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc5d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc5d8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc5dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc5e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc5e8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc5ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc5f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc5f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc5f8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc5f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc600: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bc600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bc604: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc608: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc60c: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bc60cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc614: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc618: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bc618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc61c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC61Cu;
    SET_GPR_U32(ctx, 31, 0x2BC624u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC61Cu, 0x2BC624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC624u;
label_2bc624:
    // 0x2bc624: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc628: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bc628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bc62c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC62Cu;
    SET_GPR_U32(ctx, 31, 0x2BC634u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC62Cu, 0x2BC634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC634u;
label_2bc634:
    // 0x2bc634: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc638: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc63c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc640: 0x0  nop
    ctx->pc = 0x2bc640u;
    // NOP
    // 0x2bc644: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bc644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc648: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc64c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2bc64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2bc650: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2bc650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2bc654: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc65c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc660: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bc660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bc664: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc664u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc668: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC674u;
}
