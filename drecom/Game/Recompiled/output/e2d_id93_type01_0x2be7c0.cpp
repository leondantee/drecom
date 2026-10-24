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

// Function: e2d_id93_type01
// Address: 0x2be7c0 - 0x2be934
void e2d_id93_type01_0x2be7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id93_type01_0x2be7c0");
#endif

    switch (ctx->pc) {
        case 0x2be7e8u: goto label_2be7e8;
        case 0x2be908u: goto label_2be908;
        default: break;
    }

    ctx->pc = 0x2be7c0u;

    // 0x2be7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be7c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2be7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2be7c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2be7cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2be7d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2be7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2be7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be7dc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2be7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2be7e0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BE7E0u;
    SET_GPR_U32(ctx, 31, 0x2BE7E8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BE7E0u, 0x2BE7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7E8u;
label_2be7e8:
    // 0x2be7e8: 0x3c024538  lui         $v0, 0x4538
    ctx->pc = 0x2be7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17720 << 16));
    // 0x2be7ec: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2be7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2be7f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2be7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be7f4: 0x0  nop
    ctx->pc = 0x2be7f4u;
    // NOP
    // 0x2be7f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be7f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be7fc: 0x3c0244ed  lui         $v0, 0x44ED
    ctx->pc = 0x2be7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17645 << 16));
    // 0x2be800: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2be800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2be804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2be804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be808: 0x0  nop
    ctx->pc = 0x2be808u;
    // NOP
    // 0x2be80c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be810: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be814: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2be814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2be818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2be818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be81c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be820: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2be820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be824: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2be824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2be828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be82c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2be82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2be830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2be830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2be834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be838: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2be838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be83c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be840: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2be844: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2be844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2be848: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be854: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2be854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2be858: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be85c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be85cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2be860: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2be860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2be864: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2be864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be86c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2be86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2be870: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2be870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2be874: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2be874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be878: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be87c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2be87cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be888: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2be888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be88c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be890: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2be890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2be894: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2be894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2be898: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2be898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be89c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be8a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2be8a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2be8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2be8a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2be8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be8b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be8b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2be8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2be8b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be8bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2be8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2be8c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2be8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2be8c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2be8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2be8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be8cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2be8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2be8d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2be8d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2be8d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be8dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2be8dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be8e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be8e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be8e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2be8ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be8f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be8f4: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2be8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2be8f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2be8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2be8fc: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2be8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be900: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BE900u;
    SET_GPR_U32(ctx, 31, 0x2BE908u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BE900u, 0x2BE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE908u;
label_2be908:
    // 0x2be908: 0x3c03ba83  lui         $v1, 0xBA83
    ctx->pc = 0x2be908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47747 << 16));
    // 0x2be90c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2be90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2be910: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be914: 0x0  nop
    ctx->pc = 0x2be914u;
    // NOP
    // 0x2be918: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2be918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be91c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be920: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2be920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2be924: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2be924u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2be928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be92c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE934u;
}
