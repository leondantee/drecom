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

// Function: Get_speed
// Address: 0x25ad00 - 0x25b180
void Get_speed_0x25ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_speed_0x25ad00");
#endif

    switch (ctx->pc) {
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae94u: goto label_25ae94;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aedcu: goto label_25aedc;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b090u: goto label_25b090;
        case 0x25b0a8u: goto label_25b0a8;
        default: break;
    }

    ctx->pc = 0x25ad00u;

    // 0x25ad00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25ad04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x25ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x25ad08: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x25ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x25ad0c: 0xa3a500a8  sb          $a1, 0xA8($sp)
    ctx->pc = 0x25ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 5));
    // 0x25ad10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ad14: 0x8c6309f8  lw          $v1, 0x9F8($v1)
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x25ad18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x25ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x25ad1c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD1Cu;
    {
        const bool branch_taken_0x25ad1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25ad1c) {
            ctx->pc = 0x25AD38u;
            goto label_25ad38;
        }
    }
    ctx->pc = 0x25AD24u;
    // 0x25ad24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ad24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad28: 0x0  nop
    ctx->pc = 0x25ad28u;
    // NOP
    // 0x25ad2c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25ad2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ad30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AD30u;
    {
        const bool branch_taken_0x25ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad30) {
            ctx->pc = 0x25AD54u;
            goto label_25ad54;
        }
    }
    ctx->pc = 0x25AD38u;
label_25ad38:
    // 0x25ad38: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25ad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25ad40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25ad40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25ad44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ad44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad48: 0x0  nop
    ctx->pc = 0x25ad48u;
    // NOP
    // 0x25ad4c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25ad4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ad50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25ad50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25ad54:
    // 0x25ad54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ad58: 0x8c6309f8  lw          $v1, 0x9F8($v1)
    ctx->pc = 0x25ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x25ad5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25ad5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25ad60: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD60u;
    {
        const bool branch_taken_0x25ad60 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25ad60) {
            ctx->pc = 0x25AD7Cu;
            goto label_25ad7c;
        }
    }
    ctx->pc = 0x25AD68u;
    // 0x25ad68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ad68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad6c: 0x0  nop
    ctx->pc = 0x25ad6cu;
    // NOP
    // 0x25ad70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25ad70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AD74u;
    {
        const bool branch_taken_0x25ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad74) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD7Cu;
