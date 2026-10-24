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

// Function: Pl_sky_get_atk_pos
// Address: 0x26de30 - 0x26e224
void Pl_sky_get_atk_pos_0x26de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_sky_get_atk_pos_0x26de30");
#endif

    switch (ctx->pc) {
        case 0x26de5cu: goto label_26de5c;
        case 0x26de90u: goto label_26de90;
        case 0x26dea8u: goto label_26dea8;
        case 0x26dec0u: goto label_26dec0;
        case 0x26ded4u: goto label_26ded4;
        case 0x26dee4u: goto label_26dee4;
        case 0x26df34u: goto label_26df34;
        case 0x26df54u: goto label_26df54;
        case 0x26df70u: goto label_26df70;
        case 0x26df94u: goto label_26df94;
        case 0x26dfe4u: goto label_26dfe4;
        case 0x26e018u: goto label_26e018;
        case 0x26e03cu: goto label_26e03c;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e160u: goto label_26e160;
        case 0x26e170u: goto label_26e170;
        case 0x26e18cu: goto label_26e18c;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1d8u: goto label_26e1d8;
        case 0x26e1f4u: goto label_26e1f4;
        case 0x26e204u: goto label_26e204;
        default: break;
    }

    ctx->pc = 0x26de30u;

    // 0x26de30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x26de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x26de34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x26de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x26de38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26de3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26de40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26de44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26de48: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x26de48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x26de4c: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x26de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
    // 0x26de50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x26de54: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26DE54u;
    SET_GPR_U32(ctx, 31, 0x26DE5Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26DE54u, 0x26DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE5Cu;
label_26de5c:
    // 0x26de5c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de60: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x26de64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DE64u;
    {
        const bool branch_taken_0x26de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de64) {
            ctx->pc = 0x26DE7Cu;
            goto label_26de7c;
        }
    }
    ctx->pc = 0x26DE6Cu;
    // 0x26de6c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de70: 0x8c5313e8  lw          $s3, 0x13E8($v0)
    ctx->pc = 0x26de70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x26de74: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26DE74u;
    {
        const bool branch_taken_0x26de74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de74) {
            ctx->pc = 0x26E138u;
            goto label_26e138;
        }
    }
    ctx->pc = 0x26DE7Cu;
