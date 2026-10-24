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

// Function: Em10_R1_catch
// Address: 0x12b8a0 - 0x12ba18
void Em10_R1_catch_0x12b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_catch_0x12b8a0");
#endif

    switch (ctx->pc) {
        case 0x12b908u: goto label_12b908;
        case 0x12b920u: goto label_12b920;
        case 0x12b990u: goto label_12b990;
        case 0x12b9a8u: goto label_12b9a8;
        case 0x12b9ecu: goto label_12b9ec;
        case 0x12b9fcu: goto label_12b9fc;
        case 0x12ba08u: goto label_12ba08;
        default: break;
    }

    ctx->pc = 0x12b8a0u;

    // 0x12b8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b8a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x12b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x12b8a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12b8ac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x12b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12b8b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12b8b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12b8bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12b8c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12b8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b8c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12b8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12b8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b8d0: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x12B8D0u;
    {
        const bool branch_taken_0x12b8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b8d0) {
            ctx->pc = 0x12B96Cu;
            goto label_12b96c;
        }
    }
    ctx->pc = 0x12B8D8u;
    // 0x12b8d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8D8u;
    {
        const bool branch_taken_0x12b8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8d8) {
            ctx->pc = 0x12B8E8u;
            goto label_12b8e8;
        }
    }
    ctx->pc = 0x12B8E0u;
    // 0x12b8e0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x12B8E0u;
    {
        const bool branch_taken_0x12b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8e0) {
            ctx->pc = 0x12BA08u;
            goto label_12ba08;
        }
    }
    ctx->pc = 0x12B8E8u;
label_12b8e8:
    // 0x12b8e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b8f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b8f4: 0x24063c2e  addiu       $a2, $zero, 0x3C2E
    ctx->pc = 0x12b8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15406));
    // 0x12b8f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b8fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b900: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B900u;
    SET_GPR_U32(ctx, 31, 0x12B908u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B900u, 0x12B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B908u;
label_12b908:
    // 0x12b908: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b90c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12b910: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12b910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12b914: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12b918: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12B918u;
    SET_GPR_U32(ctx, 31, 0x12B920u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12B918u, 0x12B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B920u;
label_12b920:
    // 0x12b920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b924: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12b928: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b92c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b930: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x12b934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b938: 0x0  nop
    ctx->pc = 0x12b938u;
    // NOP
    // 0x12b93c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b940: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x12b940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x12b944: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x12b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x12b948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b94c: 0x0  nop
    ctx->pc = 0x12b94cu;
    // NOP
    // 0x12b950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12b950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12b954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b958: 0xe4401298  swc1        $f0, 0x1298($v0)
    ctx->pc = 0x12b958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4760), bits); }
    // 0x12b95c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b960: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b968: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12b96c:
    // 0x12b96c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b974: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12b978: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b97c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12b97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12b980: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b984: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12b988: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12B988u;
    SET_GPR_U32(ctx, 31, 0x12B990u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12B988u, 0x12B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B990u;
label_12b990:
    // 0x12b990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b994: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12b998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b9a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B9A0u;
    SET_GPR_U32(ctx, 31, 0x12B9A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B9A0u, 0x12B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9A8u;
label_12b9a8:
    // 0x12b9a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9ac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12b9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12b9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12b9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12b9b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B9B8u;
    {
        const bool branch_taken_0x12b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b9b8) {
            ctx->pc = 0x12B9D8u;
            goto label_12b9d8;
        }
    }
    ctx->pc = 0x12B9C0u;
    // 0x12b9c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9c4: 0xc4411298  lwc1        $f1, 0x1298($v0)
    ctx->pc = 0x12b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b9c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9cc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b9d4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x12b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_12b9d8:
    // 0x12b9d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b9e4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12B9E4u;
    SET_GPR_U32(ctx, 31, 0x12B9ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12B9E4u, 0x12B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9ECu;
label_12b9ec:
    // 0x12b9ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b9f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b9f4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12B9F4u;
    SET_GPR_U32(ctx, 31, 0x12B9FCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12B9F4u, 0x12B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9FCu;
label_12b9fc:
    // 0x12b9fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba00: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12BA00u;
    SET_GPR_U32(ctx, 31, 0x12BA08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12BA00u, 0x12BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA08u;
label_12ba08:
    // 0x12ba08: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12ba08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ba0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ba0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ba10: 0x3e00008  jr          $ra
    ctx->pc = 0x12BA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BA18u;
}
