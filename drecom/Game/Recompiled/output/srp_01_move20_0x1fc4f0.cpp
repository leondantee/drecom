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

// Function: srp_01_move20
// Address: 0x1fc4f0 - 0x1fc998
void srp_01_move20_0x1fc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_01_move20_0x1fc4f0");
#endif

    switch (ctx->pc) {
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc5c8u: goto label_1fc5c8;
        case 0x1fc634u: goto label_1fc634;
        case 0x1fc64cu: goto label_1fc64c;
        case 0x1fc68cu: goto label_1fc68c;
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc710u: goto label_1fc710;
        case 0x1fc72cu: goto label_1fc72c;
        case 0x1fc764u: goto label_1fc764;
        case 0x1fc7b4u: goto label_1fc7b4;
        case 0x1fc7d4u: goto label_1fc7d4;
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc82cu: goto label_1fc82c;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc8b4u: goto label_1fc8b4;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc960u: goto label_1fc960;
        default: break;
    }

    ctx->pc = 0x1fc4f0u;

    // 0x1fc4f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fc4f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1fc4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fc4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc500: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1fc500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1fc504: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc508: 0x244202b0  addiu       $v0, $v0, 0x2B0
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fc50c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1fc50cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc514: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1fc514u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1fc518: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc51c: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x1fc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fc520: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1fc520u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc528: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc530: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc534: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc53c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fc53cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fc540: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc544: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc550: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC550u;
    {
        const bool branch_taken_0x1fc550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc550) {
            ctx->pc = 0x1FC5ECu;
            goto label_1fc5ec;
        }
    }
    ctx->pc = 0x1FC558u;
    // 0x1fc558: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc55c: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc560: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc564: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc568: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC568u;
    {
        const bool branch_taken_0x1fc568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc568) {
            ctx->pc = 0x1FC5ECu;
            goto label_1fc5ec;
        }
    }
    ctx->pc = 0x1FC570u;
    // 0x1fc570: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc574: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc578: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fc578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc57c: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fc580: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC580u;
    SET_GPR_U32(ctx, 31, 0x1FC588u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC588u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC588u) { return; }
    ctx->pc = 0x1FC588u;
label_1fc588:
    // 0x1fc588: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc58c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc58cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc594: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc598: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc59c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc5a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fc5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5a8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc5b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc5b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc5bc: 0x24a503c0  addiu       $a1, $a1, 0x3C0
    ctx->pc = 0x1fc5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x1fc5c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC5C0u;
    SET_GPR_U32(ctx, 31, 0x1FC5C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC5C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC5C8u) { return; }
    ctx->pc = 0x1FC5C8u;
label_1fc5c8:
    // 0x1fc5c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc5d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5d4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc5d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc5dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc5e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc5e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc5ec:
    // 0x1fc5ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc5f0: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc5f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc5f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc5fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC5FCu;
    {
        const bool branch_taken_0x1fc5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc5fc) {
            ctx->pc = 0x1FC65Cu;
            goto label_1fc65c;
        }
    }
    ctx->pc = 0x1FC604u;
    // 0x1fc604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc608: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc60c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc614: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC65Cu;
            goto label_1fc65c;
        }
    }
    ctx->pc = 0x1FC61Cu;
    // 0x1fc61c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc624: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc628: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc62c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC62Cu;
    SET_GPR_U32(ctx, 31, 0x1FC634u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC634u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC634u) { return; }
    ctx->pc = 0x1FC634u;
label_1fc634:
    // 0x1fc634: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc638: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc63c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fc640: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc644: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC644u;
    SET_GPR_U32(ctx, 31, 0x1FC64Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC64Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC64Cu) { return; }
    ctx->pc = 0x1FC64Cu;
label_1fc64c:
    // 0x1fc64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc654: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc658: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc65c:
    // 0x1fc65c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc660: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc664: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc668: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc66c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FC66Cu;
    {
        const bool branch_taken_0x1fc66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc66c) {
            ctx->pc = 0x1FC6E0u;
            goto label_1fc6e0;
        }
    }
    ctx->pc = 0x1FC674u;
    // 0x1fc674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc678: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc67c: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc680: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fc684: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC684u;
    SET_GPR_U32(ctx, 31, 0x1FC68Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC68Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC68Cu) { return; }
    ctx->pc = 0x1FC68Cu;
label_1fc68c:
    // 0x1fc68c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc690: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc694: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc698: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc69c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6ac: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc6b0: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fc6b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC6B4u;
    SET_GPR_U32(ctx, 31, 0x1FC6BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC6BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC6BCu) { return; }
    ctx->pc = 0x1FC6BCu;
label_1fc6bc:
    // 0x1fc6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc6c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6c8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc6cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc6d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc6d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6dc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc6e0:
    // 0x1fc6e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6e4: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc6e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc6e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc6f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FC6F0u;
    {
        const bool branch_taken_0x1fc6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6f0) {
            ctx->pc = 0x1FC73Cu;
            goto label_1fc73c;
        }
    }
    ctx->pc = 0x1FC6F8u;
    // 0x1fc6f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc700: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc704: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc708: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC708u;
    SET_GPR_U32(ctx, 31, 0x1FC710u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC710u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC710u) { return; }
    ctx->pc = 0x1FC710u;
label_1fc710:
    // 0x1fc710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc718: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc71c: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fc71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc720: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x1fc720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1fc724: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC724u;
    SET_GPR_U32(ctx, 31, 0x1FC72Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC72Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC72Cu) { return; }
    ctx->pc = 0x1FC72Cu;
