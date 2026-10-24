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

// Function: e2d_id93_type03
// Address: 0x2beae0 - 0x2bec54
void e2d_id93_type03_0x2beae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id93_type03_0x2beae0");
#endif

    switch (ctx->pc) {
        case 0x2beb08u: goto label_2beb08;
        case 0x2bec28u: goto label_2bec28;
        default: break;
    }

    ctx->pc = 0x2beae0u;

    // 0x2beae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2beae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2beae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2beae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2beae8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2beae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2beaec: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x2beaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
    // 0x2beaf0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2beaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2beaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2beaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beaf8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2beaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beafc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2beafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2beb00: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BEB00u;
    SET_GPR_U32(ctx, 31, 0x2BEB08u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BEB00u, 0x2BEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB08u;
label_2beb08:
    // 0x2beb08: 0x3c024538  lui         $v0, 0x4538
    ctx->pc = 0x2beb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17720 << 16));
    // 0x2beb0c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2beb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2beb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2beb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2beb14: 0x0  nop
    ctx->pc = 0x2beb14u;
    // NOP
    // 0x2beb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2beb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2beb1c: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x2beb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x2beb20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2beb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2beb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2beb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2beb28: 0x0  nop
    ctx->pc = 0x2beb28u;
    // NOP
    // 0x2beb2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2beb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2beb30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beb34: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2beb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2beb38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2beb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2beb3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2beb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beb40: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2beb40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2beb44: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2beb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2beb48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beb4c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2beb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2beb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2beb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2beb54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2beb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beb58: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2beb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2beb5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2beb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2beb60: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2beb64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2beb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2beb68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2beb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2beb6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2beb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2beb70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2beb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2beb74: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2beb78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2beb7c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2beb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2beb80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2beb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2beb84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2beb88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2beb8c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2beb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2beb90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2beb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2beb94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2beb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2beb98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2beb9c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2beb9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2beba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2beba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2beba4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2beba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2beba8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2beba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bebac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bebb0: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2bebb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2bebb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bebb8: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2bebb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bebbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bebbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bebc0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bebc4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bebc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bebc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bebcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bebd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bebd4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bebd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bebdc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bebe0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bebe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bebe4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bebe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bebec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bebf0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bebf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bebf8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bebfc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bebfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bec00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bec04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bec08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bec08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bec0c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2bec0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bec10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bec14: 0x9062011a  lbu         $v0, 0x11A($v1)
    ctx->pc = 0x2bec14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 282)));
    // 0x2bec18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2bec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2bec1c: 0xa062011a  sb          $v0, 0x11A($v1)
    ctx->pc = 0x2bec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec20: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BEC20u;
    SET_GPR_U32(ctx, 31, 0x2BEC28u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BEC20u, 0x2BEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC28u;
label_2bec28:
    // 0x2bec28: 0x3c03ba83  lui         $v1, 0xBA83
    ctx->pc = 0x2bec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47747 << 16));
    // 0x2bec2c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bec30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bec30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bec34: 0x0  nop
    ctx->pc = 0x2bec34u;
    // NOP
    // 0x2bec38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bec38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bec3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bec40: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bec44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bec44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bec48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bec4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC54u;
}
