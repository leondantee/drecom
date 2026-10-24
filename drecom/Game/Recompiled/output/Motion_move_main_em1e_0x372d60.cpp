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

// Function: Motion_move_main_em1e
// Address: 0x372d60 - 0x3737b0
void Motion_move_main_em1e_0x372d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_main_em1e_0x372d60");
#endif

    switch (ctx->pc) {
        case 0x372e80u: goto label_372e80;
        case 0x372ea4u: goto label_372ea4;
        case 0x372ec4u: goto label_372ec4;
        case 0x372ee4u: goto label_372ee4;
        case 0x372f38u: goto label_372f38;
        case 0x372fe4u: goto label_372fe4;
        case 0x37301cu: goto label_37301c;
        case 0x373038u: goto label_373038;
        case 0x373078u: goto label_373078;
        case 0x37319cu: goto label_37319c;
        case 0x373250u: goto label_373250;
        case 0x373268u: goto label_373268;
        case 0x37327cu: goto label_37327c;
        case 0x373290u: goto label_373290;
        case 0x3732b0u: goto label_3732b0;
        case 0x37336cu: goto label_37336c;
        case 0x373418u: goto label_373418;
        case 0x3734c0u: goto label_3734c0;
        case 0x37355cu: goto label_37355c;
        case 0x373570u: goto label_373570;
        case 0x373584u: goto label_373584;
        case 0x373598u: goto label_373598;
        case 0x3735acu: goto label_3735ac;
        case 0x3735c0u: goto label_3735c0;
        case 0x3735d0u: goto label_3735d0;
        case 0x3735f4u: goto label_3735f4;
        case 0x373604u: goto label_373604;
        case 0x373624u: goto label_373624;
        case 0x373654u: goto label_373654;
        case 0x373698u: goto label_373698;
        case 0x3736acu: goto label_3736ac;
        case 0x3736c4u: goto label_3736c4;
        case 0x3736dcu: goto label_3736dc;
        case 0x3736f4u: goto label_3736f4;
        case 0x373744u: goto label_373744;
        default: break;
    }

    ctx->pc = 0x372d60u;

    // 0x372d60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x372d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x372d64: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x372d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x372d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x372d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x372d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x372d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x372d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x372d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x372d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x372d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x372d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372d80: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x372d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x372d84: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x372d84u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372d88: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372d8c: 0x8c6309f8  lw          $v1, 0x9F8($v1)
    ctx->pc = 0x372d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x372d90: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x372d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x372d94: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x372D94u;
    {
        const bool branch_taken_0x372d94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x372d94) {
            ctx->pc = 0x372DB0u;
            goto label_372db0;
        }
    }
    ctx->pc = 0x372D9Cu;
    // 0x372d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x372d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372da0: 0x0  nop
    ctx->pc = 0x372da0u;
    // NOP
    // 0x372da4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x372da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x372da8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372DA8u;
    {
        const bool branch_taken_0x372da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372da8) {
            ctx->pc = 0x372DCCu;
            goto label_372dcc;
        }
    }
    ctx->pc = 0x372DB0u;
label_372db0:
    // 0x372db0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x372db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x372db4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x372db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x372db8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x372db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x372dbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x372dbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372dc0: 0x0  nop
    ctx->pc = 0x372dc0u;
    // NOP
    // 0x372dc4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x372dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x372dc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x372dc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_372dcc:
    // 0x372dcc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372dd0: 0x8c6209f8  lw          $v0, 0x9F8($v1)
    ctx->pc = 0x372dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x372dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372dd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372DD8u;
    {
        const bool branch_taken_0x372dd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x372dd8) {
            ctx->pc = 0x372DF4u;
            goto label_372df4;
        }
    }
    ctx->pc = 0x372DE0u;
    // 0x372de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372de4: 0x0  nop
    ctx->pc = 0x372de4u;
    // NOP
    // 0x372de8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x372de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x372dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372DECu;
    {
        const bool branch_taken_0x372dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dec) {
            ctx->pc = 0x372E10u;
            goto label_372e10;
        }
    }
    ctx->pc = 0x372DF4u;