label_26de7c:
    // 0x26de7c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26de84: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26de88: 0xc067844  jal         func_19E110
    ctx->pc = 0x26DE88u;
    SET_GPR_U32(ctx, 31, 0x26DE90u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x26DE88u, 0x26DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE90u;
label_26de90:
    // 0x26de90: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26de98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26de9c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26dea0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26DEA0u;
    SET_GPR_U32(ctx, 31, 0x26DEA8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26DEA8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DEA8u) { return; }
    ctx->pc = 0x26DEA8u;
label_26dea8:
    // 0x26dea8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26deac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26deb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26deb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26deb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26deb8: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x26DEB8u;
    SET_GPR_U32(ctx, 31, 0x26DEC0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x26DEB8u, 0x26DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEC0u;
label_26dec0:
    // 0x26dec0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dec4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dec8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26decc: 0xc040c00  jal         func_103000
    ctx->pc = 0x26DECCu;
    SET_GPR_U32(ctx, 31, 0x26DED4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26DED4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DED4u) { return; }
    ctx->pc = 0x26DED4u;
label_26ded4:
    // 0x26ded4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ded8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dedc: 0xc040c44  jal         func_103110
    ctx->pc = 0x26DEDCu;
    SET_GPR_U32(ctx, 31, 0x26DEE4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x26DEE4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DEE4u) { return; }
    ctx->pc = 0x26DEE4u;
label_26dee4:
    // 0x26dee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dee8: 0x0  nop
    ctx->pc = 0x26dee8u;
    // NOP
    // 0x26deec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x26deecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26def0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26def0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26def4: 0x0  nop
    ctx->pc = 0x26def4u;
    // NOP
    // 0x26def8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x26def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x26defc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x26defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x26df00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26df04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df08: 0x0  nop
    ctx->pc = 0x26df08u;
    // NOP
    // 0x26df0c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x26df0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x26df10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26df14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df18: 0x0  nop
    ctx->pc = 0x26df18u;
    // NOP
    // 0x26df1c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x26df1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x26df20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26df28: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26df28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df2c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x26DF2Cu;
    SET_GPR_U32(ctx, 31, 0x26DF34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26DF34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DF34u) { return; }
    ctx->pc = 0x26DF34u;
label_26df34:
    // 0x26df34: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26df38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26df3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26df40: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26df44: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df48: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26df48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26df4c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26DF4Cu;
    SET_GPR_U32(ctx, 31, 0x26DF54u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26DF4Cu, 0x26DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF54u;
label_26df54:
    // 0x26df54: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26df54u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26df58: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DF58u;
    {
        const bool branch_taken_0x26df58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df58) {
            ctx->pc = 0x26DF70u;
            goto label_26df70;
        }
    }
    ctx->pc = 0x26DF60u;
    // 0x26df60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26df68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26DF68u;
    SET_GPR_U32(ctx, 31, 0x26DF70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26DF70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DF70u) { return; }
    ctx->pc = 0x26DF70u;
label_26df70:
    // 0x26df70: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x26df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x26df74: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x26df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x26df78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df7c: 0x0  nop
    ctx->pc = 0x26df7cu;
    // NOP
    // 0x26df80: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x26df80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26df84: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x26df84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26df88: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x26df88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26df8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x26DF8Cu;
    {
        const bool branch_taken_0x26df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df8c) {
            ctx->pc = 0x26E120u;
            goto label_26e120;
        }
    }
    ctx->pc = 0x26DF94u;
label_26df94:
    // 0x26df94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26df98: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x26df9c: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x26df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x26dfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dfa4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26dfa8: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x26dfa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x26dfac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26dfb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26dfb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26dfb4: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x26DFB4u;
    {
        const bool branch_taken_0x26dfb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26dfb4) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26DFBCu;
    // 0x26dfbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dfc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26dfc4: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x26DFC4u;
    {
        const bool branch_taken_0x26dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dfc4) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26DFCCu;
    // 0x26dfcc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26dfd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26dfd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dfd8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26dfdc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x26DFDCu;
    SET_GPR_U32(ctx, 31, 0x26DFE4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26DFE4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DFE4u) { return; }
    ctx->pc = 0x26DFE4u;
label_26dfe4:
    // 0x26dfe4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x26dfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dfec: 0x0  nop
    ctx->pc = 0x26dfecu;
    // NOP
    // 0x26dff0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dff4: 0x0  nop
    ctx->pc = 0x26dff4u;
    // NOP
    // 0x26dff8: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x26DFF8u;
    {
        const bool branch_taken_0x26dff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dff8) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26E000u;
    // 0x26e000: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26e004: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e008: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e00c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e010: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x26E010u;
    SET_GPR_U32(ctx, 31, 0x26E018u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x26E010u, 0x26E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E018u;
label_26e018:
    // 0x26e018: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e01c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x26e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e020: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x26e020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e024: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x26e024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e028: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x26e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e02c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26e02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e030: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x26e030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26e034: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x26E034u;
    SET_GPR_U32(ctx, 31, 0x26E03Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x26E034u, 0x26E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E03Cu;
label_26e03c:
    // 0x26e03c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x26e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x26e040: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x26e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e044: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x26e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e04c: 0x0  nop
    ctx->pc = 0x26e04cu;
    // NOP
    // 0x26e050: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x26E050u;
    {
        const bool branch_taken_0x26e050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e050) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26E058u;
    // 0x26e058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x26e05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e060: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x26e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e064: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26e064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26e068: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x26e06c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e070: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e078: 0x0  nop
    ctx->pc = 0x26e078u;
    // NOP
    // 0x26e07c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26E07Cu;
    {
        const bool branch_taken_0x26e07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e07c) {
            ctx->pc = 0x26E0A0u;
            goto label_26e0a0;
        }
    }
    ctx->pc = 0x26E084u;
    // 0x26e084: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x26e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e088: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e08c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e08cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e094: 0x0  nop
    ctx->pc = 0x26e094u;
    // NOP
    // 0x26e098: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x26E098u;
    {
        const bool branch_taken_0x26e098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e098) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26E0A0u;
label_26e0a0:
    // 0x26e0a0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x26e0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e0a4: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e0a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e0a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e0ac: 0x0  nop
    ctx->pc = 0x26e0acu;
    // NOP
    // 0x26e0b0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x26E0B0u;
    {
        const bool branch_taken_0x26e0b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e0b0) {
            ctx->pc = 0x26E0D8u;
            goto label_26e0d8;
        }
    }
    ctx->pc = 0x26E0B8u;
    // 0x26e0b8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x26e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e0bc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x26e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e0c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e0c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e0c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e0c8: 0x0  nop
    ctx->pc = 0x26e0c8u;
    // NOP
    // 0x26e0cc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x26E0CCu;
    {
        const bool branch_taken_0x26e0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e0cc) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26E0D4u;
    // 0x26e0d4: 0x0  nop
    ctx->pc = 0x26e0d4u;
    // NOP
label_26e0d8:
    // 0x26e0d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e0dc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e0e0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x26e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x26e0e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e0e8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x26e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26e0ec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e0f0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26e0f4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26E0F4u;
    SET_GPR_U32(ctx, 31, 0x26E0FCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26E0F4u, 0x26E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0FCu;
label_26e0fc:
    // 0x26e0fc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26e0fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e100: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E100u;
    {
        const bool branch_taken_0x26e100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e100) {
            ctx->pc = 0x26E118u;
            goto label_26e118;
        }
    }
    ctx->pc = 0x26E108u;
    // 0x26e108: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x26e108u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26e10c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x26e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e110: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x26e110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26e114: 0x0  nop
    ctx->pc = 0x26e114u;
    // NOP
label_26e118:
    // 0x26e118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26e118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e11c: 0x0  nop
    ctx->pc = 0x26e11cu;
    // NOP
label_26e120:
    // 0x26e120: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x26e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x26e124: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x26e128: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26e128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e12c: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x26E12Cu;
    {
        const bool branch_taken_0x26e12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e12c) {
            ctx->pc = 0x26DF94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26df94;
        }
    }
    ctx->pc = 0x26E134u;
    // 0x26e134: 0x0  nop
    ctx->pc = 0x26e134u;
    // NOP
