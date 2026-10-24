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

// Function: Change_Camera_Pos_Inter_Sys
// Address: 0x159000 - 0x159220
void Change_Camera_Pos_Inter_Sys_0x159000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_Inter_Sys_0x159000");
#endif

    switch (ctx->pc) {
        case 0x15909cu: goto label_15909c;
        case 0x1590c8u: goto label_1590c8;
        case 0x1590dcu: goto label_1590dc;
        case 0x1590f0u: goto label_1590f0;
        case 0x15919cu: goto label_15919c;
        case 0x1591f4u: goto label_1591f4;
        case 0x159210u: goto label_159210;
        default: break;
    }

    ctx->pc = 0x159000u;

    // 0x159000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159004: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159008: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x159008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15900c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x159010: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x159010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x159014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159018: 0x0  nop
    ctx->pc = 0x159018u;
    // NOP
    // 0x15901c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15901cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x159020: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159024: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x159024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15902c: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x15902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159030: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159034: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x159034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159038: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15903c: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x15903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159040: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159044: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159048: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15904c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x159050: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159054: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x159054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159058: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15905c: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x15905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159060: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159064: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x159064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x159068: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x159068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15906c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159070: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x159070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159074: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x159074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159078: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x159078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15907c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15907cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159080: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x159080u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159084: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x159084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159088: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x159088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15908c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15908cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159090: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x159090u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x159094: 0xc045630  jal         func_1158C0
    ctx->pc = 0x159094u;
    SET_GPR_U32(ctx, 31, 0x15909Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x159094u, 0x15909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15909Cu;
label_15909c:
    // 0x15909c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1590a0: 0xe44001b8  swc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1590a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 440), bits); }
    // 0x1590a4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1590a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1590a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1590a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1590ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1590acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1590b0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1590b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1590b4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1590b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1590b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1590b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1590bc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1590bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1590c0: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1590C0u;
    SET_GPR_U32(ctx, 31, 0x1590C8u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1590C0u, 0x1590C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590C8u;
label_1590c8:
    // 0x1590c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1590c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1590cc: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1590ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1590d0: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1590d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1590d4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1590D4u;
    SET_GPR_U32(ctx, 31, 0x1590DCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1590D4u, 0x1590DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590DCu;
label_1590dc:
    // 0x1590dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1590dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1590e0: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1590e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1590e4: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x1590e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1590e8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1590E8u;
    SET_GPR_U32(ctx, 31, 0x1590F0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1590E8u, 0x1590F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590F0u;
label_1590f0:
    // 0x1590f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1590f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1590f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1590f8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1590f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1590fc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1590fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159100: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159104: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x159108: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15910c: 0x0  nop
    ctx->pc = 0x15910cu;
    // NOP
    // 0x159110: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x159110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x159114: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x159114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159118: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15911c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15911cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159124: 0x0  nop
    ctx->pc = 0x159124u;
    // NOP
    // 0x159128: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x159128u;
    {
        const bool branch_taken_0x159128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159128) {
            ctx->pc = 0x15914Cu;
            goto label_15914c;
        }
    }
    ctx->pc = 0x159130u;
    // 0x159130: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159134: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15913c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159140: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159144: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x159144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159148: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15914c:
    // 0x15914c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159150: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159154: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159158: 0x0  nop
    ctx->pc = 0x159158u;
    // NOP
    // 0x15915c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15915Cu;
    {
        const bool branch_taken_0x15915c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15915c) {
            ctx->pc = 0x159180u;
            goto label_159180;
        }
    }
    ctx->pc = 0x159164u;
    // 0x159164: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159168: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15916c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15916cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159170: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159174: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159178: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15917c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_159180:
    // 0x159180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159184: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x159184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159188: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15918c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x159190: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x159190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x159194: 0xc040d62  jal         func_103588
    ctx->pc = 0x159194u;
    SET_GPR_U32(ctx, 31, 0x15919Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x15919Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15919Cu) { return; }
    ctx->pc = 0x15919Cu;
label_15919c:
    // 0x15919c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591a0: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x1591a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1591a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1591ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591b0: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x1591b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1591b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1591bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591c0: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x1591c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1591c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1591c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1591c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1591cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1591ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1591d0: 0x0  nop
    ctx->pc = 0x1591d0u;
    // NOP
    // 0x1591d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1591d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1591d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591dc: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1591dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1591e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1591e4: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x1591e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1591e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1591e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1591ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1591ECu;
    SET_GPR_U32(ctx, 31, 0x1591F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1591F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1591F4u) { return; }
    ctx->pc = 0x1591F4u;
label_1591f4:
    // 0x1591f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1591f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1591f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1591fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1591fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159200: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159204: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159208: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159208u;
    SET_GPR_U32(ctx, 31, 0x159210u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159208u, 0x159210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159210u;
label_159210:
    // 0x159210: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159214: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159218: 0x3e00008  jr          $ra
    ctx->pc = 0x159218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159220u;
}