label_372df4:
    // 0x372df4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x372df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x372df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x372df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x372dfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x372dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x372e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372e04: 0x0  nop
    ctx->pc = 0x372e04u;
    // NOP
    // 0x372e08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x372e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x372e0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x372e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_372e10:
    // 0x372e10: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x372e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372e18: 0x0  nop
    ctx->pc = 0x372e18u;
    // NOP
    // 0x372e1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x372e1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x372e20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x372e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x372e24: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e28: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x372e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x372e2c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e30: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x372e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x372e34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x372e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372e38: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x372e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x372e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x372e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x372e40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e44: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x372e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e48: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x372e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x372e4c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e50: 0xc4a009d4  lwc1        $f0, 0x9D4($a1)
    ctx->pc = 0x372e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e54: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x372e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x372e58: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e5c: 0x94c209e0  lhu         $v0, 0x9E0($a2)
    ctx->pc = 0x372e5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2528)));
    // 0x372e60: 0xa7a200c8  sh          $v0, 0xC8($sp)
    ctx->pc = 0x372e60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x372e64: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e68: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x372e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x372e6c: 0xa3a300e0  sb          $v1, 0xE0($sp)
    ctx->pc = 0x372e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x372e70: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e74: 0x246400e0  addiu       $a0, $v1, 0xE0
    ctx->pc = 0x372e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x372e78: 0xc067688  jal         func_19DA20
    ctx->pc = 0x372E78u;
    SET_GPR_U32(ctx, 31, 0x372E80u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x372E78u, 0x372E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E80u;
label_372e80:
    // 0x372e80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x372e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x372e84: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e88: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e8c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372e90: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372e94: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372e98: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x372e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372e9c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x372E9Cu;
    SET_GPR_U32(ctx, 31, 0x372EA4u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x372E9Cu, 0x372EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EA4u;
label_372ea4:
    // 0x372ea4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ea8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372eac: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372eb0: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372eb4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372eb8: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x372eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372ebc: 0xc067808  jal         func_19E020
    ctx->pc = 0x372EBCu;
    SET_GPR_U32(ctx, 31, 0x372EC4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x372EBCu, 0x372EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EC4u;
label_372ec4:
    // 0x372ec4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ec8: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ecc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ed0: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x372ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x372ed4: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x372ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x372ed8: 0xc44c00d8  lwc1        $f12, 0xD8($v0)
    ctx->pc = 0x372ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372edc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x372EDCu;
    SET_GPR_U32(ctx, 31, 0x372EE4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x372EDCu, 0x372EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EE4u;
label_372ee4:
    // 0x372ee4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ee8: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x372ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x372eec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x372eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x372ef0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372ef4: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x372ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x372ef8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x372ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x372efc: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x372efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f00: 0x8cc205f4  lw          $v0, 0x5F4($a2)
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1524)));
    // 0x372f04: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x372F04u;
    {
        const bool branch_taken_0x372f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f04) {
            ctx->pc = 0x373020u;
            goto label_373020;
        }
    }
    ctx->pc = 0x372F0Cu;
    // 0x372f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x372f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372f10: 0xa7a400ca  sh          $a0, 0xCA($sp)
    ctx->pc = 0x372f10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 4));
    // 0x372f14: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f18: 0x8ca205f4  lw          $v0, 0x5F4($a1)
    ctx->pc = 0x372f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1524)));
    // 0x372f1c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x372f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x372f20: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f24: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x372f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x372f28: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x372f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x372f2c: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x372f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
    // 0x372f30: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x372F30u;
    SET_GPR_U32(ctx, 31, 0x372F38u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x372F30u, 0x372F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F38u;
label_372f38:
    // 0x372f38: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f3c: 0x944409e0  lhu         $a0, 0x9E0($v0)
    ctx->pc = 0x372f3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x372f40: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x372f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x372f44: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x372f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x372f48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372F48u;
    {
        const bool branch_taken_0x372f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f48) {
            ctx->pc = 0x372F64u;
            goto label_372f64;
        }
    }
    ctx->pc = 0x372F50u;
    // 0x372f50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x372f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x372f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372f58: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x372f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372f60: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x372f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_372f64:
    // 0x372f64: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f6c: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x372f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x372f70: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f74: 0x8c460330  lw          $a2, 0x330($v0)
    ctx->pc = 0x372f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x372f78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x372f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f7c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x372f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x372f80: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f84: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x372f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x372f88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x372f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f8c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x372f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x372f90: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f94: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x372f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x372f98: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f9c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x372f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x372fa0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fa4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fa8: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x372fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x372facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x372fb0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fb4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fb8: 0x8c650330  lw          $a1, 0x330($v1)
    ctx->pc = 0x372fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fbc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x372fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x372fc0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x372fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fc4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fc8: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x372fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fcc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x372fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x372fd0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fd4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x372fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x372fd8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x372fd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x372fdc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x372FDCu;
    SET_GPR_U32(ctx, 31, 0x372FE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x372FE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x372FE4u) { return; }
    ctx->pc = 0x372FE4u;
