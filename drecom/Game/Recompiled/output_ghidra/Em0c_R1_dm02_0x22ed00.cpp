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

// Function: Em0c_R1_dm02
// Address: 0x22ed00 - 0x22f834
void Em0c_R1_dm02_0x22ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_dm02_0x22ed00");
#endif

    switch (ctx->pc) {
        case 0x22ed88u: goto label_22ed88;
        case 0x22edf0u: goto label_22edf0;
        case 0x22ee44u: goto label_22ee44;
        case 0x22ee98u: goto label_22ee98;
        case 0x22eea8u: goto label_22eea8;
        case 0x22ef40u: goto label_22ef40;
        case 0x22ef74u: goto label_22ef74;
        case 0x22efa0u: goto label_22efa0;
        case 0x22f094u: goto label_22f094;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f21cu: goto label_22f21c;
        case 0x22f228u: goto label_22f228;
        case 0x22f2e4u: goto label_22f2e4;
        case 0x22f314u: goto label_22f314;
        case 0x22f33cu: goto label_22f33c;
        case 0x22f394u: goto label_22f394;
        case 0x22f3b8u: goto label_22f3b8;
        case 0x22f478u: goto label_22f478;
        case 0x22f500u: goto label_22f500;
        case 0x22f508u: goto label_22f508;
        case 0x22f594u: goto label_22f594;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5c0u: goto label_22f5c0;
        case 0x22f5e4u: goto label_22f5e4;
        case 0x22f604u: goto label_22f604;
        case 0x22f68cu: goto label_22f68c;
        case 0x22f694u: goto label_22f694;
        case 0x22f720u: goto label_22f720;
        case 0x22f730u: goto label_22f730;
        case 0x22f740u: goto label_22f740;
        case 0x22f764u: goto label_22f764;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7f8u: goto label_22f7f8;
        default: break;
    }

    ctx->pc = 0x22ed00u;

    // 0x22ed00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22ed04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x22ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x22ed08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ed0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ed10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ed14: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x22ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x22ed18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x22ed1c: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x22ed1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x22ed20: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed24: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x22ed24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22ed28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22ed28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22ed2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ed30: 0x108300cd  beq         $a0, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x22ED30u;
    {
        const bool branch_taken_0x22ed30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22ed30) {
            ctx->pc = 0x22F068u;
            goto label_22f068;
        }
    }
    ctx->pc = 0x22ED38u;
    // 0x22ed38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED38u;
    {
        const bool branch_taken_0x22ed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed38) {
            ctx->pc = 0x22ED48u;
            goto label_22ed48;
        }
    }
    ctx->pc = 0x22ED40u;
    // 0x22ed40: 0x100002b5  b           . + 4 + (0x2B5 << 2)
    ctx->pc = 0x22ED40u;
    {
        const bool branch_taken_0x22ed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed40) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22ED48u;
