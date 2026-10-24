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

// Function: R10a_scr_mrp_move
// Address: 0x271fc0 - 0x2724cc
void R10a_scr_mrp_move_0x271fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_scr_mrp_move_0x271fc0");
#endif

    switch (ctx->pc) {
        case 0x272028u: goto label_272028;
        case 0x272120u: goto label_272120;
        case 0x272154u: goto label_272154;
        case 0x272180u: goto label_272180;
        case 0x2721b8u: goto label_2721b8;
        case 0x272240u: goto label_272240;
        case 0x272254u: goto label_272254;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723c8u: goto label_2723c8;
        default: break;
    }

    ctx->pc = 0x271fc0u;

    // 0x271fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x271fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x271fc4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x271fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x271fc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x271fcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x271fd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271fd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271fe4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x271fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x271fe8: 0x24700b10  addiu       $s0, $v1, 0xB10
    ctx->pc = 0x271fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x271fec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271ff0: 0x2463d310  addiu       $v1, $v1, -0x2CF0
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955792));
    // 0x271ff4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x271ff8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x271ff8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38D310u));
    // 0x271ffc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x271ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x272000: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x272004: 0x2463d320  addiu       $v1, $v1, -0x2CE0
    ctx->pc = 0x272004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955808));
    // 0x272008: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x272008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27200c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x27200cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38D320u));
    // 0x272010: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x272010u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x272014: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x272014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0B9Cu));
    // 0x272018: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x272018u;
    {
        const bool branch_taken_0x272018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272018) {
            ctx->pc = 0x2724A0u;
            goto label_2724a0;
        }
    }
    ctx->pc = 0x272020u;
    // 0x272020: 0xc067694  jal         func_19DA50
    ctx->pc = 0x272020u;
    SET_GPR_U32(ctx, 31, 0x272028u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x272020u, 0x272028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27202c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x27202cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x272030: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x272030u;
    {
        const bool branch_taken_0x272030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272030) {
            ctx->pc = 0x27205Cu;
            goto label_27205c;
        }
    }
    ctx->pc = 0x272038u;
    // 0x272038: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x272038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27203c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x27203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x272040: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x272040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x272044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272048: 0x0  nop
    ctx->pc = 0x272048u;
    // NOP
    // 0x27204c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27204cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272050: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x272050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x272054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x272054u;
    {
        const bool branch_taken_0x272054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272054) {
            ctx->pc = 0x272078u;
            goto label_272078;
        }
    }
    ctx->pc = 0x27205Cu;
label_27205c:
    // 0x27205c: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x27205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272060: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x272064: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x272068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27206c: 0x0  nop
    ctx->pc = 0x27206cu;
    // NOP
    // 0x272070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x272070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272074: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x272074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_272078:
    // 0x272078: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x272078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27207c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272084: 0x0  nop
    ctx->pc = 0x272084u;
    // NOP
    // 0x272088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x272088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27208c: 0x0  nop
    ctx->pc = 0x27208cu;
    // NOP
    // 0x272090: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x272090u;
    {
        const bool branch_taken_0x272090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272090) {
            ctx->pc = 0x2720F0u;
            goto label_2720f0;
        }
    }
    ctx->pc = 0x272098u;
    // 0x272098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27209c: 0x0  nop
    ctx->pc = 0x27209cu;
    // NOP
    // 0x2720a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2720a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2720a4: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2720a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2720a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2720a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2720ac: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2720acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x2720b0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2720b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2720b8: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2720b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2720bc: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2720c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2720c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2720c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2720c8: 0x28420029  slti        $v0, $v0, 0x29
    ctx->pc = 0x2720c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2720cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2720CCu;
    {
        const bool branch_taken_0x2720cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720cc) {
            ctx->pc = 0x2720D8u;
            goto label_2720d8;
        }
    }
    ctx->pc = 0x2720D4u;
    // 0x2720d4: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x2720d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 0));