label_372fe4:
    // 0x372fe4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x372fe4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x372fe8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x372fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x372ff0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ff4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x372ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x372ff8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x372ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ffc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x372ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x373000: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373004: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373008: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x373008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x37300c: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x37300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x373010: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x373010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373014: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x373014u;
    SET_GPR_U32(ctx, 31, 0x37301Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x373014u, 0x37301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37301Cu;
label_37301c:
    // 0x37301c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37301cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_373020:
    // 0x373020: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373024: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373028: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x373028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x37302c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x37302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x373030: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x373030u;
    SET_GPR_U32(ctx, 31, 0x373038u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x373030u, 0x373038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373038u;
label_373038:
    // 0x373038: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37303c: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x37303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x373040: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373044: 0xc48102d8  lwc1        $f1, 0x2D8($a0)
    ctx->pc = 0x373044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373048: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x373048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x37304c: 0x34652400  ori         $a1, $v1, 0x2400
    ctx->pc = 0x37304cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x373050: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x373050u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373054: 0x0  nop
    ctx->pc = 0x373054u;
    // NOP
    // 0x373058: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x373058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37305c: 0x0  nop
    ctx->pc = 0x37305cu;
    // NOP
    // 0x373060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x373060u;
    {
        const bool branch_taken_0x373060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373060) {
            ctx->pc = 0x373078u;
            goto label_373078;
        }
    }
    ctx->pc = 0x373068u;
    // 0x373068: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37306c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x37306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373070: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x373070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373074: 0xe4a002d8  swc1        $f0, 0x2D8($a1)
    ctx->pc = 0x373074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 728), bits); }
label_373078:
    // 0x373078: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37307c: 0x8c660350  lw          $a2, 0x350($v1)
    ctx->pc = 0x37307cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x373080: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x373080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x373084: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x373084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373088: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x373088u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37308c: 0x3283003f  andi        $v1, $s4, 0x3F
    ctx->pc = 0x37308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x373090: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x373090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x373094: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x373094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x373098: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x373098u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x37309c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x37309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3730a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3730a4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x3730a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3730a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3730a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3730ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3730acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3730b0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3730b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3730b4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3730b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3730b8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3730b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3730bc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x3730bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3730c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730c4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x3730c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x3730c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3730c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3730cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3730ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3730d0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3730D0u;
    {
        const bool branch_taken_0x3730d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3730d0) {
            ctx->pc = 0x373120u;
            goto label_373120;
        }
    }
    ctx->pc = 0x3730D8u;
    // 0x3730d8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730dc: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x3730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x3730e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3730E0u;
    {
        const bool branch_taken_0x3730e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3730e0) {
            ctx->pc = 0x373120u;
            goto label_373120;
        }
    }
    ctx->pc = 0x3730E8u;
    // 0x3730e8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3730e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3730ec: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x3730ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x3730f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3730f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3730f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3730f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3730f8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x3730f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3730fc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x3730fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373100: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373104: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x373104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x373108: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37310c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373110: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x373110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x373114: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x373114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x373118: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37311c: 0x0  nop
    ctx->pc = 0x37311cu;
    // NOP
label_373120:
    // 0x373120: 0x328300c0  andi        $v1, $s4, 0xC0
    ctx->pc = 0x373120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)192);
    // 0x373124: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x373124u;
    {
        const bool branch_taken_0x373124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373124) {
            ctx->pc = 0x3732B8u;
            goto label_3732b8;
        }
    }
    ctx->pc = 0x37312Cu;
    // 0x37312c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37312cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373130: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373134: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x373134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x373138: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x373138u;
    {
        const bool branch_taken_0x373138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373138) {
            ctx->pc = 0x373200u;
            goto label_373200;
        }
    }
    ctx->pc = 0x373140u;
    // 0x373140: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x373140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373144: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37314c: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x373150: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373150u;
    {
        const bool branch_taken_0x373150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373150) {
            ctx->pc = 0x3731A4u;
            goto label_3731a4;
        }
    }
    ctx->pc = 0x373158u;
    // 0x373158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37315c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x37315cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373160: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373164: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37316c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x37316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x373170: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373174: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x373178: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37317c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x37317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373180: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373188: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37318c: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x37318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x373190: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x373190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x373194: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373194u;
    SET_GPR_U32(ctx, 31, 0x37319Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373194u, 0x37319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37319Cu;
label_37319c:
    // 0x37319c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37319Cu;
    {
        const bool branch_taken_0x37319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37319c) {
            ctx->pc = 0x3731C0u;
            goto label_3731c0;
        }
    }
    ctx->pc = 0x3731A4u;