label_22ed48:
    // 0x22ed48: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed4c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x22ed4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x22ed50: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ed54: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x22ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ed58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ed58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ed5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed60: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ed64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ed68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ed6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ed6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ed70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed74: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22ed78: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ed7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ed7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ed80: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ED80u;
    SET_GPR_U32(ctx, 31, 0x22ED88u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ED80u, 0x22ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED88u;
label_22ed88:
    // 0x22ed88: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x22ed88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x22ed8c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x22ed8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed90: 0xa4e51278  sh          $a1, 0x1278($a3)
    ctx->pc = 0x22ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22ed94: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ed98: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ed9c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22ed9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22eda0: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22eda0u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eda4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eda4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eda8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22eda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22edac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22edacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edb0: 0x0  nop
    ctx->pc = 0x22edb0u;
    // NOP
    // 0x22edb4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x22edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x22edb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22edbc: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22edc0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22edc4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22edc4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22edc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22edc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22edcc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22edd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22edd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22edd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22edd8: 0x0  nop
    ctx->pc = 0x22edd8u;
    // NOP
    // 0x22eddc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22eddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22ede0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ede4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22ede8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22EDE8u;
    SET_GPR_U32(ctx, 31, 0x22EDF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22EDE8u, 0x22EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDF0u;
label_22edf0:
    // 0x22edf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22edf4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22edf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22edf8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22EDF8u;
    {
        const bool branch_taken_0x22edf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edf8) {
            ctx->pc = 0x22EE4Cu;
            goto label_22ee4c;
        }
    }
    ctx->pc = 0x22EE00u;
    // 0x22ee00: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22ee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee04: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee0c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22ee10: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x22ee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee14: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ee18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ee1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee20: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22ee24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee28: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22ee30: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x22ee30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x22ee34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22EE3Cu;
    SET_GPR_U32(ctx, 31, 0x22EE44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22EE3Cu, 0x22EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE44u;
label_22ee44:
    // 0x22ee44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22EE44u;
    {
        const bool branch_taken_0x22ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ee44) {
            ctx->pc = 0x22EE98u;
            goto label_22ee98;
        }
    }
    ctx->pc = 0x22EE4Cu;
label_22ee4c:
    // 0x22ee4c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee50: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ee54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ee58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee5c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22ee60: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x22ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee64: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee6c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22ee70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee74: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22ee78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22ee7c: 0x8c470368  lw          $a3, 0x368($v0)
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22ee80: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x22ee80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22ee84: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x22ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x22ee88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22EE90u;
    SET_GPR_U32(ctx, 31, 0x22EE98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22EE90u, 0x22EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE98u;
label_22ee98:
    // 0x22ee98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ee9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22eea0: 0xc040c24  jal         func_103090
    ctx->pc = 0x22EEA0u;
    SET_GPR_U32(ctx, 31, 0x22EEA8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22EEA8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22EEA8u) { return; }
    ctx->pc = 0x22EEA8u;
label_22eea8:
    // 0x22eea8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x22eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x22eeac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22eeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eeb0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eeb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22eeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22eeb8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eebc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22eec0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22eec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22eec4: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x22eec8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22eec8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eecc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22eeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eed0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22eed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22eed4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eed8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22eedc: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22eee0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eee4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22eee8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x22eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22eeec: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22eef0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22eef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22eef4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22eef8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22eefc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ef00: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22ef04: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x22ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x22ef08: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22ef0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ef0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef10: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef14: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22ef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22ef18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef1c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x22ef1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x22ef20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22ef24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22ef24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22ef28: 0x2444fff6  addiu       $a0, $v0, -0xA
    ctx->pc = 0x22ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x22ef2c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x22ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22ef30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef34: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x22ef34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ef38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22EF38u;
    SET_GPR_U32(ctx, 31, 0x22EF40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22EF38u, 0x22EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF40u;
label_22ef40:
    // 0x22ef40: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x22ef40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22ef44: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x22ef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x22ef48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22EF48u;
    {
        const bool branch_taken_0x22ef48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef48) {
            ctx->pc = 0x22EF7Cu;
            goto label_22ef7c;
        }
    }
    ctx->pc = 0x22EF50u;
    // 0x22ef50: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef54: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22ef58: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22ef58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22ef5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22ef5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef60: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22ef64: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ef68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ef68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ef6c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22EF6Cu, 0x22EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22EFA0u;
            goto label_22efa0;
        }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ef80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ef84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ef84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ef88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ef8c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22ef90: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22ef94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ef94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ef98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22EF98u;
    SET_GPR_U32(ctx, 31, 0x22EFA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22EF98u, 0x22EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFA0u;
label_22efa0:
    // 0x22efa0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efa4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22efa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x22efa8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efac: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x22efacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22efb0: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efb4: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x22efb8: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x22efbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22efbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22efc0: 0xc4e00188  lwc1        $f0, 0x188($a3)
    ctx->pc = 0x22efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22efc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22efc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22efc8: 0xe4e00188  swc1        $f0, 0x188($a3)
    ctx->pc = 0x22efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 392), bits); }
    // 0x22efcc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efd0: 0x3c043e4c  lui         $a0, 0x3E4C
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15948 << 16));
    // 0x22efd4: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x22efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x22efd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22efd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22efdc: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x22efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22efe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22efe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22efe4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x22efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x22efe8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22efec: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22eff0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22eff4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22eff8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22eff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22effc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EFFCu;
    {
        const bool branch_taken_0x22effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22effc) {
            ctx->pc = 0x22F020u;
            goto label_22f020;
        }
    }
    ctx->pc = 0x22F004u;
    // 0x22f004: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22f008: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22f00c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f010: 0x34457fff  ori         $a1, $v0, 0x7FFF
    ctx->pc = 0x22f010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22f014: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x22f014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22f018: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22f01c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22f01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_22f020:
    // 0x22f020: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f024: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22f028: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x22f028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x22f02c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f030: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x22f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22f034: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x22f034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x22f038: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22f038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22f03c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f040: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f044: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F044u;
    {
        const bool branch_taken_0x22f044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f044) {
            ctx->pc = 0x22F068u;
            goto label_22f068;
        }
    }
    ctx->pc = 0x22F04Cu;
    // 0x22f04c: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x22f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22f050: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x22f050u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22f054: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22f058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f05c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F05Cu;
    {
        const bool branch_taken_0x22f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f05c) {
            ctx->pc = 0x22F068u;
            goto label_22f068;
        }
    }
    ctx->pc = 0x22F064u;
    // 0x22f064: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22f064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_22f068:
    // 0x22f068: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x22f06c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22f070: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22f070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f074: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f078: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f07c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f080: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f084: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22f088: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22f08c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22F08Cu, 0x22F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22f094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x22f098: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f09c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0a0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x22f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22f0a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f0a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22F0A8u;
    SET_GPR_U32(ctx, 31, 0x22F0B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22F0A8u, 0x22F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0B0u;
label_22f0b0:
    // 0x22f0b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22f0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22f0b8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f0c0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0c8: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x22f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f0d0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x22f0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x22f0d4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0d8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22f0dc: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0e4: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x22f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f0ec: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x22f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x22f0f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f0f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f100: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f104: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x22f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f10c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22f110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f114: 0x0  nop
    ctx->pc = 0x22f114u;
    // NOP
    // 0x22f118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f11c: 0x0  nop
    ctx->pc = 0x22f11cu;
    // NOP
    // 0x22f120: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22F120u;
    {
        const bool branch_taken_0x22f120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f120) {
            ctx->pc = 0x22F150u;
            goto label_22f150;
        }
    }
    ctx->pc = 0x22F128u;
    // 0x22f128: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f12c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f130: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x22f134: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22f138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f13c: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f144: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22f144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22f148: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F148u;
    {
        const bool branch_taken_0x22f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f148) {
            ctx->pc = 0x22F170u;
            goto label_22f170;
        }
    }
    ctx->pc = 0x22F150u;
