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

// Function: entry_00321948
// Address: 0x321948 - 0x321a60
void entry_00321948_0x321948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321948_0x321948");
#endif

    switch (ctx->pc) {
        case 0x3219b4u: goto label_3219b4;
        case 0x3219c4u: goto label_3219c4;
        case 0x3219d4u: goto label_3219d4;
        case 0x321a08u: goto label_321a08;
        case 0x321a5cu: goto label_321a5c;
        default: break;
    }

    ctx->pc = 0x321948u;

    // 0x321948: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32194c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32194cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x321950: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x321954: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x321954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x321958: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x321958u;
    {
        const bool branch_taken_0x321958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x321958) {
            ctx->pc = 0x321910u;
            return;
        }
    }
    ctx->pc = 0x321960u;
    // 0x321960: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321964: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x321964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x321968: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x321968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32196c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x321970: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x321970u;
    {
        const bool branch_taken_0x321970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x321970) {
            ctx->pc = 0x321A6Cu;
            return;
        }
    }
    ctx->pc = 0x321978u;
    // 0x321978: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32197c: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x32197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x321980: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x321980u;
    {
        const bool branch_taken_0x321980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321980) {
            ctx->pc = 0x321A6Cu;
            return;
        }
    }
    ctx->pc = 0x321988u;
    // 0x321988: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x321988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32198c: 0x24429dc0  addiu       $v0, $v0, -0x6240
    ctx->pc = 0x32198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
    // 0x321990: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x321990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x321994: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x321994u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399DC0u));
    // 0x321998: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x321998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x32199c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3219a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3219a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3219a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3219a8: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x3219a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x3219ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3219ACu;
    SET_GPR_U32(ctx, 31, 0x3219B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3219B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219B4u) { return; }
    ctx->pc = 0x3219B4u;
label_3219b4:
    // 0x3219b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3219b8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3219b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3219BCu;
    SET_GPR_U32(ctx, 31, 0x3219C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3219C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219C4u) { return; }
    ctx->pc = 0x3219C4u;
label_3219c4:
    // 0x3219c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3219c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3219c8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3219c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3219cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3219CCu;
    SET_GPR_U32(ctx, 31, 0x3219D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3219D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3219D4u) { return; }
    ctx->pc = 0x3219D4u;
label_3219d4:
    // 0x3219d4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3219d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3219d8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3219d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x3219dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3219dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3219e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3219e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3219e4: 0x0  nop
    ctx->pc = 0x3219e4u;
    // NOP
    // 0x3219e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3219e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3219ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x3219ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x3219f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3219f4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3219f8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3219f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3219fc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3219fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x321a00: 0xc059e1c  jal         func_167870
    ctx->pc = 0x321A00u;
    SET_GPR_U32(ctx, 31, 0x321A08u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x321A00u, 0x321A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A08u;
label_321a08:
    // 0x321a08: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x321a08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321a0c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x321A0Cu;
    {
        const bool branch_taken_0x321a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a0c) {
            ctx->pc = 0x321A60u;
            return;
        }
    }
    ctx->pc = 0x321A14u;
    // 0x321a14: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x321a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321a18: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x321a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x321a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x321a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321a20: 0x0  nop
    ctx->pc = 0x321a20u;
    // NOP
    // 0x321a24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x321a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x321a28: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x321a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x321a2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x321a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x321a34: 0x0  nop
    ctx->pc = 0x321a34u;
    // NOP
    // 0x321a38: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x321a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x321a3c: 0x24020117  addiu       $v0, $zero, 0x117
    ctx->pc = 0x321a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x321a40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x321a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321a44: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x321a48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x321a48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a4c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x321a4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x321a50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321a54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x321A54u;
    SET_GPR_U32(ctx, 31, 0x321A5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x321A54u, 0x321A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A5Cu;
label_321a5c:
    // 0x321a5c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x321a5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x321a60u;
}