label_25ad7c:
    // 0x25ad7c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25ad80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25ad84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25ad84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25ad88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25ad88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad8c: 0x0  nop
    ctx->pc = 0x25ad8cu;
    // NOP
    // 0x25ad90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25ad90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ad94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25ad94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25ad98:
    // 0x25ad98: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x25ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x25ad9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25ad9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ada0: 0x0  nop
    ctx->pc = 0x25ada0u;
    // NOP
    // 0x25ada4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25ada4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25ada8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25ada8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25adac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adb0: 0xe46009d0  swc1        $f0, 0x9D0($v1)
    ctx->pc = 0x25adb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2512), bits); }
    // 0x25adb4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adb8: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x25adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x25adbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25adbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25adc0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adc4: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x25adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x25adc8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25adcc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25add0: 0x8c6305f0  lw          $v1, 0x5F0($v1)
    ctx->pc = 0x25add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1520)));
    // 0x25add4: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x25ADD4u;
    {
        const bool branch_taken_0x25add4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25add4) {
            ctx->pc = 0x25B100u;
            goto label_25b100;
        }
    }
    ctx->pc = 0x25ADDCu;
    // 0x25addc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ade0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ade4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25ade4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ade8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x25ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25adec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25adecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25adf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25adf4: 0xc44009d0  lwc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25adf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25adf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25adfc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae00: 0xc44009d4  lwc1        $f0, 0x9D4($v0)
    ctx->pc = 0x25ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25ae04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25ae08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae0c: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x25ae0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x25ae10: 0xa7a20038  sh          $v0, 0x38($sp)
    ctx->pc = 0x25ae10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ae14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25ae18: 0xa7a2003a  sh          $v0, 0x3A($sp)
    ctx->pc = 0x25ae18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ae1c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae20: 0x8c4205f0  lw          $v0, 0x5F0($v0)
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1520)));
    // 0x25ae24: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x25ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x25ae28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae2c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x25ae2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x25ae30: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x25ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x25ae34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ae3c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ae40: 0x244605fc  addiu       $a2, $v0, 0x5FC
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1532));
    // 0x25ae44: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25AE44u;
    SET_GPR_U32(ctx, 31, 0x25AE4Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25AE44u, 0x25AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE4Cu;
label_25ae4c:
    // 0x25ae4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x25ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ae50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ae54: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25AE54u;
    SET_GPR_U32(ctx, 31, 0x25AE5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25AE5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25AE5Cu) { return; }
    ctx->pc = 0x25AE5Cu;
label_25ae5c:
    // 0x25ae5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae60: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25ae60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25ae64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ae68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ae6c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25AE6Cu;
    {
        const bool branch_taken_0x25ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ae6c) {
            ctx->pc = 0x25AE94u;
            goto label_25ae94;
        }
    }
    ctx->pc = 0x25AE74u;
    // 0x25ae74: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae78: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae80: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x25ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x25ae84: 0x246502e0  addiu       $a1, $v1, 0x2E0
    ctx->pc = 0x25ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x25ae88: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x25ae88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25ae8c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x25AE8Cu;
    SET_GPR_U32(ctx, 31, 0x25AE94u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x25AE8Cu, 0x25AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE94u;
label_25ae94:
    // 0x25ae94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae98: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25ae98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25ae9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25aea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aea4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AEA4u;
    {
        const bool branch_taken_0x25aea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aea4) {
            ctx->pc = 0x25AEC4u;
            goto label_25aec4;
        }
    }
    ctx->pc = 0x25AEACu;
    // 0x25aeac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aeb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aeb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aeb8: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x25aeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25aebc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x25AEBCu;
    SET_GPR_U32(ctx, 31, 0x25AEC4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x25AEBCu, 0x25AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEC4u;
label_25aec4:
    // 0x25aec4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aec8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aecc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25aed0: 0x244602e0  addiu       $a2, $v0, 0x2E0
    ctx->pc = 0x25aed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x25aed4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x25AED4u;
    SET_GPR_U32(ctx, 31, 0x25AEDCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x25AED4u, 0x25AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEDCu;
label_25aedc:
    // 0x25aedc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25aee0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25aee0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aee4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aee8: 0x246302e0  addiu       $v1, $v1, 0x2E0
    ctx->pc = 0x25aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
    // 0x25aeec: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25aef0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aef4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25aef4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25aef8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25aef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25aefc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25aefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25af00: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x25AF00u;
    {
        const bool branch_taken_0x25af00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af00) {
            ctx->pc = 0x25B100u;
            goto label_25b100;
        }
    }
    ctx->pc = 0x25AF08u;
    // 0x25af08: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25af14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AF14u;
    {
        const bool branch_taken_0x25af14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af14) {
            ctx->pc = 0x25AF58u;
            goto label_25af58;
        }
    }
    ctx->pc = 0x25AF1Cu;
    // 0x25af1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x25af1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af24: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25af24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x25af28: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af2c: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25af2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25af30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25af34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25af34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25af38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AF38u;
    {
        const bool branch_taken_0x25af38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25af38) {
            ctx->pc = 0x25AF58u;
            goto label_25af58;
        }
    }
    ctx->pc = 0x25AF40u;
    // 0x25af40: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af44: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25af44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25af48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25af48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25af4c: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x25af4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25af50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25af54: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x25af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