label_22f150:
    // 0x22f150: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f154: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f158: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22f158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22f15c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22f15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22f160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f164: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f16c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22f16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22f170:
    // 0x22f170: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f174: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f178: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f17c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f180: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22f180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f184: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x22f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f188: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f18c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22f190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f194: 0x0  nop
    ctx->pc = 0x22f194u;
    // NOP
    // 0x22f198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f19c: 0x0  nop
    ctx->pc = 0x22f19cu;
    // NOP
    // 0x22f1a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22F1A0u;
    {
        const bool branch_taken_0x22f1a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f1a0) {
            ctx->pc = 0x22F1D0u;
            goto label_22f1d0;
        }
    }
    ctx->pc = 0x22F1A8u;
    // 0x22f1a8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f1b0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x22f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x22f1b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22f1b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1bc: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f1c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f1c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22f1c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F1C8u;
    {
        const bool branch_taken_0x22f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1c8) {
            ctx->pc = 0x22F1F0u;
            goto label_22f1f0;
        }
    }
    ctx->pc = 0x22F1D0u;
label_22f1d0:
    // 0x22f1d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f1d8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22f1dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22f1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1e4: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f1e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f1ec: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_22f1f0:
    // 0x22f1f0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1f4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x22f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f1f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x22f1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f200: 0x0  nop
    ctx->pc = 0x22f200u;
    // NOP
    // 0x22f204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f208: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22f208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x22f20c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f210: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22f214: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22F214u;
    SET_GPR_U32(ctx, 31, 0x22F21Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22F214u, 0x22F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F21Cu;
label_22f21c:
    // 0x22f21c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f220: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22F220u;
    SET_GPR_U32(ctx, 31, 0x22F228u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22F220u, 0x22F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F228u;
label_22f228:
    // 0x22f228: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f22c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f230: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f234: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f238: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f23c: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f244: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22f244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x22f248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f24c: 0x0  nop
    ctx->pc = 0x22f24cu;
    // NOP
    // 0x22f250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f254: 0x0  nop
    ctx->pc = 0x22f254u;
    // NOP
    // 0x22f258: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x22F258u;
    {
        const bool branch_taken_0x22f258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f258) {
            ctx->pc = 0x22F3E0u;
            goto label_22f3e0;
        }
    }
    ctx->pc = 0x22F260u;
    // 0x22f260: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f264: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f268: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f26c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f270: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f274: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f27c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x22f280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f284: 0x0  nop
    ctx->pc = 0x22f284u;
    // NOP
    // 0x22f288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f28c: 0x0  nop
    ctx->pc = 0x22f28cu;
    // NOP
    // 0x22f290: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x22F290u;
    {
        const bool branch_taken_0x22f290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f290) {
            ctx->pc = 0x22F3E0u;
            goto label_22f3e0;
        }
    }
    ctx->pc = 0x22F298u;
    // 0x22f298: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f29c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22f2a0: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F3E0u;
            goto label_22f3e0;
        }
    }
    ctx->pc = 0x22F2A8u;
    // 0x22f2a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f2ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2b0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x22f2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f2b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2b8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f2bc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x22f2c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22f2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f2c8: 0x0  nop
    ctx->pc = 0x22f2c8u;
    // NOP
    // 0x22f2cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f2d0: 0x0  nop
    ctx->pc = 0x22f2d0u;
    // NOP
    // 0x22f2d4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x22F2D4u;
    {
        const bool branch_taken_0x22f2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f2d4) {
            ctx->pc = 0x22F344u;
            goto label_22f344;
        }
    }
    ctx->pc = 0x22F2DCu;
    // 0x22f2dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F2DCu;
    SET_GPR_U32(ctx, 31, 0x22F2E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F2DCu, 0x22F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2E4u;
label_22f2e4:
    // 0x22f2e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f2e8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22f2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22f2ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F2ECu;
    {
        const bool branch_taken_0x22f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2ec) {
            ctx->pc = 0x22F31Cu;
            goto label_22f31c;
        }
    }
    ctx->pc = 0x22F2F4u;
    // 0x22f2f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f2fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f300: 0x24063c1b  addiu       $a2, $zero, 0x3C1B
    ctx->pc = 0x22f300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15387));
    // 0x22f304: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f308: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f30c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F30Cu;
    SET_GPR_U32(ctx, 31, 0x22F314u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F30Cu, 0x22F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F314u;
label_22f314:
    // 0x22f314: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x22F314u;
    {
        const bool branch_taken_0x22f314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f314) {
            ctx->pc = 0x22F3E0u;
            goto label_22f3e0;
        }
    }
    ctx->pc = 0x22F31Cu;