label_3731a4:
    // 0x3731a4: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x3731a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731a8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3731a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3731ac: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x3731acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731b0: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3731b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3731b4: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x3731b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731b8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3731bc: 0x0  nop
    ctx->pc = 0x3731bcu;
    // NOP
label_3731c0:
    // 0x3731c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3731c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3731c4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x3731c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x3731c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3731c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3731cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3731ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3731d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3731D0u;
    {
        const bool branch_taken_0x3731d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3731d0) {
            ctx->pc = 0x373200u;
            goto label_373200;
        }
    }
    ctx->pc = 0x3731D8u;
    // 0x3731d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3731d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3731dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3731dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3731e0: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x3731e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3731e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3731e8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3731e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3731ec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3731ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3731f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3731f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3731f4: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3731f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3731f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3731fc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3731fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_373200:
    // 0x373200: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373204: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x373204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x373208: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x373208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x37320c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37320cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373210: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373214: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x373214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x373218: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x373218u;
    {
        const bool branch_taken_0x373218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373218) {
            ctx->pc = 0x373258u;
            goto label_373258;
        }
    }
    ctx->pc = 0x373220u;
    // 0x373220: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373224: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x373224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373228: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x373228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x37322c: 0x146000fe  bnez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x37322Cu;
    {
        const bool branch_taken_0x37322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37322c) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x373234u;
    // 0x373234: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373238: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x37323c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373240: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x373240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373244: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x373244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373248: 0xc040ca2  jal         func_103288
    ctx->pc = 0x373248u;
    SET_GPR_U32(ctx, 31, 0x373250u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x373250u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373250u) { return; }
    ctx->pc = 0x373250u;
label_373250:
    // 0x373250: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x373250u;
    {
        const bool branch_taken_0x373250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373250) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x373258u;
label_373258:
    // 0x373258: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37325c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x37325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373260: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x373260u;
    SET_GPR_U32(ctx, 31, 0x373268u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x373260u, 0x373268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373268u;
label_373268:
    // 0x373268: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37326c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37326cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373270: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x373270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373274: 0xc067808  jal         func_19E020
    ctx->pc = 0x373274u;
    SET_GPR_U32(ctx, 31, 0x37327Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x373274u, 0x37327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37327Cu;
label_37327c:
    // 0x37327c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x37327cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373280: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x373280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373284: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x373284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373288: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x373288u;
    SET_GPR_U32(ctx, 31, 0x373290u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x373288u, 0x373290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373290u;
label_373290:
    // 0x373290: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373294: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x373298: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x373298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37329c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x37329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3732a0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3732a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3732a4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3732a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3732a8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3732A8u;
    SET_GPR_U32(ctx, 31, 0x3732B0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3732A8u, 0x3732B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732B0u;
label_3732b0:
    // 0x3732b0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3732B0u;
    {
        const bool branch_taken_0x3732b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3732b0) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x3732B8u;
label_3732b8:
    // 0x3732b8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3732b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3732bc: 0x128300da  beq         $s4, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x3732BCu;
    {
        const bool branch_taken_0x3732bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732bc) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x3732C4u;
    // 0x3732c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3732c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3732c8: 0x128300d7  beq         $s4, $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x3732C8u;
    {
        const bool branch_taken_0x3732c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732c8) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x3732D0u;
    // 0x3732d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3732d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3732d4: 0x8c63034c  lw          $v1, 0x34C($v1)
    ctx->pc = 0x3732d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
    // 0x3732d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3732d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3732dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3732dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3732e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3732e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3732e4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3732e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3732e8: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x3732E8u;
    {
        const bool branch_taken_0x3732e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732e8) {
            ctx->pc = 0x373464u;
            goto label_373464;
        }
    }
    ctx->pc = 0x3732F0u;
    // 0x3732f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3732f4: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3732F4u;
    {
        const bool branch_taken_0x3732f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3732f4) {
            ctx->pc = 0x3733BCu;
            goto label_3733bc;
        }
    }
    ctx->pc = 0x3732FCu;
    // 0x3732fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x373300: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x373300u;
    {
        const bool branch_taken_0x373300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x373300) {
            ctx->pc = 0x373310u;
            goto label_373310;
        }
    }
    ctx->pc = 0x373308u;
    // 0x373308: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x373308u;
    {
        const bool branch_taken_0x373308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373308) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x373310u;
label_373310:
    // 0x373310: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x373310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373314: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37331c: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x37331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x373320: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373320u;
    {
        const bool branch_taken_0x373320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373320) {
            ctx->pc = 0x373374u;
            goto label_373374;
        }
    }
    ctx->pc = 0x373328u;
    // 0x373328: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x373328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37332c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x37332cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373330: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373334: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37333c: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x37333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x373340: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373344: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x373348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x373348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37334c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x37334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373350: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373358: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37335c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x37335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x373360: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x373360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x373364: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373364u;
    SET_GPR_U32(ctx, 31, 0x37336Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373364u, 0x37336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37336Cu;
label_37336c:
    // 0x37336c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37336Cu;
    {
        const bool branch_taken_0x37336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37336c) {
            ctx->pc = 0x373390u;
            goto label_373390;
        }
    }
    ctx->pc = 0x373374u;
