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

// Function: entry_0032800c
// Address: 0x32800c - 0x3280b0
void entry_0032800c_0x32800c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032800c_0x32800c");
#endif

    switch (ctx->pc) {
        case 0x32803cu: goto label_32803c;
        case 0x32805cu: goto label_32805c;
        default: break;
    }

    ctx->pc = 0x32800cu;

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
    ctx->pc = 0x3280b0u;
}
