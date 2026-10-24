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

// Function: Em09_R1_mv09
// Address: 0x348520 - 0x348ee8
void Em09_R1_mv09_0x348520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv09_0x348520");
#endif

    switch (ctx->pc) {
        case 0x3485d4u: goto label_3485d4;
        case 0x3486dcu: goto label_3486dc;
        case 0x3486f8u: goto label_3486f8;
        case 0x348710u: goto label_348710;
        case 0x348720u: goto label_348720;
        case 0x348734u: goto label_348734;
        case 0x348744u: goto label_348744;
        case 0x3487d4u: goto label_3487d4;
        case 0x34885cu: goto label_34885c;
        case 0x348864u: goto label_348864;
        case 0x3488ecu: goto label_3488ec;
        case 0x3488fcu: goto label_3488fc;
        case 0x348910u: goto label_348910;
        case 0x348920u: goto label_348920;
        case 0x3489c4u: goto label_3489c4;
        case 0x348a44u: goto label_348a44;
        case 0x348a4cu: goto label_348a4c;
        case 0x348ad4u: goto label_348ad4;
        case 0x348ae4u: goto label_348ae4;
        case 0x348af8u: goto label_348af8;
        case 0x348b08u: goto label_348b08;
        case 0x348ba4u: goto label_348ba4;
        case 0x348bccu: goto label_348bcc;
        case 0x348bd8u: goto label_348bd8;
        case 0x348c24u: goto label_348c24;
        case 0x348c30u: goto label_348c30;
        case 0x348c84u: goto label_348c84;
        case 0x348ca0u: goto label_348ca0;
        case 0x348cb0u: goto label_348cb0;
        case 0x348cc4u: goto label_348cc4;
        case 0x348d04u: goto label_348d04;
        case 0x348d1cu: goto label_348d1c;
        case 0x348da4u: goto label_348da4;
        default: break;
    }

    ctx->pc = 0x348520u;

    // 0x348520: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x348520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x348524: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x348524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x348528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34852c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x348530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348534: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x348534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x348538: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34853c: 0x8c9202d0  lw          $s2, 0x2D0($a0)
    ctx->pc = 0x34853cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x348540: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348544: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x348544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348548: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x348548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34854c: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x34854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x348550: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x348550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x348554: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348558: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34855c: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x34855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x348560: 0x2485000a  addiu       $a1, $a0, 0xA
    ctx->pc = 0x348560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x348564: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x348564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x348568: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x348568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34856c: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x34856cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x348570: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x348570u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x348574: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348578: 0x110301c5  beq         $t0, $v1, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x348578u;
    {
        const bool branch_taken_0x348578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x348578) {
            ctx->pc = 0x348C90u;
            goto label_348c90;
        }
    }
    ctx->pc = 0x348580u;
    // 0x348580: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x348580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348584: 0x1104018d  beq         $t0, $a0, . + 4 + (0x18D << 2)
    ctx->pc = 0x348584u;
    {
        const bool branch_taken_0x348584 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x348584) {
            ctx->pc = 0x348BBCu;
            goto label_348bbc;
        }
    }
    ctx->pc = 0x34858Cu;
    // 0x34858c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348590: 0x11030041  beq         $t0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x348590u;
    {
        const bool branch_taken_0x348590 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x348590) {
            ctx->pc = 0x348698u;
            goto label_348698;
        }
    }
    ctx->pc = 0x348598u;
    // 0x348598: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348598u;
    {
        const bool branch_taken_0x348598 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x348598) {
            ctx->pc = 0x3485A8u;
            goto label_3485a8;
        }
    }
    ctx->pc = 0x3485A0u;
    // 0x3485a0: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x3485A0u;
    {
        const bool branch_taken_0x3485a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3485a0) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x3485A8u;