label_373374:
    // 0x373374: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x373374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373378: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x373378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x37337c: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x37337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373380: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x373380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x373384: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x373384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373388: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x373388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x37338c: 0x0  nop
    ctx->pc = 0x37338cu;
    // NOP
label_373390:
    // 0x373390: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x373390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373394: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x373394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x373398: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x373398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37339c: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x37339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x3733a0: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x3733a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3733a4: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x3733a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x3733a8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3733a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3733ac: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x3733acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
    // 0x3733b0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3733b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3733b4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3733B4u;
    {
        const bool branch_taken_0x3733b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3733b4) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x3733BCu;
label_3733bc:
    // 0x3733bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3733bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3733c0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3733c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3733c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3733c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3733c8: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x3733c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x3733cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3733CCu;
    {
        const bool branch_taken_0x3733cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3733cc) {
            ctx->pc = 0x373420u;
            goto label_373420;
        }
    }
    ctx->pc = 0x3733D4u;
    // 0x3733d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3733d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3733d8: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x3733d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x3733dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3733dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3733e0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3733e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3733e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3733e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3733e8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x3733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x3733ec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3733ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3733f0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3733f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3733f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3733f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3733f8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3733f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3733fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3733fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x373400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373404: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x373404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x373408: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x373408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x37340c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x37340cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x373410: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x373410u;
    SET_GPR_U32(ctx, 31, 0x373418u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x373410u, 0x373418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373418u;
label_373418:
    // 0x373418: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x373418u;
    {
        const bool branch_taken_0x373418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373418) {
            ctx->pc = 0x373438u;
            goto label_373438;
        }
    }
    ctx->pc = 0x373420u;
label_373420:
    // 0x373420: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x373420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373424: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x373424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x373428: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x373428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37342c: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x37342cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x373430: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x373430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373434: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x373434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_373438:
    // 0x373438: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37343c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x37343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x373440: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x373440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x373444: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x373444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373448: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x373448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x37344c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x37344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373450: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x373450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x373454: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x373454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373458: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x373458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x37345c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x37345Cu;
    {
        const bool branch_taken_0x37345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37345c) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x373464u;
label_373464:
    // 0x373464: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373468: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37346c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373470: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x373470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x373474: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373474u;
    {
        const bool branch_taken_0x373474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373474) {
            ctx->pc = 0x3734C8u;
            goto label_3734c8;
        }
    }
    ctx->pc = 0x37347Cu;
    // 0x37347c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373480: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x373480u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373484: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x373484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373488: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37348c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373490: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x373490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x373494: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373498: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x37349c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3734a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3734a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3734a4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3734a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3734a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3734a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3734ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3734acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3734b0: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x3734b4: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x3734b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x3734b8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x3734B8u;
    SET_GPR_U32(ctx, 31, 0x3734C0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x3734B8u, 0x3734C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734C0u;
label_3734c0:
    // 0x3734c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3734C0u;
    {
        const bool branch_taken_0x3734c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3734c0) {
            ctx->pc = 0x3734E0u;
            goto label_3734e0;
        }
    }
    ctx->pc = 0x3734C8u;