label_1fc72c:
    // 0x1fc72c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc738: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1fc73c:
    // 0x1fc73c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc740: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc748: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc750: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc754: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc758: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc75c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC75Cu;
    SET_GPR_U32(ctx, 31, 0x1FC764u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC75Cu, 0x1FC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC764u;
label_1fc764:
    // 0x1fc764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc768: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc76c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC788u;
            goto label_1fc788;
        }
    }
    ctx->pc = 0x1FC774u;
    // 0x1fc774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc778: 0x0  nop
    ctx->pc = 0x1fc778u;
    // NOP
    // 0x1fc77c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC780u;
    {
        const bool branch_taken_0x1fc780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc780) {
            ctx->pc = 0x1FC7A4u;
            goto label_1fc7a4;
        }
    }
    ctx->pc = 0x1FC788u;
label_1fc788:
    // 0x1fc788: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc78c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc798: 0x0  nop
    ctx->pc = 0x1fc798u;
    // NOP
    // 0x1fc79c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc7a0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc7a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fc7a4:
    // 0x1fc7a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7ac: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC7ACu;
    SET_GPR_U32(ctx, 31, 0x1FC7B4u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC7B4u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC7B4u) { return; }
    ctx->pc = 0x1FC7B4u;
label_1fc7b4:
    // 0x1fc7b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc7bc: 0x0  nop
    ctx->pc = 0x1fc7bcu;
    // NOP
    // 0x1fc7c0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fc7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fc7c4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fc7c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc7c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc7cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FC7CCu;
    {
        const bool branch_taken_0x1fc7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc7cc) {
            ctx->pc = 0x1FC890u;
            goto label_1fc890;
        }
    }
    ctx->pc = 0x1FC7D4u;
label_1fc7d4:
    // 0x1fc7d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc7dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7e0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc7e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc7ec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc7f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC7F4u;
    SET_GPR_U32(ctx, 31, 0x1FC7FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC7F4u, 0x1FC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7FCu;
label_1fc7fc:
    // 0x1fc7fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc800: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc808: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc80c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc810: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc814: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc818: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc81c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fc81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc820: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc824: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC824u;
    SET_GPR_U32(ctx, 31, 0x1FC82Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC824u, 0x1FC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC82Cu;
label_1fc82c:
    // 0x1fc82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc830: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc838: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc83c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC83Cu;
    {
        const bool branch_taken_0x1fc83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc83c) {
            ctx->pc = 0x1FC858u;
            goto label_1fc858;
        }
    }
    ctx->pc = 0x1FC844u;
    // 0x1fc844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc848: 0x0  nop
    ctx->pc = 0x1fc848u;
    // NOP
    // 0x1fc84c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC850u;
    {
        const bool branch_taken_0x1fc850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc850) {
            ctx->pc = 0x1FC874u;
            goto label_1fc874;
        }
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fc85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc860: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fc864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc868: 0x0  nop
    ctx->pc = 0x1fc868u;
    // NOP
    // 0x1fc86c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc870: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fc870u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fc874:
    // 0x1fc874: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc878: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc87c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC87Cu;
    SET_GPR_U32(ctx, 31, 0x1FC884u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC884u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC884u) { return; }
    ctx->pc = 0x1FC884u;
label_1fc884:
    // 0x1fc884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fc884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc88c: 0x0  nop
    ctx->pc = 0x1fc88cu;
    // NOP
label_1fc890:
    // 0x1fc890: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc894: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc898: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc89c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc8a0: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC8A0u;
    {
        const bool branch_taken_0x1fc8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8a0) {
            ctx->pc = 0x1FC7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc7d4;
        }
    }
    ctx->pc = 0x1FC8A8u;
    // 0x1fc8a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc8a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc8ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC8ACu;
    {
        const bool branch_taken_0x1fc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8ac) {
            ctx->pc = 0x1FC8F0u;
            goto label_1fc8f0;
        }
    }
    ctx->pc = 0x1FC8B4u;
label_1fc8b4:
    // 0x1fc8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc8b8: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fc8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fc8bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc8c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fc8c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fc8c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc8cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc8d0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fc8d0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc8d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc8d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc8dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc8e0: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc8e4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fc8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fc8e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc8ec: 0x0  nop
    ctx->pc = 0x1fc8ecu;
    // NOP
label_1fc8f0:
    // 0x1fc8f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc8f4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc8f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc8f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc8fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc900: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC900u;
    {
        const bool branch_taken_0x1fc900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc900) {
            ctx->pc = 0x1FC8B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc8b4;
        }
    }
    ctx->pc = 0x1FC908u;
    // 0x1fc908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc90c: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x1fc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x1fc910: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1fc910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x1fc914: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc918: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc91c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fc91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fc920: 0xe4800338  swc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 824), bits); }
    // 0x1fc924: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc924u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc928: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FC928u;
    {
        const bool branch_taken_0x1fc928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc928) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC930u;
label_1fc930:
    // 0x1fc930: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc934: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc938: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc93c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fc93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fc940: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc94c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fc94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fc950: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fc954: 0x24460270  addiu       $a2, $v0, 0x270
    ctx->pc = 0x1fc954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x1fc958: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FC958u;
    SET_GPR_U32(ctx, 31, 0x1FC960u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FC958u, 0x1FC960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC960u;
label_1fc960:
    // 0x1fc960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc964: 0x0  nop
    ctx->pc = 0x1fc964u;
    // NOP
label_1fc968:
    // 0x1fc968: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc96c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc970: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc974: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc978: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FC978u;
    {
        const bool branch_taken_0x1fc978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc978) {
            ctx->pc = 0x1FC930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC980u;
    // 0x1fc980: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fc980u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc98c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc990: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC998u;
}