label_3485a8:
    // 0x3485a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3485a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3485ac: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485b0: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x3485b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3485b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485b8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3485b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3485bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3485c0: 0x24061e16  addiu       $a2, $zero, 0x1E16
    ctx->pc = 0x3485c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7702));
    // 0x3485c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3485c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3485c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3485c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3485cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3485CCu;
    SET_GPR_U32(ctx, 31, 0x3485D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3485CCu, 0x3485D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3485D4u;
label_3485d4:
    // 0x3485d4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3485d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3485dc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3485e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3485e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3485e4: 0x24520960  addiu       $s2, $v0, 0x960
    ctx->pc = 0x3485e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3485e8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x3485ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3485f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3485f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3485f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3485f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3485f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3485fc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3485fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348600: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348604: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x348604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348608: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34860c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34860cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x348610: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348614: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348618: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x348618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34861c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34861cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348620: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348624: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348628: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x348628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34862c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348630: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348634: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x348634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348638: 0xa0620072  sb          $v0, 0x72($v1)
    ctx->pc = 0x348638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x34863c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x34863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348640: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x348640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x348644: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x348644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x348648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34864c: 0x0  nop
    ctx->pc = 0x34864cu;
    // NOP
    // 0x348650: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x348650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x348654: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x348654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x348658: 0x3c04c416  lui         $a0, 0xC416
    ctx->pc = 0x348658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50198 << 16));
    // 0x34865c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34865cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348660: 0x0  nop
    ctx->pc = 0x348660u;
    // NOP
    // 0x348664: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x348664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x348668: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34866c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348670: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x348670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348674: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x348674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x348678: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x348678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34867c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x34867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348680: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x348680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x348684: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x348684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x348688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34868c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348690: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348694: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_348698:
    // 0x348698: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34869c: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x34869cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x3486a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3486a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3486a4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3486a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3486a8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3486A8u;
    {
        const bool branch_taken_0x3486a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3486a8) {
            ctx->pc = 0x348700u;
            goto label_348700;
        }
    }
    ctx->pc = 0x3486B0u;
    // 0x3486b0: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x3486b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x3486b4: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x3486b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x3486b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3486b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3486bc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3486bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486c0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3486c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3486c8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3486c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3486cc: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x3486ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x3486d0: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x3486d4: 0xc05c848  jal         func_172120
    ctx->pc = 0x3486D4u;
    SET_GPR_U32(ctx, 31, 0x3486DCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3486D4u, 0x3486DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486DCu;
label_3486dc:
    // 0x3486dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3486dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3486e0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486e4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x3486e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3486e8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x3486e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3486ec: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3486ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3486f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3486F0u;
    SET_GPR_U32(ctx, 31, 0x3486F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3486F0u, 0x3486F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486F8u;
label_3486f8:
    // 0x3486f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486fc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x3486fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_348700:
    // 0x348700: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348704: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x348704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348708: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348708u;
    SET_GPR_U32(ctx, 31, 0x348710u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348708u, 0x348710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348710u;
label_348710:
    // 0x348710: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348710u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348714: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348718: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348718u;
    SET_GPR_U32(ctx, 31, 0x348720u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348718u, 0x348720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348720u;
label_348720:
    // 0x348720: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348720u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348724: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348728: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34872c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34872Cu;
    SET_GPR_U32(ctx, 31, 0x348734u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34872Cu, 0x348734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348734u;
label_348734:
    // 0x348734: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x348734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348738: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34873c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34873Cu;
    SET_GPR_U32(ctx, 31, 0x348744u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34873Cu, 0x348744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348744u;
label_348744:
    // 0x348744: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348744u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348748: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34874c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34874cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348754: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x348754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x348758: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x348758u;
    {
        const bool branch_taken_0x348758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348758) {
            ctx->pc = 0x348938u;
            goto label_348938;
        }
    }
    ctx->pc = 0x348760u;
    // 0x348760: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348764: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x348764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x348768: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x348768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x34876c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x34876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x348770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348774: 0x0  nop
    ctx->pc = 0x348774u;
    // NOP
    // 0x348778: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x348778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34877c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34877cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348780: 0x0  nop
    ctx->pc = 0x348780u;
    // NOP
    // 0x348784: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x348784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x348788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34878c: 0x0  nop
    ctx->pc = 0x34878cu;
    // NOP
    // 0x348790: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x348790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x348794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34879c: 0x0  nop
    ctx->pc = 0x34879cu;
    // NOP
    // 0x3487a0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3487a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3487a4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3487a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x3487a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3487a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487ac: 0x0  nop
    ctx->pc = 0x3487acu;
    // NOP
    // 0x3487b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3487b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3487b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3487b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3487b8: 0xa7a30064  sh          $v1, 0x64($sp)
    ctx->pc = 0x3487b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x3487bc: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x3487bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x3487c0: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x3487c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x3487c4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3487c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3487c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3487c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3487cc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x3487CCu;
    SET_GPR_U32(ctx, 31, 0x3487D4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3487CCu, 0x3487D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3487D4u;
label_3487d4:
    // 0x3487d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3487d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3487d8: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x3487D8u;
    {
        const bool branch_taken_0x3487d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3487d8) {
            ctx->pc = 0x348938u;
            goto label_348938;
        }
    }
    ctx->pc = 0x3487E0u;
    // 0x3487e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3487e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487e4: 0x0  nop
    ctx->pc = 0x3487e4u;
    // NOP
    // 0x3487e8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3487e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3487ec: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x3487ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x3487f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3487f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3487f4: 0x0  nop
    ctx->pc = 0x3487f4u;
    // NOP
    // 0x3487f8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3487f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3487fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3487fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348800: 0x0  nop
    ctx->pc = 0x348800u;
    // NOP
    // 0x348804: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x348804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x348808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34880c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34880cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348810: 0x0  nop
    ctx->pc = 0x348810u;
    // NOP
    // 0x348814: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x348814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x348818: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34881c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x34881cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x348820: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x348820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x348824: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x348824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348828: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x348828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34882c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x348830: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x348830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x348834: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x348834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x348838: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x348838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34883c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x34883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348840: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x348840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x348844: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x348844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x348848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34884c: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x34884cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x348850: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348850u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348854: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348854u;
    SET_GPR_U32(ctx, 31, 0x34885Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348854u, 0x34885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34885Cu;
label_34885c:
    // 0x34885c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34885Cu;
    SET_GPR_U32(ctx, 31, 0x348864u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34885Cu, 0x348864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348864u;
label_348864:
    // 0x348864: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348864u;
    {
        const bool branch_taken_0x348864 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x348864) {
            ctx->pc = 0x348880u;
            goto label_348880;
        }
    }
    ctx->pc = 0x34886Cu;
    // 0x34886c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34886cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348870: 0x0  nop
    ctx->pc = 0x348870u;
    // NOP
    // 0x348874: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348878: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348878u;
    {
        const bool branch_taken_0x348878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348878) {
            ctx->pc = 0x34889Cu;
            goto label_34889c;
        }
    }
    ctx->pc = 0x348880u;
label_348880:
    // 0x348880: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x348880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x348884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x348888: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34888c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34888cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348890: 0x0  nop
    ctx->pc = 0x348890u;
    // NOP
    // 0x348894: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348898: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x348898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34889c:
    // 0x34889c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x34889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3488a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3488a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3488a4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3488a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3488a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3488ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3488acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3488b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3488b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3488b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3488b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3488b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3488b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3488bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3488bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3488c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3488c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3488c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3488c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3488c8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3488c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3488cc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3488d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3488d4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3488d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3488d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3488d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3488dc: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x3488dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3488e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3488e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3488e4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3488E4u;
    SET_GPR_U32(ctx, 31, 0x3488ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3488E4u, 0x3488ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488ECu;
label_3488ec:
    // 0x3488ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3488ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3488f0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x3488f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x3488f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3488F4u;
    SET_GPR_U32(ctx, 31, 0x3488FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3488F4u, 0x3488FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488FCu;
label_3488fc:
    // 0x3488fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3488fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348900: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x348904: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x348904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x348908: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348908u;
    SET_GPR_U32(ctx, 31, 0x348910u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348908u, 0x348910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348910u;
label_348910:
    // 0x348910: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x348910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x348914: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x348914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x348918: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348918u;
    SET_GPR_U32(ctx, 31, 0x348920u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348918u, 0x348920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348920u;
label_348920:
    // 0x348920: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x348924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x348928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34892c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348934: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_348938:
    // 0x348938: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34893c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x34893cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348944: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x348944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x348948: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x348948u;
    {
        const bool branch_taken_0x348948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348948) {
            ctx->pc = 0x348B20u;
            goto label_348b20;
        }
    }
    ctx->pc = 0x348950u;
    // 0x348950: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348954: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348958: 0x244202c0  addiu       $v0, $v0, 0x2C0
    ctx->pc = 0x348958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x34895c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x34895cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x348960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348964: 0x0  nop
    ctx->pc = 0x348964u;
    // NOP
    // 0x348968: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x348968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34896c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34896cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348970: 0x0  nop
    ctx->pc = 0x348970u;
    // NOP
    // 0x348974: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x348974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x348978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34897c: 0x0  nop
    ctx->pc = 0x34897cu;
    // NOP
    // 0x348980: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x348980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x348984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x348984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x348988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34898c: 0x0  nop
    ctx->pc = 0x34898cu;
    // NOP
    // 0x348990: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x348990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x348994: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x348994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x348998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34899c: 0x0  nop
    ctx->pc = 0x34899cu;
    // NOP
    // 0x3489a0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3489a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3489a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3489a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3489a8: 0xa7a200a4  sh          $v0, 0xA4($sp)
    ctx->pc = 0x3489a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x3489ac: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x3489acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x3489b0: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x3489b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x3489b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3489b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3489b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3489b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3489bc: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x3489BCu;
    SET_GPR_U32(ctx, 31, 0x3489C4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3489BCu, 0x3489C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3489C4u;
label_3489c4:
    // 0x3489c4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3489C4u;
    {
        const bool branch_taken_0x3489c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3489c4) {
            ctx->pc = 0x348B20u;
            goto label_348b20;
        }
    }
    ctx->pc = 0x3489CCu;
    // 0x3489cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489d0: 0x0  nop
    ctx->pc = 0x3489d0u;
    // NOP
    // 0x3489d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3489d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3489d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489dc: 0x0  nop
    ctx->pc = 0x3489dcu;
    // NOP
    // 0x3489e0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3489e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3489e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3489e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489e8: 0x0  nop
    ctx->pc = 0x3489e8u;
    // NOP
    // 0x3489ec: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x3489ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3489f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3489f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3489f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3489f8: 0x0  nop
    ctx->pc = 0x3489f8u;
    // NOP
    // 0x3489fc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3489fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x348a00: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a04: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x348a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a08: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x348a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x348a0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x348a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348a10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x348a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x348a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x348a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x348a18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x348a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348a1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x348a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a20: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x348a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x348a24: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348a2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x348a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x348a30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348a30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348a34: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x348a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x348a38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348a38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348a3c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348A3Cu;
    SET_GPR_U32(ctx, 31, 0x348A44u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348A3Cu, 0x348A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A44u;
label_348a44:
    // 0x348a44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348A44u;
    SET_GPR_U32(ctx, 31, 0x348A4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348A44u, 0x348A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A4Cu;
label_348a4c:
    // 0x348a4c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x348A4Cu;
    {
        const bool branch_taken_0x348a4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x348a4c) {
            ctx->pc = 0x348A68u;
            goto label_348a68;
        }
    }
    ctx->pc = 0x348A54u;
    // 0x348a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348a58: 0x0  nop
    ctx->pc = 0x348a58u;
    // NOP
    // 0x348a5c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348A60u;
    {
        const bool branch_taken_0x348a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348a60) {
            ctx->pc = 0x348A84u;
            goto label_348a84;
        }
    }
    ctx->pc = 0x348A68u;
label_348a68:
    // 0x348a68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x348a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x348a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x348a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x348a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348a78: 0x0  nop
    ctx->pc = 0x348a78u;
    // NOP
    // 0x348a7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x348a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348a80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x348a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_348a84:
    // 0x348a84: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x348a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348a88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348a8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x348a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x348a90: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348a94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x348a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348a98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x348a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x348a9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x348a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x348aa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x348aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x348aa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x348aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x348aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x348aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348aac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x348aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x348ab0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x348ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x348ab4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ab8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348abc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x348abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x348ac0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x348ac0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348ac4: 0x24470340  addiu       $a3, $v0, 0x340
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x348ac8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x348ac8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348acc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x348ACCu;
    SET_GPR_U32(ctx, 31, 0x348AD4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x348ACCu, 0x348AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AD4u;
label_348ad4:
    // 0x348ad4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x348ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348ad8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x348ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x348adc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348ADCu;
    SET_GPR_U32(ctx, 31, 0x348AE4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348ADCu, 0x348AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AE4u;
label_348ae4:
    // 0x348ae4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348ae8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x348ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x348aec: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x348aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x348af0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348AF0u;
    SET_GPR_U32(ctx, 31, 0x348AF8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348AF0u, 0x348AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AF8u;
label_348af8:
    // 0x348af8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x348af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x348afc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x348afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x348b00: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348B00u;
    SET_GPR_U32(ctx, 31, 0x348B08u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348B00u, 0x348B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B08u;
label_348b08:
    // 0x348b08: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b0c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x348b10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348b14: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x348b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348b18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348b1c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_348b20:
    // 0x348b20: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b24: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x348b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x348b28: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x348B28u;
    {
        const bool branch_taken_0x348b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b28) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348B30u;
    // 0x348b30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348b34: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b38: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x348b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x348b3c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x348b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x348b44: 0x24520960  addiu       $s2, $v0, 0x960
    ctx->pc = 0x348b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x348b48: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x348b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x348b4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x348b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x348b50: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x348b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x348b54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x348b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x348b58: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b5c: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x348b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x348b60: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x348b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348b68: 0x0  nop
    ctx->pc = 0x348b68u;
    // NOP
    // 0x348b6c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x348b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x348b70: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x348b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x348b74: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x348b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x348b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348b7c: 0x0  nop
    ctx->pc = 0x348b7cu;
    // NOP
    // 0x348b80: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x348b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x348b84: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b88: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348b8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x348b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x348b90: 0x24061e17  addiu       $a2, $zero, 0x1E17
    ctx->pc = 0x348b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7703));
    // 0x348b94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348b98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348b9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348B9Cu;
    SET_GPR_U32(ctx, 31, 0x348BA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348B9Cu, 0x348BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BA4u;
label_348ba4:
    // 0x348ba4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x348ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ba8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348bb0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x348bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x348bb4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x348BB4u;
    {
        const bool branch_taken_0x348bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348bb4) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348BBCu;
label_348bbc:
    // 0x348bbc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bc0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x348bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348bc4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348BC4u;
    SET_GPR_U32(ctx, 31, 0x348BCCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348BC4u, 0x348BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BCCu;
label_348bcc:
    // 0x348bcc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bd0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348BD0u;
    SET_GPR_U32(ctx, 31, 0x348BD8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348BD0u, 0x348BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BD8u;
label_348bd8:
    // 0x348bd8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348be0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x348be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348be4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348be8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x348be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348bf0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x348bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x348bf4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bf8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x348bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348bfc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x348bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348c00: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x348c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x348c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348c08: 0x0  nop
    ctx->pc = 0x348c08u;
    // NOP
    // 0x348c0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x348c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x348c10: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x348c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x348c14: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348c1c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x348C1Cu;
    SET_GPR_U32(ctx, 31, 0x348C24u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x348C1Cu, 0x348C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C24u;
label_348c24:
    // 0x348c24: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c28: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x348C28u;
    SET_GPR_U32(ctx, 31, 0x348C30u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x348C28u, 0x348C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C30u;
label_348c30:
    // 0x348c30: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x348c30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348c34: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c38: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x348c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348c3c: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x348c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348c40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x348c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x348c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348c4c: 0x0  nop
    ctx->pc = 0x348c4cu;
    // NOP
    // 0x348c50: 0x45010079  bc1t        . + 4 + (0x79 << 2)
    ctx->pc = 0x348C50u;
    {
        const bool branch_taken_0x348c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348c50) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348C58u;
    // 0x348c58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348c5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c60: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x348c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348c64: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c68: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c6c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x348c70: 0x24060418  addiu       $a2, $zero, 0x418
    ctx->pc = 0x348c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x348c74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348c78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348c7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348C7Cu;
    SET_GPR_U32(ctx, 31, 0x348C84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348C7Cu, 0x348C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C84u;
label_348c84:
    // 0x348c84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348c84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348c88: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x348C88u;
    {
        const bool branch_taken_0x348c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c88) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348C90u;
label_348c90:
    // 0x348c90: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348c94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348c98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348C98u;
    SET_GPR_U32(ctx, 31, 0x348CA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348C98u, 0x348CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CA0u;
label_348ca0:
    // 0x348ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348ca4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ca8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348CA8u;
    SET_GPR_U32(ctx, 31, 0x348CB0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348CA8u, 0x348CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CB0u;
label_348cb0:
    // 0x348cb0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348cb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x348cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348cb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348cbc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x348CBCu;
    SET_GPR_U32(ctx, 31, 0x348CC4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x348CBCu, 0x348CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348CC4u;
label_348cc4:
    // 0x348cc4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x348cc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348cc8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ccc: 0x90a609db  lbu         $a2, 0x9DB($a1)
    ctx->pc = 0x348cccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x348cd0: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x348cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x348cd4: 0x30e80008  andi        $t0, $a3, 0x8
    ctx->pc = 0x348cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x348cd8: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x348CD8u;
    {
        const bool branch_taken_0x348cd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x348cd8) {
            ctx->pc = 0x348D0Cu;
            goto label_348d0c;
        }
    }
    ctx->pc = 0x348CE0u;
    // 0x348ce0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ce4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x348ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348ce8: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x348cec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x348cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x348cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348cf4: 0x0  nop
    ctx->pc = 0x348cf4u;
    // NOP
    // 0x348cf8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x348cf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348cfc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348CFCu;
    SET_GPR_U32(ctx, 31, 0x348D04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348CFCu, 0x348D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D04u;
label_348d04:
    // 0x348d04: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x348d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_348d0c:
    // 0x348d0c: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x348d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d10: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x348d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x348d14: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x348D14u;
    SET_GPR_U32(ctx, 31, 0x348D1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x348D14u, 0x348D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D1Cu;
label_348d1c:
    // 0x348d1c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d20: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x348d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x348d24: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x348D24u;
    {
        const bool branch_taken_0x348d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348d24) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348D2Cu;
    // 0x348d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d30: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x348d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x348d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d3c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x348d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x348d44: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x348d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x348d4c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x348d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x348d54: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x348d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x348d5c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x348d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x348d60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d68: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x348d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x348d6c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x348d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x348d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x348d78: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x348d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x348d7c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x348d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348d80: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x348d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x348d84: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d88: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x348d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x348d90: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x348d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x348d94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x348d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x348d98: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x348d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x348d9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348D9Cu;
    SET_GPR_U32(ctx, 31, 0x348DA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348D9Cu, 0x348DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DA4u;
label_348da4:
    // 0x348da4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x348da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348da8: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x348da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x348dac: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x348dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x348db0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x348db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x348db4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348db4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x348db8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348dbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348dc0: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x348dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x348dc4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348dc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348dcc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x348dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348dd0: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x348dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x348dd4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x348DD4u;
    {
        const bool branch_taken_0x348dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348dd4) {
            ctx->pc = 0x348E10u;
            goto label_348e10;
        }
    }
    ctx->pc = 0x348DDCu;
    // 0x348ddc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348de0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348de4: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x348de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x348de8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348dec: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348df0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x348df4: 0xa066006f  sb          $a2, 0x6F($v1)
    ctx->pc = 0x348df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 6));
    // 0x348df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348dfc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e00: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x348e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348e04: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x348e04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x348e08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x348E08u;
    {
        const bool branch_taken_0x348e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e08) {
            ctx->pc = 0x348E38u;
            goto label_348e38;
        }
    }
    ctx->pc = 0x348E10u;
label_348e10:
    // 0x348e10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e18: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x348e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e1c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e20: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e24: 0xa080006f  sb          $zero, 0x6F($a0)
    ctx->pc = 0x348e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x348e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348e2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e30: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348e34: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x348e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
label_348e38:
    // 0x348e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e3c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x348e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348e40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348e44: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x348e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x348e48: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x348E48u;
    {
        const bool branch_taken_0x348e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e48) {
            ctx->pc = 0x348E84u;
            goto label_348e84;
        }
    }
    ctx->pc = 0x348E50u;
    // 0x348e50: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e58: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x348e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x348e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348e60: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348e68: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x348e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x348e6c: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x348e70: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x348e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x348e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348e78: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e7c: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x348e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x348e80: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x348e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_348e84:
    // 0x348e84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e88: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x348e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x348e8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x348e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348e90: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x348e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x348e94: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x348E94u;
    {
        const bool branch_taken_0x348e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e94) {
            ctx->pc = 0x348ECCu;
            goto label_348ecc;
        }
    }
    ctx->pc = 0x348E9Cu;
    // 0x348e9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ea0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348ea4: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x348ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x348ea8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348eac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348eb0: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x348eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x348eb4: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x348eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x348eb8: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x348eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x348ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348ec0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348ec4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348ec8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x348ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_348ecc:
    // 0x348ecc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x348eccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348edc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x348edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x348ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x348EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348EE8u;
}
