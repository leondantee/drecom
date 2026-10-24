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

// Function: Em09_corw_dm_move
// Address: 0x353890 - 0x353b3c
void Em09_corw_dm_move_0x353890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_corw_dm_move_0x353890");
#endif

    switch (ctx->pc) {
        case 0x353958u: goto label_353958;
        default: break;
    }

    ctx->pc = 0x353890u;

    // 0x353890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x353890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x353894: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x353894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x353898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35389c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3538a0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x3538a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3538a4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3538a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3538a8: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x3538a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x3538ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3538acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3538b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3538b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3538b4: 0x90630078  lbu         $v1, 0x78($v1)
    ctx->pc = 0x3538b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3538b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3538b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3538bc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3538bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3538c0: 0x10830098  beq         $a0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x3538C0u;
    {
        const bool branch_taken_0x3538c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3538c0) {
            ctx->pc = 0x353B24u;
            goto label_353b24;
        }
    }
    ctx->pc = 0x3538C8u;
    // 0x3538c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3538c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3538cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3538ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3538d0: 0x90630078  lbu         $v1, 0x78($v1)
    ctx->pc = 0x3538d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3538d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3538d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3538d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3538d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3538dc: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3538DCu;
    {
        const bool branch_taken_0x3538dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3538dc) {
            ctx->pc = 0x3539A4u;
            goto label_3539a4;
        }
    }
    ctx->pc = 0x3538E4u;
    // 0x3538e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3538E4u;
    {
        const bool branch_taken_0x3538e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538e4) {
            ctx->pc = 0x3538F4u;
            goto label_3538f4;
        }
    }
    ctx->pc = 0x3538ECu;
    // 0x3538ec: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x3538ECu;
    {
        const bool branch_taken_0x3538ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538ec) {
            ctx->pc = 0x353B24u;
            goto label_353b24;
        }
    }
    ctx->pc = 0x3538F4u;
label_3538f4:
    // 0x3538f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3538f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3538f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3538f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3538fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3538fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353900: 0xa0430078  sb          $v1, 0x78($v0)
    ctx->pc = 0x353900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x353904: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x353904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353908: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x353908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35390c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x35390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353910: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353914: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x353914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x353918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35391c: 0x0  nop
    ctx->pc = 0x35391cu;
    // NOP
    // 0x353920: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x353920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x353924: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x353924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x353928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35392c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x35392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353930: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353934: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x353934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x353938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35393c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353940: 0x0  nop
    ctx->pc = 0x353940u;
    // NOP
    // 0x353944: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x353944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x353948: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x353948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35394c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x35394cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353950: 0xc040c24  jal         func_103090
    ctx->pc = 0x353950u;
    SET_GPR_U32(ctx, 31, 0x353958u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x353958u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x353958u) { return; }
    ctx->pc = 0x353958u;
label_353958:
    // 0x353958: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x353958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x35395c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35395cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353960: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x353960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353964: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35396c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353970: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x353970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x353974: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x353974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x353978: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35397c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x35397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353980: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x353980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35398c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x35398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x353990: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x353990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x353994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353998: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35399c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539a0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x3539a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_3539a4:
    // 0x3539a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539ac: 0xc461007c  lwc1        $f1, 0x7C($v1)
    ctx->pc = 0x3539acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3539b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539b4: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x3539b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3539b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3539bc: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x3539bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x3539c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3539c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539c8: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x3539c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3539cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539d0: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x3539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3539d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3539d8: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x3539d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x3539dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539e0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3539e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539e4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3539e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3539e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3539ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3539ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3539f0: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x3539f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3539f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3539f8: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x3539f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x3539fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a04: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x353a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x353a08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x353a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x353a0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353a10: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x353a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353a18: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x353a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x353a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a20: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x353a24: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x353a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x353a28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a30: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x353a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a34: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x353a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353a3c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x353a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a44: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a48: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x353a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a4c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x353a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x353a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a54: 0x0  nop
    ctx->pc = 0x353a54u;
    // NOP
    // 0x353a58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353a5c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x353a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x353a60: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a64: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a6c: 0x0  nop
    ctx->pc = 0x353a6cu;
    // NOP
    // 0x353a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x353a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353a74: 0x0  nop
    ctx->pc = 0x353a74u;
    // NOP
    // 0x353a78: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x353A78u;
    {
        const bool branch_taken_0x353a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353a78) {
            ctx->pc = 0x353AB0u;
            goto label_353ab0;
        }
    }
    ctx->pc = 0x353A80u;
    // 0x353a80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a84: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a88: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x353a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x353a8c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x353a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x353a90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353a94: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x353a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353a9c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x353a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x353aa0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353aa8: 0x0  nop
    ctx->pc = 0x353aa8u;
    // NOP
    // 0x353aac: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_353ab0:
    // 0x353ab0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353ab4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353abc: 0x0  nop
    ctx->pc = 0x353abcu;
    // NOP
    // 0x353ac0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x353ac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353ac4: 0x0  nop
    ctx->pc = 0x353ac4u;
    // NOP
    // 0x353ac8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x353AC8u;
    {
        const bool branch_taken_0x353ac8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353ac8) {
            ctx->pc = 0x353B24u;
            goto label_353b24;
        }
    }
    ctx->pc = 0x353AD0u;
    // 0x353ad0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353ad4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353ad8: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x353ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353adc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x353adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x353ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353ae4: 0x0  nop
    ctx->pc = 0x353ae4u;
    // NOP
    // 0x353ae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x353ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353aec: 0x0  nop
    ctx->pc = 0x353aecu;
    // NOP
    // 0x353af0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x353AF0u;
    {
        const bool branch_taken_0x353af0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353af0) {
            ctx->pc = 0x353B24u;
            goto label_353b24;
        }
    }
    ctx->pc = 0x353AF8u;
    // 0x353af8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353afc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353b00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353b04: 0xa0640078  sb          $a0, 0x78($v1)
    ctx->pc = 0x353b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x353b08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353b0c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x353b10: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x353b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x353b14: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353b1c: 0x0  nop
    ctx->pc = 0x353b1cu;
    // NOP
    // 0x353b20: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_353b24:
    // 0x353b24: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x353b24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353b30: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x353b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353b34: 0x3e00008  jr          $ra
    ctx->pc = 0x353B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353B3Cu;
}
