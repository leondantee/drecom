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

// Function: entry_00182824
// Address: 0x182824 - 0x1829e4
void entry_00182824_0x182824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182824_0x182824");
#endif

    switch (ctx->pc) {
        case 0x1828fcu: goto label_1828fc;
        case 0x182960u: goto label_182960;
        default: break;
    }

    ctx->pc = 0x182824u;

    // 0x182824: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182828: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182828u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18282c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18282cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182834: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18283c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182840: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182844: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18284c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x18284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182850: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x182850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182854: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x182854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x182858: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x182858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x18285c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182860: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182864: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182868: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182868u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18286c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182874: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182878: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x18287c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182884: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182888: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x182888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18288c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18288cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x182890: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182894: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182898: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18289c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1828a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1828a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1828a4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1828a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1828a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828ac: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1828b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1828b4: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1828b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1828c0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1828c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1828c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1828c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1828c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1828cc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1828ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1828d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1828d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1828d8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1828d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1828dc: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1828e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1828e4: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x1828e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1828e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1828e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1828ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1828ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1828f0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1828f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1828f4: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x1828F4u;
    SET_GPR_U32(ctx, 31, 0x1828FCu);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x1828F4u, 0x1828FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828FCu;
label_1828fc:
    // 0x1828fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1828fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182900: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182900u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182904: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182908: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182908u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18290c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x182910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182914: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182918: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18291c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x182920: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182924: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182928: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182928u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18292c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182930: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182930u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182934: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18293c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182940: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182944: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18294c: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x18294cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x182950: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x182950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182954: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x182954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182958: 0xc05f2cc  jal         func_17CB30
    ctx->pc = 0x182958u;
    SET_GPR_U32(ctx, 31, 0x182960u);
    ctx->pc = 0x17CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB30u, 0x182958u, 0x182960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182960u;
label_182960:
    // 0x182960: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x182960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x182964: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182968: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18296c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18296cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182970: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182970u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182974: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18297c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18297cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182980: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182984: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18298c: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x182990: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x182994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x182994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x182998: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x182998u;
    {
        const bool branch_taken_0x182998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182998) {
            ctx->pc = 0x182BF4u;
            return;
        }
    }
    ctx->pc = 0x1829A0u;
    // 0x1829a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1829a4: 0xc421f240  lwc1        $f1, -0xDC0($at)
    ctx->pc = 0x1829a4u;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829a8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1829a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1829acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1829b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1829b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1829b4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1829b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1829b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829bc: 0x0  nop
    ctx->pc = 0x1829bcu;
    // NOP
    // 0x1829c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1829c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1829c4: 0x0  nop
    ctx->pc = 0x1829c4u;
    // NOP
    // 0x1829c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1829C8u;
    {
        const bool branch_taken_0x1829c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1829c8) {
            ctx->pc = 0x1829E4u;
            return;
        }
    }
    ctx->pc = 0x1829D0u;
    // 0x1829d0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1829d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1829d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1829d8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1829d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1829dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1829DCu;
    {
        const bool branch_taken_0x1829dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829dc) {
            ctx->pc = 0x1829ECu;
            return;
        }
    }
    ctx->pc = 0x1829E4u;
}
