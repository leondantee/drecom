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

// Function: Em0c_R1_mv14
// Address: 0x22d610 - 0x22db8c
void Em0c_R1_mv14_0x22d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv14_0x22d610");
#endif

    switch (ctx->pc) {
        case 0x22d680u: goto label_22d680;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d708u: goto label_22d708;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d810u: goto label_22d810;
        case 0x22d864u: goto label_22d864;
        case 0x22d880u: goto label_22d880;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22dac0u: goto label_22dac0;
        case 0x22dad0u: goto label_22dad0;
        case 0x22dadcu: goto label_22dadc;
        case 0x22db14u: goto label_22db14;
        default: break;
    }

    ctx->pc = 0x22d610u;

    // 0x22d610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22d614: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x22d618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d61c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x22d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x22d620: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x22d620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x22d624: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x22d628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d62c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22d62cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22d630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22d630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22d634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d638: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x22D638u;
    {
        const bool branch_taken_0x22d638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d638) {
            ctx->pc = 0x22D838u;
            goto label_22d838;
        }
    }
    ctx->pc = 0x22D640u;
    // 0x22d640: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D640u;
    {
        const bool branch_taken_0x22d640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d640) {
            ctx->pc = 0x22D650u;
            goto label_22d650;
        }
    }
    ctx->pc = 0x22D648u;
    // 0x22d648: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x22D648u;
    {
        const bool branch_taken_0x22d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d648) {
            ctx->pc = 0x22DB78u;
            goto label_22db78;
        }
    }
    ctx->pc = 0x22D650u;