label_3734c8:
    // 0x3734c8: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x3734c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734cc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3734ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x3734d0: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x3734d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734d4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x3734d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x3734d8: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x3734d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734dc: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x3734dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_3734e0:
    // 0x3734e0: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x3734e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3734e4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3734e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3734e8: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x3734e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3734ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3734f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3734f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3734f4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x3734f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734f8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3734f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3734fc: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x3734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373500: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373504: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x373504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x373508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37350c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x37350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373510: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x373510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x373514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373518: 0x0  nop
    ctx->pc = 0x373518u;
    // NOP
    // 0x37351c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x37351cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x373520: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373524: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x373524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x373528: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x373528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37352c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x37352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x373530: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373534: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x373534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373538: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x373538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x37353c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x37353Cu;
    {
        const bool branch_taken_0x37353c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x37353c) {
            ctx->pc = 0x373628u;
            goto label_373628;
        }
    }
    ctx->pc = 0x373544u;
    // 0x373544: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373548: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37354c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x37354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x373550: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x373550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373554: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x373554u;
    SET_GPR_U32(ctx, 31, 0x37355Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x37355Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37355Cu) { return; }
    ctx->pc = 0x37355Cu;
label_37355c:
    // 0x37355c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37355cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x373560: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373564: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x373564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x373568: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x373568u;
    SET_GPR_U32(ctx, 31, 0x373570u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x373570u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373570u) { return; }
    ctx->pc = 0x373570u;
label_373570:
    // 0x373570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373578: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x373578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37357c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x37357Cu;
    SET_GPR_U32(ctx, 31, 0x373584u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x373584u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373584u) { return; }
    ctx->pc = 0x373584u;
label_373584:
    // 0x373584: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373588: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37358c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x37358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373590: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x373590u;
    SET_GPR_U32(ctx, 31, 0x373598u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x373598u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373598u) { return; }
    ctx->pc = 0x373598u;
label_373598:
    // 0x373598: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37359c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x37359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735a0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x3735a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3735a4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x3735A4u;
    SET_GPR_U32(ctx, 31, 0x3735ACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3735ACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735ACu) { return; }
    ctx->pc = 0x3735ACu;
label_3735ac:
    // 0x3735ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735b0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3735b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3735b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3735b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735b8: 0xc040c00  jal         func_103000
    ctx->pc = 0x3735B8u;
    SET_GPR_U32(ctx, 31, 0x3735C0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x3735C0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735C0u) { return; }
    ctx->pc = 0x3735C0u;
label_3735c0:
    // 0x3735c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3735c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3735c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3735c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3735c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3735C8u;
    SET_GPR_U32(ctx, 31, 0x3735D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3735D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735D0u) { return; }
    ctx->pc = 0x3735D0u;
label_3735d0:
    // 0x3735d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3735d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3735d4: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x3735d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x3735d8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x3735d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3735dc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3735dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3735e0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3735e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3735e4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3735e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3735e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3735ec: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3735ECu;
    SET_GPR_U32(ctx, 31, 0x3735F4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3735F4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735F4u) { return; }
    ctx->pc = 0x3735F4u;
label_3735f4:
    // 0x3735f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735f8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3735f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3735fc: 0xc040c44  jal         func_103110
    ctx->pc = 0x3735FCu;
    SET_GPR_U32(ctx, 31, 0x373604u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x373604u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373604u) { return; }
    ctx->pc = 0x373604u;
label_373604:
    // 0x373604: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373608: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x37360c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373610: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x373610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373614: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373618: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37361c: 0xc040c00  jal         func_103000
    ctx->pc = 0x37361Cu;
    SET_GPR_U32(ctx, 31, 0x373624u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x373624u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373624u) { return; }
    ctx->pc = 0x373624u;
label_373624:
    // 0x373624: 0x0  nop
    ctx->pc = 0x373624u;
    // NOP
label_373628:
    // 0x373628: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x373628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37362c: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x37362cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x373630: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373634: 0x906309e4  lbu         $v1, 0x9E4($v1)
    ctx->pc = 0x373634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2532)));
    // 0x373638: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x373638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37363c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x37363cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x373640: 0x1460fe8d  bnez        $v1, . + 4 + (-0x173 << 2)
    ctx->pc = 0x373640u;
    {
        const bool branch_taken_0x373640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373640) {
            ctx->pc = 0x373078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373078;
        }
    }
    ctx->pc = 0x373648u;
    // 0x373648: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x373648u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37364c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x37364Cu;
    {
        const bool branch_taken_0x37364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37364c) {
            ctx->pc = 0x373710u;
            goto label_373710;
        }
    }
    ctx->pc = 0x373654u;
