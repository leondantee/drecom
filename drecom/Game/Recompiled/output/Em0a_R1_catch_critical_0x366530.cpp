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

// Function: Em0a_R1_catch_critical
// Address: 0x366530 - 0x3667ec
void Em0a_R1_catch_critical_0x366530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_critical_0x366530");
#endif

    switch (ctx->pc) {
        case 0x3665c8u: goto label_3665c8;
        case 0x3665f4u: goto label_3665f4;
        case 0x366608u: goto label_366608;
        case 0x36661cu: goto label_36661c;
        case 0x36662cu: goto label_36662c;
        case 0x366644u: goto label_366644;
        case 0x366678u: goto label_366678;
        case 0x3666e8u: goto label_3666e8;
        case 0x366708u: goto label_366708;
        case 0x36671cu: goto label_36671c;
        case 0x366730u: goto label_366730;
        case 0x366740u: goto label_366740;
        case 0x366758u: goto label_366758;
        case 0x36678cu: goto label_36678c;
        default: break;
    }

    ctx->pc = 0x366530u;

    // 0x366530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x366530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x366534: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x366534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x366538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x366538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36653c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366540: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x366540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x366544: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x366544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x366548: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x366548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x36654c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366550: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x366550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x366554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x366554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x366558: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x36655c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x36655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x366560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x366560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x366564: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x366564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x366568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36656c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36656cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366570: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x366570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x366574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366578: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x366578u;
    {
        const bool branch_taken_0x366578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366578) {
            ctx->pc = 0x3666F8u;
            goto label_3666f8;
        }
    }
    ctx->pc = 0x366580u;
    // 0x366580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x366580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366584: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x366584u;
    {
        const bool branch_taken_0x366584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366584) {
            ctx->pc = 0x3666C8u;
            goto label_3666c8;
        }
    }
    ctx->pc = 0x36658Cu;
    // 0x36658c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366590: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x366590u;
    {
        const bool branch_taken_0x366590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366590) {
            ctx->pc = 0x3665E4u;
            goto label_3665e4;
        }
    }
    ctx->pc = 0x366598u;
    // 0x366598: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366598u;
    {
        const bool branch_taken_0x366598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366598) {
            ctx->pc = 0x3665A8u;
            goto label_3665a8;
        }
    }
    ctx->pc = 0x3665A0u;
    // 0x3665a0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3665A0u;
    {
        const bool branch_taken_0x3665a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3665a0) {
            ctx->pc = 0x3667D4u;
            goto label_3667d4;
        }
    }
    ctx->pc = 0x3665A8u;
