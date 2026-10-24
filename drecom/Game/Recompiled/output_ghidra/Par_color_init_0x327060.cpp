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

// Function: Par_color_init
// Address: 0x327060 - 0x3271e4
void Par_color_init_0x327060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Par_color_init_0x327060");
#endif

    switch (ctx->pc) {
        case 0x327094u: goto label_327094;
        case 0x32713cu: goto label_32713c;
        case 0x32715cu: goto label_32715c;
        default: break;
    }

    ctx->pc = 0x327060u;

    // 0x327060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x327064: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x327064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x327068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32706c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x32706cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x327070: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327074: 0x90630242  lbu         $v1, 0x242($v1)
    ctx->pc = 0x327074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 578)));
    // 0x327078: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32707c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327080: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x327080u;
    {
        const bool branch_taken_0x327080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327080) {
            ctx->pc = 0x3271D0u;
            goto label_3271d0;
        }
    }
    ctx->pc = 0x327088u;
    // 0x327088: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327088u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32708c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x32708Cu;
    {
        const bool branch_taken_0x32708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32708c) {
            ctx->pc = 0x3271B0u;
            goto label_3271b0;
        }
    }
    ctx->pc = 0x327094u;
label_327094:
    // 0x327094: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x327094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32709c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3270a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3270a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3270a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3270a8: 0x8c420198  lw          $v0, 0x198($v0)
    ctx->pc = 0x3270a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x3270ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3270ACu;
    {
        const bool branch_taken_0x3270ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3270ac) {
            ctx->pc = 0x3270C8u;
            goto label_3270c8;
        }
    }
    ctx->pc = 0x3270B4u;
    // 0x3270b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3270b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3270b8: 0x0  nop
    ctx->pc = 0x3270b8u;
    // NOP
    // 0x3270bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3270bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3270c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3270C0u;
    {
        const bool branch_taken_0x3270c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3270c0) {
            ctx->pc = 0x3270E4u;
            goto label_3270e4;
        }
    }
    ctx->pc = 0x3270C8u;
label_3270c8:
    // 0x3270c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3270c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3270cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3270ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3270d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3270d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3270d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3270d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3270d8: 0x0  nop
    ctx->pc = 0x3270d8u;
    // NOP
    // 0x3270dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3270dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3270e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3270e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3270e4:
    // 0x3270e4: 0xc4800210  lwc1        $f0, 0x210($a0)
    ctx->pc = 0x3270e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3270e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3270e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3270ec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3270f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3270f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3270f4: 0x0  nop
    ctx->pc = 0x3270f4u;
    // NOP
    // 0x3270f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3270f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3270fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3270fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327108: 0xe4400284  swc1        $f0, 0x284($v0)
    ctx->pc = 0x327108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 644), bits); }
    // 0x32710c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x32710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x327110: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327118: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x327118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32711c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32711cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x327120: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327128: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32712c: 0x24a501c0  addiu       $a1, $a1, 0x1C0
    ctx->pc = 0x32712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x327130: 0x244601c0  addiu       $a2, $v0, 0x1C0
    ctx->pc = 0x327130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x327134: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x327134u;
    SET_GPR_U32(ctx, 31, 0x32713Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x327134u, 0x32713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32713Cu;
label_32713c:
    // 0x32713c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x32713cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327140: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327148: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32714c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327150: 0xc44c0284  lwc1        $f12, 0x284($v0)
    ctx->pc = 0x327150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327154: 0xc040c60  jal         func_103180
    ctx->pc = 0x327154u;
    SET_GPR_U32(ctx, 31, 0x32715Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x32715Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32715Cu) { return; }
    ctx->pc = 0x32715Cu;
label_32715c:
    // 0x32715c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x32715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327160: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32716c: 0xe4600244  swc1        $f0, 0x244($v1)
    ctx->pc = 0x32716cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 580), bits); }
    // 0x327170: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x327170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327174: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32717c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327180: 0xe4600254  swc1        $f0, 0x254($v1)
    ctx->pc = 0x327180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 596), bits); }
    // 0x327184: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x327184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327188: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32718c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327194: 0xe4600264  swc1        $f0, 0x264($v1)
    ctx->pc = 0x327194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 612), bits); }
    // 0x327198: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x327198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32719c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x32719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3271a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3271a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3271a8: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x3271a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x3271ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3271acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3271b0:
    // 0x3271b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3271b4: 0x90630242  lbu         $v1, 0x242($v1)
    ctx->pc = 0x3271b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 578)));
    // 0x3271b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3271b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3271bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3271c0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3271c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3271c4: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3271C4u;
    {
        const bool branch_taken_0x3271c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3271c4) {
            ctx->pc = 0x327094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327094;
        }
    }
    ctx->pc = 0x3271CCu;
    // 0x3271cc: 0x0  nop
    ctx->pc = 0x3271ccu;
    // NOP
label_3271d0:
    // 0x3271d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3271d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3271d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3271d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3271d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3271d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3271dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3271DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3271DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3271E4u;
}