label_22d650:
    // 0x22d650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22d650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d654: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d658: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22d658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d65c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d660: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d664: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d66c: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22d670: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22d674: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d678: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D678u;
    SET_GPR_U32(ctx, 31, 0x22D680u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D678u, 0x22D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D680u;
label_22d680:
    // 0x22d680: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x22d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x22d684: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d688: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22d688u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22d68c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d690: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d694: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d698: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22d698u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d69c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d69cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d6a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22d6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22d6a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d6a8: 0x0  nop
    ctx->pc = 0x22d6a8u;
    // NOP
    // 0x22d6ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22d6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22d6b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6b4: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d6b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d6bc: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22d6bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d6c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d6c4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22d6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22d6c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d6d0: 0x0  nop
    ctx->pc = 0x22d6d0u;
    // NOP
    // 0x22d6d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22d6d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d6e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22d6e4: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x22d6e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22d6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d6ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22d6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22d6f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22D6F0u;
    SET_GPR_U32(ctx, 31, 0x22D6F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22D6F0u, 0x22D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D6F8u;
label_22d6f8:
    // 0x22d6f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d6fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d700: 0xc040c24  jal         func_103090
    ctx->pc = 0x22D700u;
    SET_GPR_U32(ctx, 31, 0x22D708u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22D708u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22D708u) { return; }
    ctx->pc = 0x22D708u;
label_22d708:
    // 0x22d708: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22d70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d710: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d714: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d718: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x22d71c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d724: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d728: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d728u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d72c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d73c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22d740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d744: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d748: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d74c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d74cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d750: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x22d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d75c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d760: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22d760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22d764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d768: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d76c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22d770: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22d774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d778: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22d778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22d77c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d780: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d784: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22d788: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x22d78c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22d790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d798: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22d79c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x22d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22d7a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d7a4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x22d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d7a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22D7A8u;
    SET_GPR_U32(ctx, 31, 0x22D7B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22D7A8u, 0x22D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7B0u;
label_22d7b0:
    // 0x22d7b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22d7b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22d7b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22D7B8u;
    {
        const bool branch_taken_0x22d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7b8) {
            ctx->pc = 0x22D7ECu;
            goto label_22d7ec;
        }
    }
    ctx->pc = 0x22D7C0u;
    // 0x22d7c0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d7c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d7c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d7cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d7d0: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x22d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x22d7d4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22d7d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d7d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d7dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D7DCu;
    SET_GPR_U32(ctx, 31, 0x22D7E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D7DCu, 0x22D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7E4u;
label_22d7e4:
    // 0x22d7e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22D7E4u;
    {
        const bool branch_taken_0x22d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d7e4) {
            ctx->pc = 0x22D810u;
            goto label_22d810;
        }
    }
    ctx->pc = 0x22D7ECu;
label_22d7ec:
    // 0x22d7ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d7f0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d7f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d7f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d7fc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22d800: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22d804: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d804u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d808: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D808u;
    SET_GPR_U32(ctx, 31, 0x22D810u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D808u, 0x22D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D810u;
label_22d810:
    // 0x22d810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d814: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22d814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x22d818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d81c: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x22d81cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x22d820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d828: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x22d828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x22d82c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d82cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d834: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_22d838:
    // 0x22d838: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22d83c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22d840: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22d840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22d844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d84c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22d850: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22d854: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22d858: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22d85c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22D85Cu;
    SET_GPR_U32(ctx, 31, 0x22D864u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22D85Cu, 0x22D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D864u;
label_22d864:
    // 0x22d864: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22d868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d86c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d870: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d874: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22d874u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d878: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22D878u;
    SET_GPR_U32(ctx, 31, 0x22D880u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22D878u, 0x22D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D880u;
label_22d880:
    // 0x22d880: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d884: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22d888: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d88c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d890: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d894: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22d894u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d89c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22d8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d8a4: 0x0  nop
    ctx->pc = 0x22d8a4u;
    // NOP
    // 0x22d8a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x22d8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x22d8ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d8b0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d8b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d8b8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22d8b8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d8bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d8c0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x22d8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x22d8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d8cc: 0x0  nop
    ctx->pc = 0x22d8ccu;
    // NOP
    // 0x22d8d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22d8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x22d8d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d8d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22d8dc: 0xc040c24  jal         func_103090
    ctx->pc = 0x22D8DCu;
    SET_GPR_U32(ctx, 31, 0x22D8E4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22D8E4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22D8E4u) { return; }
    ctx->pc = 0x22D8E4u;
label_22d8e4:
    // 0x22d8e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d8e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d8ec: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8f0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d8f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d8f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x22d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d8f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d8fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d900: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d904: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22d904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22d908: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d90c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d910: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d914: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x22d914u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x22d918: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x22d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22d91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22d920: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d924: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d928: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22d92c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d930: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x22d934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22d938: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x22d938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d940: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x22d940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x22d944: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22d948: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22d948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22d94c: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x22d94cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x22d950: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D950u;
    {
        const bool branch_taken_0x22d950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d950) {
            ctx->pc = 0x22D978u;
            goto label_22d978;
        }
    }
    ctx->pc = 0x22D958u;
    // 0x22d958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d95c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d960: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d964: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x22d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x22d968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d96c: 0x0  nop
    ctx->pc = 0x22d96cu;
    // NOP
    // 0x22d970: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d974: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22d978:
    // 0x22d978: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d97c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d980: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x22d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d988: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d990: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22d990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22d994: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d99c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x22d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d9a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9a4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x22d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d9a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d9ac: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x22d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x22d9b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9c0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d9c4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d9c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22d9c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d9cc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22d9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d9d4: 0x0  nop
    ctx->pc = 0x22d9d4u;
    // NOP
    // 0x22d9d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d9dc: 0x0  nop
    ctx->pc = 0x22d9dcu;
    // NOP
    // 0x22d9e0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x22D9E0u;
    {
        const bool branch_taken_0x22d9e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d9e0) {
            ctx->pc = 0x22DA2Cu;
            goto label_22da2c;
        }
    }
    ctx->pc = 0x22D9E8u;
    // 0x22d9e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22d9ec: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d9f0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x22d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x22d9f4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x22d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x22d9f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22d9fc: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x22d9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22da00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22da04: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22da04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22da08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da10: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x22da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22da1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22da20: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x22da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x22da24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22DA24u;
    {
        const bool branch_taken_0x22da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da24) {
            ctx->pc = 0x22DA4Cu;
            goto label_22da4c;
        }
    }
    ctx->pc = 0x22DA2Cu;
label_22da2c:
    // 0x22da2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da30: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22da30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da34: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x22da34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x22da38: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22da3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22da3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22da40: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x22da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22da44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22da48: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22da48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22da4c:
    // 0x22da4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da50: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22da5c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22da60: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22da64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22da64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22da68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22da6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22da6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22da70: 0x0  nop
    ctx->pc = 0x22da70u;
    // NOP
    // 0x22da74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22da74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22da78: 0x0  nop
    ctx->pc = 0x22da78u;
    // NOP
    // 0x22da7c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x22DA7Cu;
    {
        const bool branch_taken_0x22da7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22da7c) {
            ctx->pc = 0x22DAC0u;
            goto label_22dac0;
        }
    }
    ctx->pc = 0x22DA84u;
    // 0x22da84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da88: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x22da8c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DAC0u;
            goto label_22dac0;
        }
    }
    ctx->pc = 0x22DA94u;
    // 0x22da94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22da94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22da98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22da9c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x22da9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x22daa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daa8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22daac: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x22daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x22dab0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dab4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22dab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22dab8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DAB8u;
    SET_GPR_U32(ctx, 31, 0x22DAC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DAB8u, 0x22DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAC0u;
label_22dac0:
    // 0x22dac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dac4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22dac8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22DAC8u;
    SET_GPR_U32(ctx, 31, 0x22DAD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22DAC8u, 0x22DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAD0u;
label_22dad0:
    // 0x22dad0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dad4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22DAD4u;
    SET_GPR_U32(ctx, 31, 0x22DADCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22DAD4u, 0x22DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DADCu;
label_22dadc:
    // 0x22dadc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dae0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x22dae4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x22dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22dae8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x22dae8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22daec: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22DAECu;
    {
        const bool branch_taken_0x22daec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22daec) {
            ctx->pc = 0x22DB78u;
            goto label_22db78;
        }
    }
    ctx->pc = 0x22DAF4u;
    // 0x22daf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22daf8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dafc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22db00: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22db04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22db04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22db08: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22db08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22db0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22DB0Cu;
    SET_GPR_U32(ctx, 31, 0x22DB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22DB0Cu, 0x22DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB14u;
label_22db14:
    // 0x22db14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22db18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22db1c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22db20: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22db24: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22db24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22db28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db2c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x22db2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x22db30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22db34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22db38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22db3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22db40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22db44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22db48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22db4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22db50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22db54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22db58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22db60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22db60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22db64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db68: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22db6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22db6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22db70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22db74: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22db74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_22db78:
    // 0x22db78: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22db78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22db7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22db7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22db80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22db84: 0x3e00008  jr          $ra
    ctx->pc = 0x22DB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DB8Cu;
}