label_3665a8:
    // 0x3665a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3665b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3665b4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x3665b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3665b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3665b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3665bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3665bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3665c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3665C0u;
    SET_GPR_U32(ctx, 31, 0x3665C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3665C0u, 0x3665C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665C8u;
label_3665c8:
    // 0x3665c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3665c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3665cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3665d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3665d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3665d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3665d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3665dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3665e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3665e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3665e4:
    // 0x3665e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3665e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3665ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3665ECu;
    SET_GPR_U32(ctx, 31, 0x3665F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3665ECu, 0x3665F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665F4u;
label_3665f4:
    // 0x3665f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3665f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3665fc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3665fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366600: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366600u;
    SET_GPR_U32(ctx, 31, 0x366608u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366600u, 0x366608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366608u;
label_366608:
    // 0x366608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36660c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x36660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366610: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366614: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366614u;
    SET_GPR_U32(ctx, 31, 0x36661Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36661Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36661Cu) { return; }
    ctx->pc = 0x36661Cu;
label_36661c:
    // 0x36661c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366624: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366624u;
    SET_GPR_U32(ctx, 31, 0x36662Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366624u, 0x36662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36662Cu;
label_36662c:
    // 0x36662c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366630: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366634: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366638: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x366638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36663c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36663Cu;
    SET_GPR_U32(ctx, 31, 0x366644u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36663Cu, 0x366644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366644u;
label_366644:
    // 0x366644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366648: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x366648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36664c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x36664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366654: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x366658: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36665c: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x36665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366660: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366664: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366668: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x366668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x36666c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366670: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366670u;
    SET_GPR_U32(ctx, 31, 0x366678u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366670u, 0x366678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366678u;
label_366678:
    // 0x366678: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36667c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36667cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366680: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x366680u;
    {
        const bool branch_taken_0x366680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366680) {
            ctx->pc = 0x3667D4u;
            goto label_3667d4;
        }
    }
    ctx->pc = 0x366688u;
    // 0x366688: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x366688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36668c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x36668cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x366690: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x366690u;
    {
        const bool branch_taken_0x366690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366690) {
            ctx->pc = 0x3666B0u;
            goto label_3666b0;
        }
    }
    ctx->pc = 0x366698u;
    // 0x366698: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36669c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x36669cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3666a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3666a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3666a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3666a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3666a8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3666A8u;
    {
        const bool branch_taken_0x3666a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666a8) {
            ctx->pc = 0x3667D4u;
            goto label_3667d4;
        }
    }
    ctx->pc = 0x3666B0u;
label_3666b0:
    // 0x3666b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3666b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3666b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3666b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3666bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3666bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3666c0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3666C0u;
    {
        const bool branch_taken_0x3666c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3666c0) {
            ctx->pc = 0x3667D4u;
            goto label_3667d4;
        }
    }
    ctx->pc = 0x3666C8u;
label_3666c8:
    // 0x3666c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3666c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3666ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3666d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3666d4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3666d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3666d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3666d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3666dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3666dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3666e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3666E0u;
    SET_GPR_U32(ctx, 31, 0x3666E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3666E0u, 0x3666E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3666E8u;
label_3666e8:
    // 0x3666e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3666e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3666ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3666f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3666f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3666f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3666f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3666f8:
    // 0x3666f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3666f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3666fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3666fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366700: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366700u;
    SET_GPR_U32(ctx, 31, 0x366708u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366700u, 0x366708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366708u;
label_366708:
    // 0x366708: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36670c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366710: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x366710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x366714: 0xc05cd58  jal         func_173560
    ctx->pc = 0x366714u;
    SET_GPR_U32(ctx, 31, 0x36671Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x366714u, 0x36671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36671Cu;
label_36671c:
    // 0x36671c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366724: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x366728: 0xc040c9e  jal         func_103278
    ctx->pc = 0x366728u;
    SET_GPR_U32(ctx, 31, 0x366730u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x366730u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x366730u) { return; }
    ctx->pc = 0x366730u;
label_366730:
    // 0x366730: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366738: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366738u;
    SET_GPR_U32(ctx, 31, 0x366740u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366738u, 0x366740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366740u;
label_366740:
    // 0x366740: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366744: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x366744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366748: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x366748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36674c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x36674cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x366750: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x366750u;
    SET_GPR_U32(ctx, 31, 0x366758u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x366750u, 0x366758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366758u;
label_366758:
    // 0x366758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x366758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36675c: 0xc44112a0  lwc1        $f1, 0x12A0($v0)
    ctx->pc = 0x36675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366760: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x366760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366768: 0xe44012a0  swc1        $f0, 0x12A0($v0)
    ctx->pc = 0x366768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4768), bits); }
    // 0x36676c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366770: 0xc44112a8  lwc1        $f1, 0x12A8($v0)
    ctx->pc = 0x366770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366774: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x366774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366778: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36677c: 0xe44012a8  swc1        $f0, 0x12A8($v0)
    ctx->pc = 0x36677cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4776), bits); }
    // 0x366780: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x366780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366784: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366784u;
    SET_GPR_U32(ctx, 31, 0x36678Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366784u, 0x36678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36678Cu;
label_36678c:
    // 0x36678c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x366790: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366794: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366794u;
    {
        const bool branch_taken_0x366794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366794) {
            ctx->pc = 0x3667D4u;
            goto label_3667d4;
        }
    }
    ctx->pc = 0x36679Cu;
    // 0x36679c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667a0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3667a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3667a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3667a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3667acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3667b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3667b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3667b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3667b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3667bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3667c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3667c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3667cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3667ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3667d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3667d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3667d4:
    // 0x3667d4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3667d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3667d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3667d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3667dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3667dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3667e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3667e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3667e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3667E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3667E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3667ECu;
}