label_373654:
    // 0x373654: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x373654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373658: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x373658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37365c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x37365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x373660: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x373660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x373664: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x373664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373668: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x373668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x37366c: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x37366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x373670: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x373670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373674: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x373674u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x373678: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x373678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x37367c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x37367cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x373680: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x373680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x373684: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x373684u;
    {
        const bool branch_taken_0x373684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373684) {
            ctx->pc = 0x373708u;
            goto label_373708;
        }
    }
    ctx->pc = 0x37368Cu;
    // 0x37368c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373690: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x373690u;
    SET_GPR_U32(ctx, 31, 0x373698u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x373698u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373698u) { return; }
    ctx->pc = 0x373698u;
label_373698:
    // 0x373698: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37369c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x37369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736a0: 0xc60c011c  lwc1        $f12, 0x11C($s0)
    ctx->pc = 0x3736a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736a4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x3736A4u;
    SET_GPR_U32(ctx, 31, 0x3736ACu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x3736ACu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736ACu) { return; }
    ctx->pc = 0x3736ACu;
label_3736ac:
    // 0x3736ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3736b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736b4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3736b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736b8: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x3736b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736bc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x3736BCu;
    SET_GPR_U32(ctx, 31, 0x3736C4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x3736C4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736C4u) { return; }
    ctx->pc = 0x3736C4u;
label_3736c4:
    // 0x3736c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3736c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3736ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736d0: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x3736d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3736d4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x3736D4u;
    SET_GPR_U32(ctx, 31, 0x3736DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3736DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3736DCu) { return; }
    ctx->pc = 0x3736DCu;
label_3736dc:
    // 0x3736dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3736e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3736e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3736e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3736e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3736ec: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3736ECu;
    SET_GPR_U32(ctx, 31, 0x3736F4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3736ECu, 0x3736F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736F4u;
label_3736f4:
    // 0x3736f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3736f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3736f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3736f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3736fc: 0x3074ffbf  andi        $s4, $v1, 0xFFBF
    ctx->pc = 0x3736fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x373700: 0xa6140140  sh          $s4, 0x140($s0)
    ctx->pc = 0x373700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 20));
    // 0x373704: 0x0  nop
    ctx->pc = 0x373704u;
    // NOP
label_373708:
    // 0x373708: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x373708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37370c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37370cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_373710:
    // 0x373710: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373714: 0x94710050  lhu         $s1, 0x50($v1)
    ctx->pc = 0x373714u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x373718: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x373718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x37371c: 0x265182a  slt         $v1, $s3, $a1
    ctx->pc = 0x37371cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x373720: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x373720u;
    {
        const bool branch_taken_0x373720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373720) {
            ctx->pc = 0x373654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373654;
        }
    }
    ctx->pc = 0x373728u;
    // 0x373728: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37372c: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x37372cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x373730: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373730u;
    {
        const bool branch_taken_0x373730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373730) {
            ctx->pc = 0x373748u;
            goto label_373748;
        }
    }
    ctx->pc = 0x373738u;
    // 0x373738: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37373c: 0xc098970  jal         func_2625C0
    ctx->pc = 0x37373Cu;
    SET_GPR_U32(ctx, 31, 0x373744u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x37373Cu, 0x373744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373744u;
label_373744:
    // 0x373744: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x373744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_373748:
    // 0x373748: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37374c: 0x8c7005f4  lw          $s0, 0x5F4($v1)
    ctx->pc = 0x37374cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x373750: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x373750u;
    {
        const bool branch_taken_0x373750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x373750) {
            ctx->pc = 0x373788u;
            goto label_373788;
        }
    }
    ctx->pc = 0x373758u;
    // 0x373758: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x373758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37375c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373760: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373764: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x373764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x373768: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x373768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37376c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373770: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373774: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x373774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x373778: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x373778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37377c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x37377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373780: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x373780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x373784: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x373784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_373788:
    // 0x373788: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x373788u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37378c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37378cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373790: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x373790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x373798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37379c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37379cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3737a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3737a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3737a4: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x3737a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3737a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3737A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3737A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3737B0u;
}
