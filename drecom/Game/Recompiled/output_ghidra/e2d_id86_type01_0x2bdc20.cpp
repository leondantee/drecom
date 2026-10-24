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

// Function: e2d_id86_type01
// Address: 0x2bdc20 - 0x2bdd90
void e2d_id86_type01_0x2bdc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id86_type01_0x2bdc20");
#endif

    switch (ctx->pc) {
        case 0x2bdc94u: goto label_2bdc94;
        default: break;
    }

    ctx->pc = 0x2bdc20u;

    // 0x2bdc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bdc24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bdc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bdc28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bdc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bdc2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bdc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bdc30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc34: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bdc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdc38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bdc3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc40: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bdc40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdc44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bdc48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc4c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bdc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdc50: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2bdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2bdc54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2bdc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2bdc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc60: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2bdc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2bdc64: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2bdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2bdc68: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2bdc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2bdc6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc74: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x2bdc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x2bdc78: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2bdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2bdc7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bdc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bdc80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdc84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc88: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2bdc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2bdc8c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BDC8Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC94u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BDC8Cu, 0x2BDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDC94u;
label_2bdc94:
    // 0x2bdc94: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2bdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2bdc98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdc9c: 0x0  nop
    ctx->pc = 0x2bdc9cu;
    // NOP
    // 0x2bdca0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdca4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2bdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2bdca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bdca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdcac: 0x0  nop
    ctx->pc = 0x2bdcacu;
    // NOP
    // 0x2bdcb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdcb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdcb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdcb8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bdcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bdcbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdcc0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdcc4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdcc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdcc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdcd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdcd4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdcd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdcdc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdce0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdce4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdcec: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdcf0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdcf4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdcf8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdcfc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdcfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdd00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdd04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdd08: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdd0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdd10: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdd14: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdd18: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdd18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdd1c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdd20: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdd24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdd28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdd2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdd30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdd34: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdd34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdd38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdd3c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdd40: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdd44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdd48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdd4c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdd50: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdd54: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdd58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdd5c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdd5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdd60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdd60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdd64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdd68: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bdd6c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdd70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdd74: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdd78: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdd7c: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdd80: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bdd80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdd84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bdd84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bdd88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD90u;
}