label_2720d8:
    // 0x2720d8: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2720d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2720dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2720dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2720e0: 0x2842001c  slti        $v0, $v0, 0x1C
    ctx->pc = 0x2720e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2720e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2720E4u;
    {
        const bool branch_taken_0x2720e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720e4) {
            ctx->pc = 0x2720F0u;
            goto label_2720f0;
        }
    }
    ctx->pc = 0x2720ECu;
    // 0x2720ec: 0xa6000094  sh          $zero, 0x94($s0)
    ctx->pc = 0x2720ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 0));
label_2720f0:
    // 0x2720f0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2720f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2720f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2720f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2720fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272100: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272100u;
    {
        const bool branch_taken_0x272100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272100) {
            ctx->pc = 0x272128u;
            goto label_272128;
        }
    }
    ctx->pc = 0x272108u;
    // 0x272108: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27210c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x27210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x272110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272114: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272118: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x272118u;
    SET_GPR_U32(ctx, 31, 0x272120u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x272118u, 0x272120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272120u;
label_272120:
    // 0x272120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x272120u;
    {
        const bool branch_taken_0x272120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272120) {
            ctx->pc = 0x272154u;
            goto label_272154;
        }
    }
    ctx->pc = 0x272128u;
label_272128:
    // 0x272128: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x272128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27212c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x27212cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272130: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x272134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272138: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27213c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x272140: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x272140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272144: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x272148: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27214c: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x27214Cu;
    SET_GPR_U32(ctx, 31, 0x272154u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x27214Cu, 0x272154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272154u;
label_272154:
    // 0x272154: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x272158: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27215c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x272160: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272160u;
    {
        const bool branch_taken_0x272160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272160) {
            ctx->pc = 0x272188u;
            goto label_272188;
        }
    }
    ctx->pc = 0x272168u;
    // 0x272168: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27216c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x272170: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x272170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x272174: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272178: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x272178u;
    SET_GPR_U32(ctx, 31, 0x272180u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x272178u, 0x272180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272180u;
label_272180:
    // 0x272180: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272180u;
    {
        const bool branch_taken_0x272180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272180) {
            ctx->pc = 0x2721B8u;
            goto label_2721b8;
        }
    }
    ctx->pc = 0x272188u;