label_26e138:
    // 0x26e138: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x26E138u;
    {
        const bool branch_taken_0x26e138 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e138) {
            ctx->pc = 0x26E1F4u;
            goto label_26e1f4;
        }
    }
    ctx->pc = 0x26E140u;
    // 0x26e140: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x26e144: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e148: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e14c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e150: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26e154: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e158: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x26E158u;
    SET_GPR_U32(ctx, 31, 0x26E160u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x26E158u, 0x26E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E160u;
label_26e160:
    // 0x26e160: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e164: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e168: 0xc040c24  jal         func_103090
    ctx->pc = 0x26E168u;
    SET_GPR_U32(ctx, 31, 0x26E170u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x26E170u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E170u) { return; }
    ctx->pc = 0x26E170u;
label_26e170:
    // 0x26e170: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x26e174: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26e178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26e178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e17c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e180: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e184: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x26E184u;
    SET_GPR_U32(ctx, 31, 0x26E18Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x26E18Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E18Cu) { return; }
    ctx->pc = 0x26E18Cu;
label_26e18c:
    // 0x26e18c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26e190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e194: 0x0  nop
    ctx->pc = 0x26e194u;
    // NOP
    // 0x26e198: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x26e198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x26e19c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e1a0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e1a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1a8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26e1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e1ac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1b0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x26E1B0u;
    SET_GPR_U32(ctx, 31, 0x26E1B8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x26E1B0u, 0x26E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1B8u;
label_26e1b8:
    // 0x26e1b8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26e1bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26e1c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e1c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26e1c8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26e1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1cc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26e1d0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26E1D0u;
    SET_GPR_U32(ctx, 31, 0x26E1D8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26E1D0u, 0x26E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1D8u;
label_26e1d8:
    // 0x26e1d8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26e1d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26e1dc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E1DCu;
    {
        const bool branch_taken_0x26e1dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1dc) {
            ctx->pc = 0x26E1F4u;
            goto label_26e1f4;
        }
    }
    ctx->pc = 0x26E1E4u;
    // 0x26e1e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x26e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26e1ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E1ECu;
    SET_GPR_U32(ctx, 31, 0x26E1F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E1F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E1F4u) { return; }
    ctx->pc = 0x26E1F4u;
label_26e1f4:
    // 0x26e1f4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x26e1f8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26e1fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26E1FCu;
    SET_GPR_U32(ctx, 31, 0x26E204u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26E204u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26E204u) { return; }
    ctx->pc = 0x26E204u;
label_26e204:
    // 0x26e204: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x26e204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26e208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e218: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26e21c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E224u;
}
