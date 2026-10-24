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

// Function: srp_0d_move10
// Address: 0x327f90 - 0x3280e4
void srp_0d_move10_0x327f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0d_move10_0x327f90");
#endif

    switch (ctx->pc) {
        case 0x327fb0u: goto label_327fb0;
        case 0x327fbcu: goto label_327fbc;
        case 0x32803cu: goto label_32803c;
        case 0x32805cu: goto label_32805c;
        default: break;
    }

    ctx->pc = 0x327f90u;

    // 0x327f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x327f94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x327f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x327f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327fa0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x327fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x327fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x327fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x327fa8: 0xc0ca294  jal         func_328A50
    ctx->pc = 0x327FA8u;
    SET_GPR_U32(ctx, 31, 0x327FB0u);
    ctx->pc = 0x328A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A50u, 0x327FA8u, 0x327FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FB0u;
label_327fb0:
    // 0x327fb0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327fb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327fb4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x327FB4u;
    {
        const bool branch_taken_0x327fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fb4) {
            ctx->pc = 0x3280B0u;
            goto label_3280b0;
        }
    }
    ctx->pc = 0x327FBCu;
label_327fbc:
    // 0x327fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x327fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x327fc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x327fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x327fc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x327fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x327fc8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x327fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x327fcc: 0x8c820ab8  lw          $v0, 0xAB8($a0)
    ctx->pc = 0x327fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2744)));
    // 0x327fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327fd4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327FD4u;
    {
        const bool branch_taken_0x327fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x327fd4) {
            ctx->pc = 0x327FF0u;
            goto label_327ff0;
        }
    }
    ctx->pc = 0x327FDCu;
    // 0x327fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327fe0: 0x0  nop
    ctx->pc = 0x327fe0u;
    // NOP
    // 0x327fe4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x327fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327fe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x327FE8u;
    {
        const bool branch_taken_0x327fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fe8) {
            ctx->pc = 0x32800Cu;
            goto label_32800c;
        }
    }
    ctx->pc = 0x327FF0u;
label_327ff0:
    // 0x327ff0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x327ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x327ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327ff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328000: 0x0  nop
    ctx->pc = 0x328000u;
    // NOP
    // 0x328004: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x328004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x328008: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x328008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32800c:
    // 0x32800c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x32800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328010: 0xc4400274  lwc1        $f0, 0x274($v0)
    ctx->pc = 0x328010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328014: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x328014u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x328018: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x328018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x32801c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x32801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x328020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328024: 0x0  nop
    ctx->pc = 0x328024u;
    // NOP
    // 0x328028: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x328028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32802c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x328030: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x328030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x328034: 0xc0c96f0  jal         func_325BC0
    ctx->pc = 0x328034u;
    SET_GPR_U32(ctx, 31, 0x32803Cu);
    ctx->pc = 0x325BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325BC0u, 0x328034u, 0x32803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32803Cu;
label_32803c:
    // 0x32803c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x328040: 0x3c024222  lui         $v0, 0x4222
    ctx->pc = 0x328040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16930 << 16));
    // 0x328044: 0x3442568a  ori         $v0, $v0, 0x568A
    ctx->pc = 0x328044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22154);
    // 0x328048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x328048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32804c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x32804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328050: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x328050u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328054: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x328054u;
    SET_GPR_U32(ctx, 31, 0x32805Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x328054u, 0x32805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32805Cu;
label_32805c:
    // 0x32805c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32805cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x328060: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x328060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x328064: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x328064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x328068: 0x24637710  addiu       $v1, $v1, 0x7710
    ctx->pc = 0x328068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30480));
    // 0x32806c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328070: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x328070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328074: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x328074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x328078: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32807c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x32807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328080: 0xc4600278  lwc1        $f0, 0x278($v1)
    ctx->pc = 0x328080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328084: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x328084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328088: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x328088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x32808c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32808cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328098: 0xc4610484  lwc1        $f1, 0x484($v1)
    ctx->pc = 0x328098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32809c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x32809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3280a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3280a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3280a4: 0xe4600484  swc1        $f0, 0x484($v1)
    ctx->pc = 0x3280a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1156), bits); }
    // 0x3280a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3280a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3280ac: 0x0  nop
    ctx->pc = 0x3280acu;
    // NOP
label_3280b0:
    // 0x3280b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3280b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3280b4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3280b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3280b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3280b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3280bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3280c0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3280c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3280c4: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x3280C4u;
    {
        const bool branch_taken_0x3280c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3280c4) {
            ctx->pc = 0x327FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327fbc;
        }
    }
    ctx->pc = 0x3280CCu;
    // 0x3280cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3280ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3280d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3280d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3280d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3280d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3280d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3280dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3280DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3280DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3280E4u;
}