label_272188:
    // 0x272188: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x27218c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272190: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x272190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x272194: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x272194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272198: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x27219c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2721a0: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x2721a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
    // 0x2721a4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2721a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2721a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2721a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2721ac: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2721acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721b0: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x2721B0u;
    SET_GPR_U32(ctx, 31, 0x2721B8u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x2721B0u, 0x2721B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721B8u;
label_2721b8:
    // 0x2721b8: 0x8e1202d0  lw          $s2, 0x2D0($s0)
    ctx->pc = 0x2721b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2721bc: 0x8e13008c  lw          $s3, 0x8C($s0)
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2721c0: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x2721c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2721c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2721c8: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x2721c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2721cc: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x2721ccu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2721d0: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x2721d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x2721d4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x2721d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2721d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2721dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2721dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2721e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2721e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2721e8: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x2721e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2721ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2721ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2721f0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2721f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2721f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2721f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2721f8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2721f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2721fc: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x272200: 0x263100b4  addiu       $s1, $s1, 0xB4
    ctx->pc = 0x272200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x272204: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x272204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272208: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x272208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27220c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x27220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272210: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272214: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x272214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272218: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x272218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27221c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272224: 0x0  nop
    ctx->pc = 0x272224u;
    // NOP
    // 0x272228: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x272228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x27222c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x27222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272230: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x272230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272234: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x272238: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x272238u;
    SET_GPR_U32(ctx, 31, 0x272240u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x272238u, 0x272240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272240u;
label_272240:
    // 0x272240: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x272240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x272244: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x272248: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x272248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x27224c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27224Cu;
    SET_GPR_U32(ctx, 31, 0x272254u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x272254u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x272254u) { return; }
    ctx->pc = 0x272254u;
label_272254:
    // 0x272254: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272258: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27225c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272260: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x272260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x272264: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x272264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272268: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27226c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27226cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272270: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x272270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x272274: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x272274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27227c: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x27227cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272280: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x272280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x272284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27228c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27228cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272290: 0x8c2219fc  lw          $v0, 0x19FC($at)
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6219FCu));
    // 0x272294: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x272294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x272298: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27229c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27229cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722a0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722a4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2722a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2722a8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2722a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722b0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722b4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2722b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2722b8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2722b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722c0: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722c4: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x2722c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2722c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2722c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2722cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2722ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2722d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722d4: 0x8c221a00  lw          $v0, 0x1A00($at)
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A00u));
    // 0x2722d8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x2722d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2722dc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2722dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2722e4: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x2722e8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2722e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2722ec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2722f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2722f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2722f4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2722f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2722f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2722f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2722fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2722fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272300: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272304: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x272304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x272308: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x272308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27230c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272310: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272314: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x272314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x272318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27231c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27231cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272320: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272324: 0x8c221a04  lw          $v0, 0x1A04($at)
    ctx->pc = 0x272324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A04u));
    // 0x272328: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x272328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x27232c: 0x8e1202d0  lw          $s2, 0x2D0($s0)
    ctx->pc = 0x27232cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x272330: 0x8e13008c  lw          $s3, 0x8C($s0)
    ctx->pc = 0x272330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x272334: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x272334u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x272338: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x272338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x27233c: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x27233cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x272340: 0x7280b628  paddub      $s6, $s4, $zero
    ctx->pc = 0x272340u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x272344: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x272344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x272348: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x272348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x27234c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27234cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x272350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272354: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x272354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x272358: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x272358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27235c: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x27235cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x272360: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272364: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x272368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27236c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x27236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x272370: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x272370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x272374: 0x263100b4  addiu       $s1, $s1, 0xB4
    ctx->pc = 0x272374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x272378: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x272378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27237c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x27237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x272380: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x272380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272384: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x272384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x272388: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x272388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27238c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x27238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x272390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272398: 0x0  nop
    ctx->pc = 0x272398u;
    // NOP
    // 0x27239c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x27239cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2723a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2723a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723a8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2723ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2723ACu;
    SET_GPR_U32(ctx, 31, 0x2723B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2723ACu, 0x2723B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2723B4u;
label_2723b4:
    // 0x2723b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2723b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723b8: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x2723b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2723bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2723bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2723c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2723C0u;
    SET_GPR_U32(ctx, 31, 0x2723C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2723C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2723C8u) { return; }
    ctx->pc = 0x2723C8u;
label_2723c8:
    // 0x2723c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2723c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723d0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723d4: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x2723d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x2723d8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2723d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723e0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723e4: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x2723e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x2723e8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2723e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723ec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2723ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2723f0: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x2723f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x2723f4: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2723f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2723f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2723f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2723fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2723fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272400: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272404: 0x8c231a08  lw          $v1, 0x1A08($at)
    ctx->pc = 0x272404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A08u));
    // 0x272408: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x272408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x27240c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x27240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272410: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272414: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272418: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x272418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x27241c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x27241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272420: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272424: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272428: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x272428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x27242c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x27242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272430: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272434: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272434u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x272438: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x272438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x27243c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27243cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x272440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x272440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272444: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272448: 0x8c231a0c  lw          $v1, 0x1A0C($at)
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A0Cu));
    // 0x27244c: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x27244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
    // 0x272450: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x272450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272454: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272458: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x27245c: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x27245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x272460: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x272460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x272464: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x272464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272468: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x272468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27246c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27246cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x272470: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272474: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x272478: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x272478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
    // 0x27247c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x27247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272484: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x272488: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x272488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x27248c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x272490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x272490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272494: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272498: 0x8c231a10  lw          $v1, 0x1A10($at)
    ctx->pc = 0x272498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A10u));
    // 0x27249c: 0xe46000bc  swc1        $f0, 0xBC($v1)
    ctx->pc = 0x27249cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 188), bits); }
label_2724a0:
    // 0x2724a0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2724a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2724a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2724a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2724a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2724a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2724ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2724acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2724b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2724b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2724b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2724b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2724b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2724b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2724bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2724bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2724c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2724c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2724c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2724C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2724C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2724CCu;
}