label_22f31c:
    // 0x22f31c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f320: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f328: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x22f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
    // 0x22f32c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F334u;
    SET_GPR_U32(ctx, 31, 0x22F33Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F334u, 0x22F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F33Cu;
label_22f33c:
    // 0x22f33c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22F33Cu;
    {
        const bool branch_taken_0x22f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f33c) {
            ctx->pc = 0x22F3E0u;
            goto label_22f3e0;
        }
    }
    ctx->pc = 0x22F344u;
label_22f344:
    // 0x22f344: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f348: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22f348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f34c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22f350: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22f354: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f358: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22f358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22f35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f360: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f364: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f368: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f36c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f370: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22f370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f374: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f378: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22f378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f37c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f380: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22f380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f384: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f388: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22f388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22f38c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F38Cu;
    SET_GPR_U32(ctx, 31, 0x22F394u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F38Cu, 0x22F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F394u;
label_22f394:
    // 0x22f394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f398: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22f39c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22f3a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22f3a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22f3a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22f3a8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22f3acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f3b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F3B0u;
    SET_GPR_U32(ctx, 31, 0x22F3B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F3B0u, 0x22F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3B8u;
label_22f3b8:
    // 0x22f3b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f3bc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f3c0: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x22f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x22f3c4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22f3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22f3c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22f3c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22f3cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f3d4: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22f3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22f3d8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x22F3D8u;
    {
        const bool branch_taken_0x22f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3d8) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F3E0u;
label_22f3e0:
    // 0x22f3e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3e4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22f3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22f3e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22f3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22f3ec: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x22f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x22f3f0: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x22F3F0u;
    {
        const bool branch_taken_0x22f3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3f0) {
            ctx->pc = 0x22F764u;
            goto label_22f764;
        }
    }
    ctx->pc = 0x22F3F8u;
    // 0x22f3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f3fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f400: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22f400u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f404: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f408: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f40c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f410: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x22f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x22f414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f418: 0x0  nop
    ctx->pc = 0x22f418u;
    // NOP
    // 0x22f41c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x22f41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22f420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f424: 0x0  nop
    ctx->pc = 0x22f424u;
    // NOP
    // 0x22f428: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22f42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f430: 0x0  nop
    ctx->pc = 0x22f430u;
    // NOP
    // 0x22f434: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x22f434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22f438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22f43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f440: 0x0  nop
    ctx->pc = 0x22f440u;
    // NOP
    // 0x22f444: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22f448: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x22f448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x22f44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f450: 0x0  nop
    ctx->pc = 0x22f450u;
    // NOP
    // 0x22f454: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22f454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22f458: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x22f458u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x22f45c: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x22f45cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f460: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x22f460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f464: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x22f464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f468: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x22f468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x22f46c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22f470: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22F470u;
    SET_GPR_U32(ctx, 31, 0x22F478u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22F470u, 0x22F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F478u;
label_22f478:
    // 0x22f478: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22f478u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f47c: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x22F47Cu;
    {
        const bool branch_taken_0x22f47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f47c) {
            ctx->pc = 0x22F5E4u;
            goto label_22f5e4;
        }
    }
    ctx->pc = 0x22F484u;
    // 0x22f484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f488: 0x0  nop
    ctx->pc = 0x22f488u;
    // NOP
    // 0x22f48c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22f490: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x22f490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x22f494: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22f494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f498: 0x0  nop
    ctx->pc = 0x22f498u;
    // NOP
    // 0x22f49c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4a4: 0x0  nop
    ctx->pc = 0x22f4a4u;
    // NOP
    // 0x22f4a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22f4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22f4ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4b4: 0x0  nop
    ctx->pc = 0x22f4b4u;
    // NOP
    // 0x22f4b8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x22f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x22f4bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f4c0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x22f4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f4c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f4c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f4cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f4d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f4d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f4dc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22f4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22f4e0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f4e4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22f4e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f4ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f4ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f4f0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f4f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f4f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f4f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F4F8u;
    SET_GPR_U32(ctx, 31, 0x22F500u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F4F8u, 0x22F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F500u;
label_22f500:
    // 0x22f500: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F500u;
    SET_GPR_U32(ctx, 31, 0x22F508u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F500u, 0x22F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F508u;
label_22f508:
    // 0x22f508: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F508u;
    {
        const bool branch_taken_0x22f508 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22f508) {
            ctx->pc = 0x22F524u;
            goto label_22f524;
        }
    }
    ctx->pc = 0x22F510u;
    // 0x22f510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f514: 0x0  nop
    ctx->pc = 0x22f514u;
    // NOP
    // 0x22f518: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F51Cu;
    {
        const bool branch_taken_0x22f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f51c) {
            ctx->pc = 0x22F540u;
            goto label_22f540;
        }
    }
    ctx->pc = 0x22F524u;
label_22f524:
    // 0x22f524: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22f524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22f528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f52c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22f52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22f530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f534: 0x0  nop
    ctx->pc = 0x22f534u;
    // NOP
    // 0x22f538: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f53c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22f53cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22f540:
    // 0x22f540: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f548: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f54c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f550: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f554: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f558: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f55c: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x22f55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x22f560: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x22f560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x22f564: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22f568: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x22f568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x22f56c: 0x34e80006  ori         $t0, $a3, 0x6
    ctx->pc = 0x22f56cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x22f570: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f574: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f578: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x22f578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x22f57c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f580: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f580u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f584: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f588: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f588u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f58c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F58Cu;
    SET_GPR_U32(ctx, 31, 0x22F594u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F58Cu, 0x22F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F594u;
label_22f594:
    // 0x22f594: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x22f594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f598: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x22f59c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x22f59cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22f5a0: 0x3c080014  lui         $t0, 0x14
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20 << 16));
    // 0x22f5a4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x22f5a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x22f5a8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F5A8u;
    SET_GPR_U32(ctx, 31, 0x22F5B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F5A8u, 0x22F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5B0u;
label_22f5b0:
    // 0x22f5b0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22f5b4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22f5b8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F5B8u;
    SET_GPR_U32(ctx, 31, 0x22F5C0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F5B8u, 0x22F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5C0u;
label_22f5c0:
    // 0x22f5c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f5c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f5c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f5cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f5d0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22f5d4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f5d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f5d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f5dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F5DCu;
    SET_GPR_U32(ctx, 31, 0x22F5E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F5DCu, 0x22F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5E4u;
label_22f5e4:
    // 0x22f5e4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x22f5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f5ec: 0x0  nop
    ctx->pc = 0x22f5ecu;
    // NOP
    // 0x22f5f0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x22f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22f5f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f5f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22f5fc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22F5FCu;
    SET_GPR_U32(ctx, 31, 0x22F604u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22F5FCu, 0x22F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F604u;
label_22f604:
    // 0x22f604: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22F604u;
    {
        const bool branch_taken_0x22f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f604) {
            ctx->pc = 0x22F764u;
            goto label_22f764;
        }
    }
    ctx->pc = 0x22F60Cu;
    // 0x22f60c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f610: 0x0  nop
    ctx->pc = 0x22f610u;
    // NOP
    // 0x22f614: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22f618: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f620: 0x0  nop
    ctx->pc = 0x22f620u;
    // NOP
    // 0x22f624: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f62c: 0x0  nop
    ctx->pc = 0x22f62cu;
    // NOP
    // 0x22f630: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22f630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22f634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22f638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f63c: 0x0  nop
    ctx->pc = 0x22f63cu;
    // NOP
    // 0x22f640: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x22f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x22f644: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f648: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x22f648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f64c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f650: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f654: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f660: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f664: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22f664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22f668: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f66c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f670: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f674: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22f674u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f678: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f67c: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x22f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x22f680: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f680u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f684: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F684u;
    SET_GPR_U32(ctx, 31, 0x22F68Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F684u, 0x22F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F68Cu;
label_22f68c:
    // 0x22f68c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F68Cu;
    SET_GPR_U32(ctx, 31, 0x22F694u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F68Cu, 0x22F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F694u;
label_22f694:
    // 0x22f694: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F694u;
    {
        const bool branch_taken_0x22f694 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22f694) {
            ctx->pc = 0x22F6B0u;
            goto label_22f6b0;
        }
    }
    ctx->pc = 0x22F69Cu;
    // 0x22f69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f6a0: 0x0  nop
    ctx->pc = 0x22f6a0u;
    // NOP
    // 0x22f6a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f6a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F6A8u;
    {
        const bool branch_taken_0x22f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6a8) {
            ctx->pc = 0x22F6CCu;
            goto label_22f6cc;
        }
    }
    ctx->pc = 0x22F6B0u;
label_22f6b0:
    // 0x22f6b0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22f6b4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f6b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22f6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22f6bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22f6bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f6c0: 0x0  nop
    ctx->pc = 0x22f6c0u;
    // NOP
    // 0x22f6c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f6c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22f6c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22f6cc:
    // 0x22f6cc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f6d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f6d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f6dc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f6e0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22f6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22f6e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f6e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f6ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f6f0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x22f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x22f6f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22f6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f6f8: 0x34850006  ori         $a1, $a0, 0x6
    ctx->pc = 0x22f6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x22f6fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f700: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f704: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22f708: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f70c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f710: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f714: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f714u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f718: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F718u;
    SET_GPR_U32(ctx, 31, 0x22F720u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F718u, 0x22F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F720u;
label_22f720:
    // 0x22f720: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22f724: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22f728: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F728u;
    SET_GPR_U32(ctx, 31, 0x22F730u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F728u, 0x22F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F730u;
label_22f730:
    // 0x22f730: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22f734: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22f738: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22F738u;
    SET_GPR_U32(ctx, 31, 0x22F740u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22F738u, 0x22F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f744: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f748: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f74c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f750: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22f754: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f758: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f758u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f75c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F75Cu;
    SET_GPR_U32(ctx, 31, 0x22F764u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F75Cu, 0x22F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F764u;
label_22f764:
    // 0x22f764: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f768: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22f768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22f76c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22F76Cu;
    {
        const bool branch_taken_0x22f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f76c) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F774u;
    // 0x22f774: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f778: 0x8470127a  lh          $s0, 0x127A($v1)
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22f77c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x22F77Cu;
    {
        const bool branch_taken_0x22f77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f77c) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F784u;
    // 0x22f784: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f788: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f78c: 0x8c710030  lw          $s1, 0x30($v1)
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22f790: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22f794: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x22f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x22f798: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22f798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22f79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f7a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22f7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f7a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f7ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22f7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22f7b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7b8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f7bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f7c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22f7cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F7CCu;
    SET_GPR_U32(ctx, 31, 0x22F7D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F7CCu, 0x22F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7D4u;
label_22f7d4:
    // 0x22f7d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f7d8: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f7dc: 0x248200b4  addiu       $v0, $a0, 0xB4
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x22f7e0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x22f7e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22f7e4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22f7e4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22f7e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f7ec: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x22f7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22f7f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F7F0u;
    SET_GPR_U32(ctx, 31, 0x22F7F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F7F0u, 0x22F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7F8u;
label_22f7f8:
    // 0x22f7f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22f7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f7fc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22f800: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x22f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x22f804: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22f804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22f808: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22f808u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22f80c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f810: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f814: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22f814u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22f818:
    // 0x22f818: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x22f818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f828: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22f828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22f82c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F834u;
}
