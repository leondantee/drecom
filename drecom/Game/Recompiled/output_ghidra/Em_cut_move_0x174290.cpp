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

// Function: Em_cut_move
// Address: 0x174290 - 0x174464
void Em_cut_move_0x174290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_cut_move_0x174290");
#endif

    switch (ctx->pc) {
        case 0x1742f4u: goto label_1742f4;
        case 0x17439cu: goto label_17439c;
        default: break;
    }

    ctx->pc = 0x174290u;

    // 0x174290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x174294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x174298: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x174298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x17429c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742a0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1742a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1742a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1742a8: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1742ac: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1742ACu;
    {
        const bool branch_taken_0x1742ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1742ac) {
            ctx->pc = 0x1742CCu;
            goto label_1742cc;
        }
    }
    ctx->pc = 0x1742B4u;
    // 0x1742b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1742b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742b8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1742b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1742bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1742bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1742c0: 0x28630017  slti        $v1, $v1, 0x17
    ctx->pc = 0x1742c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1742c4: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1742C4u;
    {
        const bool branch_taken_0x1742c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1742c4) {
            ctx->pc = 0x1743CCu;
            goto label_1743cc;
        }
    }
    ctx->pc = 0x1742CCu;
label_1742cc:
    // 0x1742cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742d0: 0x8c421210  lw          $v0, 0x1210($v0)
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x1742d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1742d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1742dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1742e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1742e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1742e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1742ec: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1742ECu;
    SET_GPR_U32(ctx, 31, 0x1742F4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1742ECu, 0x1742F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742F4u;
label_1742f4:
    // 0x1742f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1742f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1742f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742fc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1742fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174300: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174304: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x174304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17430c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x17430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174314: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x174314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174318: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17431c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x17431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174324: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x174324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x174328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17432c: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x17432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174330: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x174330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174334: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x174334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x174338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17433c: 0x0  nop
    ctx->pc = 0x17433cu;
    // NOP
    // 0x174340: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174344: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x174344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174348: 0x0  nop
    ctx->pc = 0x174348u;
    // NOP
    // 0x17434c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x17434Cu;
    {
        const bool branch_taken_0x17434c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17434c) {
            ctx->pc = 0x17438Cu;
            goto label_17438c;
        }
    }
    ctx->pc = 0x174354u;
    // 0x174354: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x174354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174358: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x17435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174360: 0x0  nop
    ctx->pc = 0x174360u;
    // NOP
    // 0x174364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17436c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x17436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174374: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x174374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x174378: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x174378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17437c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17437cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174380: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x174380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174388: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x174388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
label_17438c:
    // 0x17438c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174390: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174394: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x174394u;
    SET_GPR_U32(ctx, 31, 0x17439Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x174394u, 0x17439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17439Cu;
label_17439c:
    // 0x17439c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743a0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1743a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1743a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1743a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1743a8: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1743A8u;
    {
        const bool branch_taken_0x1743a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1743a8) {
            ctx->pc = 0x174454u;
            goto label_174454;
        }
    }
    ctx->pc = 0x1743B0u;
    // 0x1743b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1743b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1743b8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1743b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1743bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1743bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1743c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1743c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1743C4u;
    {
        const bool branch_taken_0x1743c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743c4) {
            ctx->pc = 0x174454u;
            goto label_174454;
        }
    }
    ctx->pc = 0x1743CCu;
label_1743cc:
    // 0x1743cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1743ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743d0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1743d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1743d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1743d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1743d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1743d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743dc: 0x0  nop
    ctx->pc = 0x1743dcu;
    // NOP
    // 0x1743e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1743e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1743e4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1743e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1743e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1743e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743ec: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1743ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1743f0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x1743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x1743f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1743f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1743f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1743f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743fc: 0x0  nop
    ctx->pc = 0x1743fcu;
    // NOP
    // 0x174400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174404: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x174404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x174408: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17440c: 0x8c631210  lw          $v1, 0x1210($v1)
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x174410: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x174414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174418: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x174418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x17441c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174420: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x174420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174424: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x174424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x174428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17442c: 0x0  nop
    ctx->pc = 0x17442cu;
    // NOP
    // 0x174430: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174434: 0x0  nop
    ctx->pc = 0x174434u;
    // NOP
    // 0x174438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x174438u;
    {
        const bool branch_taken_0x174438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x174438) {
            ctx->pc = 0x174454u;
            goto label_174454;
        }
    }
    ctx->pc = 0x174440u;
    // 0x174440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174444: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x174444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174448: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17444c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17444cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174450: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x174450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_174454:
    // 0x174454: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x174454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174458: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x174458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17445c: 0x3e00008  jr          $ra
    ctx->pc = 0x17445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174464u;
}