label_25af58:
    // 0x25af58: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25af60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25af64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AF64u;
    {
        const bool branch_taken_0x25af64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af64) {
            ctx->pc = 0x25AF78u;
            goto label_25af78;
        }
    }
    ctx->pc = 0x25AF6Cu;
    // 0x25af6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25af6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25af70: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af74: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_25af78:
    // 0x25af78: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25af78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25af7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25af80: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25af84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AF84u;
    {
        const bool branch_taken_0x25af84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af84) {
            ctx->pc = 0x25AF98u;
            goto label_25af98;
        }
    }
    ctx->pc = 0x25AF8Cu;
    // 0x25af8c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x25af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af90: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af94: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25af94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_25af98:
    // 0x25af98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25afa0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25afa4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25AFA4u;
    {
        const bool branch_taken_0x25afa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25afa4) {
            ctx->pc = 0x25AFF4u;
            goto label_25aff4;
        }
    }
    ctx->pc = 0x25AFACu;
    // 0x25afac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afb0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afb4: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x25afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afb8: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x25afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25afc0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x25afc4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afc8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afcc: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x25afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afd0: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x25afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25afd8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25afd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x25afdc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afe0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afe4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x25afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afe8: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x25afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25aff0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25aff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_25aff4:
    // 0x25aff4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25aff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25aff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25affc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b000: 0xe460018c  swc1        $f0, 0x18C($v1)
    ctx->pc = 0x25b000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 396), bits); }
    // 0x25b004: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b008: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25b008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x25b00c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x25B00Cu;
    {
        const bool branch_taken_0x25b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b00c) {
            ctx->pc = 0x25B0F8u;
            goto label_25b0f8;
        }
    }
    ctx->pc = 0x25B014u;
    // 0x25b014: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b018: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25b018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25b01c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b020: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25b020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25b024: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x25B024u;
    {
        const bool branch_taken_0x25b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b024) {
            ctx->pc = 0x25B0F8u;
            goto label_25b0f8;
        }
    }
    ctx->pc = 0x25B02Cu;
    // 0x25b02c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b030: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x25b030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x25b034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b038: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x25b038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x25b03c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b040: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x25b040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x25b044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b048: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x25b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x25b04c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b050: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b054: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x25B054u;
    SET_GPR_U32(ctx, 31, 0x25B05Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x25B05Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B05Cu) { return; }
    ctx->pc = 0x25B05Cu;
label_25b05c:
    // 0x25b05c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x25b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b060: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x25b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b064: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25b064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25b068: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x25b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x25b06c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25b074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b078: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x25b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b07c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x25b07cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25b080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b084: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x25b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x25b088: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x25B088u;
    SET_GPR_U32(ctx, 31, 0x25B090u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x25B090u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B090u) { return; }
    ctx->pc = 0x25B090u;
label_25b090:
    // 0x25b090: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b094: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b098: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x25b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x25b09c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x25b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b0a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x25B0A0u;
    SET_GPR_U32(ctx, 31, 0x25B0A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x25B0A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B0A8u) { return; }
    ctx->pc = 0x25B0A8u;
label_25b0a8:
    // 0x25b0a8: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b0ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b0b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25b0b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B0B4u;
    {
        const bool branch_taken_0x25b0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0b4) {
            ctx->pc = 0x25B0D0u;
            goto label_25b0d0;
        }
    }
    ctx->pc = 0x25B0BCu;
    // 0x25b0bc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b0c0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x25b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b0c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b0c8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0cc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_25b0d0:
    // 0x25b0d0: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b0d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b0d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b0dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B0DCu;
    {
        const bool branch_taken_0x25b0dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0dc) {
            ctx->pc = 0x25B0F8u;
            goto label_25b0f8;
        }
    }
    ctx->pc = 0x25B0E4u;
    // 0x25b0e4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x25b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b0e8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25b0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b0f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0f4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_25b0f8:
    // 0x25b0f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25B0F8u;
    {
        const bool branch_taken_0x25b0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b0f8) {
            ctx->pc = 0x25B170u;
            goto label_25b170;
        }
    }
    ctx->pc = 0x25B100u;
label_25b100:
    // 0x25b100: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b104: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b108: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25b10c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B10Cu;
    {
        const bool branch_taken_0x25b10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b10c) {
            ctx->pc = 0x25B120u;
            goto label_25b120;
        }
    }
    ctx->pc = 0x25B114u;
    // 0x25b114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b118: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b11c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25b11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_25b120:
    // 0x25b120: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b124: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b128: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25b12c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B12Cu;
    {
        const bool branch_taken_0x25b12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b12c) {
            ctx->pc = 0x25B140u;
            goto label_25b140;
        }
    }
    ctx->pc = 0x25B134u;
    // 0x25b134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b138: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b13c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25b13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_25b140:
    // 0x25b140: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b144: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b148: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25b148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25b14c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B14Cu;
    {
        const bool branch_taken_0x25b14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b14c) {
            ctx->pc = 0x25B160u;
            goto label_25b160;
        }
    }
    ctx->pc = 0x25B154u;
    // 0x25b154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25b154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b158: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b15c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25b15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_25b160:
    // 0x25b160: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b168: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b16c: 0xe460018c  swc1        $f0, 0x18C($v1)
    ctx->pc = 0x25b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 396), bits); }
label_25b170:
    // 0x25b170: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25b170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b174: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25b178: 0x3e00008  jr          $ra
    ctx->pc = 0x25B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B180u;
}
