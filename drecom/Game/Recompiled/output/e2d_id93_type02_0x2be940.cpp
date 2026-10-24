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

// Function: e2d_id93_type02
// Address: 0x2be940 - 0x2bead4
void e2d_id93_type02_0x2be940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id93_type02_0x2be940");
#endif

    switch (ctx->pc) {
        case 0x2be954u: goto label_2be954;
        case 0x2be998u: goto label_2be998;
        case 0x2beaa8u: goto label_2beaa8;
        default: break;
    }

    ctx->pc = 0x2be940u;

    // 0x2be940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be944: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2be944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2be948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2be948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2be94c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BE94Cu;
    SET_GPR_U32(ctx, 31, 0x2BE954u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BE94Cu, 0x2BE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE954u;
label_2be954:
    // 0x2be954: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2be954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2be958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2be958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be95c: 0x0  nop
    ctx->pc = 0x2be95cu;
    // NOP
    // 0x2be960: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be964: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2be964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2be968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be96c: 0x0  nop
    ctx->pc = 0x2be96cu;
    // NOP
    // 0x2be970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be974: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be978: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2be978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2be97c: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x2be97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x2be980: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2be980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2be984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be98c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2be98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2be990: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BE990u;
    SET_GPR_U32(ctx, 31, 0x2BE998u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BE990u, 0x2BE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE998u;
label_2be998:
    // 0x2be998: 0x3c02451f  lui         $v0, 0x451F
    ctx->pc = 0x2be998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17695 << 16));
    // 0x2be99c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2be99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2be9a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2be9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be9a4: 0x0  nop
    ctx->pc = 0x2be9a4u;
    // NOP
    // 0x2be9a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be9ac: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x2be9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x2be9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be9b4: 0x0  nop
    ctx->pc = 0x2be9b4u;
    // NOP
    // 0x2be9b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be9bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be9c0: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2be9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2be9c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2be9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be9c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be9cc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2be9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be9d0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be9d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be9d8: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2be9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2be9dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be9e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2be9e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2be9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2be9e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2be9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be9ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be9f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be9f4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2be9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2be9f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be9fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bea00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bea04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bea04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bea08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bea0c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bea10: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bea10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bea14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bea18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bea1c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bea1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bea20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bea24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bea28: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2bea28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bea2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bea30: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2bea30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2bea34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bea38: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2bea38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bea3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bea40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bea44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bea48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bea48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bea4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bea50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bea54: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bea54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bea58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bea5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bea60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bea60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bea64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bea64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bea68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bea6c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bea70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bea74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bea78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bea7c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bea7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bea80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bea84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bea88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bea88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bea8c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2bea8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bea90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bea94: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2bea94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2bea98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bea9c: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2bea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beaa0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BEAA0u;
    SET_GPR_U32(ctx, 31, 0x2BEAA8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BEAA0u, 0x2BEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAA8u;
label_2beaa8:
    // 0x2beaa8: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x2beaac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2beaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2beab0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2beab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2beab4: 0x0  nop
    ctx->pc = 0x2beab4u;
    // NOP
    // 0x2beab8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2beab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2beabc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2beabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beac0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2beac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2beac4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2beac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2beac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2beacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEAD4u;
}
