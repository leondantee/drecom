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

// Function: Em0e_R1_mv0e
// Address: 0x2474e0 - 0x247d5c
void Em0e_R1_mv0e_0x2474e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv0e_0x2474e0");
#endif

    switch (ctx->pc) {
        case 0x247504u: goto label_247504;
        case 0x24755cu: goto label_24755c;
        case 0x247648u: goto label_247648;
        case 0x247694u: goto label_247694;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476d4u: goto label_2476d4;
        case 0x247820u: goto label_247820;
        case 0x247854u: goto label_247854;
        case 0x247880u: goto label_247880;
        case 0x2478d8u: goto label_2478d8;
        case 0x24790cu: goto label_24790c;
        case 0x247938u: goto label_247938;
        case 0x2479acu: goto label_2479ac;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f4u: goto label_2479f4;
        case 0x247a24u: goto label_247a24;
        case 0x247a50u: goto label_247a50;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247c18u: goto label_247c18;
        default: break;
    }

    ctx->pc = 0x2474e0u;

    // 0x2474e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2474e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2474e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2474e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2474e8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2474e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2474ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2474ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2474f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2474f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2474f4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2474f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2474f8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2474f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2474fc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2474FCu;
    SET_GPR_U32(ctx, 31, 0x247504u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2474FCu, 0x247504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247504u;
label_247504:
    // 0x247504: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x247504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x247508: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24750c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x24750cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x247510: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247518: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x247518u;
    {
        const bool branch_taken_0x247518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247518) {
            ctx->pc = 0x247668u;
            goto label_247668;
        }
    }
    ctx->pc = 0x247520u;
    // 0x247520: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x247520u;
    {
        const bool branch_taken_0x247520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247520) {
            ctx->pc = 0x247530u;
            goto label_247530;
        }
    }
    ctx->pc = 0x247528u;
    // 0x247528: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x247528u;
    {
        const bool branch_taken_0x247528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247528) {
            ctx->pc = 0x247C10u;
            goto label_247c10;
        }
    }
    ctx->pc = 0x247530u;
label_247530:
    // 0x247530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247534: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247538: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x247538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x24753c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247540: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247544: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247548: 0x3406be02  ori         $a2, $zero, 0xBE02
    ctx->pc = 0x247548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48642);
    // 0x24754c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24754cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247550: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247554: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247554u;
    SET_GPR_U32(ctx, 31, 0x24755Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247554u, 0x24755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24755Cu;
label_24755c:
    // 0x24755c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247560: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247564: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247568: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x247568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24756c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x247570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247574: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247578: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24757c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247580: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x247584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247588: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24758c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x24758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247590: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x247590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x247594: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x247598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24759c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2475a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2475a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2475a8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2475ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2475acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2475b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2475b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2475b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2475bc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2475bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2475c0: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x2475c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2475c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475d0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2475d4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2475d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2475d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2475d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475dc: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2475dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2475e0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2475e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2475e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2475e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2475ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2475ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2475f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2475f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2475f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2475f8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x2475f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x2475fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2475fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247604: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247608: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x247608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x24760c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x247610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x247610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247618: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24761c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x24761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x247620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247624: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247628: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x24762c: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x24762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x247630: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x247630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x247634: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24763c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x24763cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x247640: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247640u;
    SET_GPR_U32(ctx, 31, 0x247648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247640u, 0x247648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247648u;
label_247648:
    // 0x247648: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x247648u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24764c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x24764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x247650: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x247650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x247654: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x247658: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24765c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24765cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247664: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x247664u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_247668:
    // 0x247668: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24766c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247674: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247678: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x247678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x24767c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x24767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x247680: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x247684: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x247688: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x247688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24768c: 0xc05c848  jal         func_172120
    ctx->pc = 0x24768Cu;
    SET_GPR_U32(ctx, 31, 0x247694u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x24768Cu, 0x247694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247694u;
label_247694:
    // 0x247694: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x247694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x247698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24769c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x24769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2476a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2476a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2476a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2476a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2476a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2476A8u;
    SET_GPR_U32(ctx, 31, 0x2476B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2476A8u, 0x2476B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476B0u;
label_2476b0:
    // 0x2476b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2476b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2476b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2476b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2476bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2476c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2476C0u;
    SET_GPR_U32(ctx, 31, 0x2476C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2476C0u, 0x2476C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C8u;
label_2476c8:
    // 0x2476c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2476c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476cc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2476CCu;
    SET_GPR_U32(ctx, 31, 0x2476D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2476CCu, 0x2476D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476D4u;
label_2476d4:
    // 0x2476d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476d8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2476d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2476dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2476dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2476e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2476e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2476e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2476e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2476e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2476E8u;
    {
        const bool branch_taken_0x2476e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2476e8) {
            ctx->pc = 0x247754u;
            goto label_247754;
        }
    }
    ctx->pc = 0x2476F0u;
    // 0x2476f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2476f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2476f8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2476f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2476fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2476fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247700: 0x0  nop
    ctx->pc = 0x247700u;
    // NOP
    // 0x247704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247708: 0x0  nop
    ctx->pc = 0x247708u;
    // NOP
    // 0x24770c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x24770Cu;
    {
        const bool branch_taken_0x24770c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24770c) {
            ctx->pc = 0x24773Cu;
            goto label_24773c;
        }
    }
    ctx->pc = 0x247714u;
    // 0x247714: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x247714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24771c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247724: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247728: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24772c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24772cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247734: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247738: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_24773c:
    // 0x24773c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247740: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x247740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x247744: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x247744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x247748: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x247748u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x24774c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24774Cu;
    {
        const bool branch_taken_0x24774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24774c) {
            ctx->pc = 0x2477B4u;
            goto label_2477b4;
        }
    }
    ctx->pc = 0x247754u;
label_247754:
    // 0x247754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247758: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x247758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24775c: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x24775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247764: 0x0  nop
    ctx->pc = 0x247764u;
    // NOP
    // 0x247768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24776c: 0x0  nop
    ctx->pc = 0x24776cu;
    // NOP
    // 0x247770: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x247770u;
    {
        const bool branch_taken_0x247770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247770) {
            ctx->pc = 0x2477A0u;
            goto label_2477a0;
        }
    }
    ctx->pc = 0x247778u;
    // 0x247778: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x247778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x24777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247784: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247788: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24778c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247794: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24779c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x24779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2477a0:
    // 0x2477a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2477a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477a4: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2477a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2477a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2477ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2477acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2477b0: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x2477b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
label_2477b4:
    // 0x2477b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477b8: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x2477b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x2477bc: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2477BCu;
    {
        const bool branch_taken_0x2477bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2477bc) {
            ctx->pc = 0x247954u;
            goto label_247954;
        }
    }
    ctx->pc = 0x2477C4u;
    // 0x2477c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477c8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2477cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2477d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2477d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2477d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2477d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2477d8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2477D8u;
    {
        const bool branch_taken_0x2477d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2477d8) {
            ctx->pc = 0x247898u;
            goto label_247898;
        }
    }
    ctx->pc = 0x2477E0u;
    // 0x2477e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477e4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2477e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2477e8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2477ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2477ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2477f0: 0x0  nop
    ctx->pc = 0x2477f0u;
    // NOP
    // 0x2477f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2477f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2477f8: 0x0  nop
    ctx->pc = 0x2477f8u;
    // NOP
    // 0x2477fc: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x2477FCu;
    {
        const bool branch_taken_0x2477fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2477fc) {
            ctx->pc = 0x247880u;
            goto label_247880;
        }
    }
    ctx->pc = 0x247804u;
    // 0x247804: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x247804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24780c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247814: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x247814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x247818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247818u;
    SET_GPR_U32(ctx, 31, 0x247820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247818u, 0x247820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247820u;
label_247820:
    // 0x247820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247828: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247828u;
    {
        const bool branch_taken_0x247828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247828) {
            ctx->pc = 0x24785Cu;
            goto label_24785c;
        }
    }
    ctx->pc = 0x247830u;
    // 0x247830: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x247830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x247834: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x247834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x247838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x247838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24783c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247840: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x247844: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x247848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24784c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24784Cu;
    SET_GPR_U32(ctx, 31, 0x247854u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24784Cu, 0x247854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247854u;
label_247854:
    // 0x247854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x247854u;
    {
        const bool branch_taken_0x247854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247854) {
            ctx->pc = 0x247880u;
            goto label_247880;
        }
    }
    ctx->pc = 0x24785Cu;
label_24785c:
    // 0x24785c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247860: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x247864: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x247864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x247868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x247868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24786c: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x247870: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x247870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x247874: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247878: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x247878u;
    SET_GPR_U32(ctx, 31, 0x247880u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x247878u, 0x247880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247880u;
label_247880:
    // 0x247880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247884: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x247884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x247888: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24788c: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x24788cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x247890: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x247890u;
    {
        const bool branch_taken_0x247890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247890) {
            ctx->pc = 0x247964u;
            goto label_247964;
        }
    }
    ctx->pc = 0x247898u;
label_247898:
    // 0x247898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24789c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x24789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2478a0: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x2478a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2478a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2478a8: 0x0  nop
    ctx->pc = 0x2478a8u;
    // NOP
    // 0x2478ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2478acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2478b0: 0x0  nop
    ctx->pc = 0x2478b0u;
    // NOP
    // 0x2478b4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2478B4u;
    {
        const bool branch_taken_0x2478b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2478b4) {
            ctx->pc = 0x247938u;
            goto label_247938;
        }
    }
    ctx->pc = 0x2478BCu;
    // 0x2478bc: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2478bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2478c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2478c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2478c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2478c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2478c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2478cc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2478ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2478d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2478D0u;
    SET_GPR_U32(ctx, 31, 0x2478D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2478D0u, 0x2478D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478D8u;
label_2478d8:
    // 0x2478d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2478d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2478dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2478dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2478e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2478E0u;
    {
        const bool branch_taken_0x2478e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2478e0) {
            ctx->pc = 0x247914u;
            goto label_247914;
        }
    }
    ctx->pc = 0x2478E8u;
    // 0x2478e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2478ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2478ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2478f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2478f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2478f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2478f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2478f8: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x2478f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x2478fc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2478fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x247900: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247900u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247904: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x247904u;
    SET_GPR_U32(ctx, 31, 0x24790Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x247904u, 0x24790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24790Cu;
label_24790c:
    // 0x24790c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24790Cu;
    {
        const bool branch_taken_0x24790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24790c) {
            ctx->pc = 0x247938u;
            goto label_247938;
        }
    }
    ctx->pc = 0x247914u;
label_247914:
    // 0x247914: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x247914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x247918: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x247918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x24791c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24791cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247920: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247924: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x247924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x247928: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x247928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x24792c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24792cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247930: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x247930u;
    SET_GPR_U32(ctx, 31, 0x247938u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x247930u, 0x247938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247938u;
label_247938:
    // 0x247938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24793c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x24793cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x247940: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x247940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x247944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x247944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247948: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x247948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x24794c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24794Cu;
    {
        const bool branch_taken_0x24794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24794c) {
            ctx->pc = 0x247964u;
            goto label_247964;
        }
    }
    ctx->pc = 0x247954u;
label_247954:
    // 0x247954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247958: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x24795c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247960: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x247960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
label_247964:
    // 0x247964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247968: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x24796c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x24796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247970: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247974u;
    {
        const bool branch_taken_0x247974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247974) {
            ctx->pc = 0x24798Cu;
            goto label_24798c;
        }
    }
    ctx->pc = 0x24797Cu;
    // 0x24797c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247980: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x247980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x247984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x247984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247988: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x247988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_24798c:
    // 0x24798c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x24798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247990: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x247994: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x247994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x247998: 0xa482127e  sh          $v0, 0x127E($a0)
    ctx->pc = 0x247998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x24799c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x24799Cu;
    {
        const bool branch_taken_0x24799c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24799c) {
            ctx->pc = 0x247A38u;
            goto label_247a38;
        }
    }
    ctx->pc = 0x2479A4u;
    // 0x2479a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2479A4u;
    SET_GPR_U32(ctx, 31, 0x2479ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2479A4u, 0x2479ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ACu;
label_2479ac:
    // 0x2479ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2479acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2479b0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2479b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2479b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2479b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2479b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2479bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2479bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2479c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2479c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2479c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2479c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479c8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2479c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2479cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2479d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2479d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2479d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2479d8: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x2479d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x2479dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2479e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2479e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2479e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2479E4u;
    SET_GPR_U32(ctx, 31, 0x2479ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2479E4u, 0x2479ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ECu;
label_2479ec:
    // 0x2479ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2479ECu;
    SET_GPR_U32(ctx, 31, 0x2479F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2479ECu, 0x2479F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479F4u;
label_2479f4:
    // 0x2479f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2479f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2479f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2479f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2479fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2479FCu;
    {
        const bool branch_taken_0x2479fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479fc) {
            ctx->pc = 0x247A38u;
            goto label_247a38;
        }
    }
    ctx->pc = 0x247A04u;
    // 0x247a04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x247a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x247a10: 0x24065a26  addiu       $a2, $zero, 0x5A26
    ctx->pc = 0x247a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23078));
    // 0x247a14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x247a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247a1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x247A1Cu;
    SET_GPR_U32(ctx, 31, 0x247A24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x247A1Cu, 0x247A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A24u;
label_247a24:
    // 0x247a24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a28: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x247a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x247a2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x247a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x247a30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x247a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x247a34: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x247a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
label_247a38:
    // 0x247a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a3c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x247a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x247a40: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x247A40u;
    {
        const bool branch_taken_0x247a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247a40) {
            ctx->pc = 0x247C10u;
            goto label_247c10;
        }
    }
    ctx->pc = 0x247A48u;
    // 0x247a48: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247A48u;
    SET_GPR_U32(ctx, 31, 0x247A50u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247A48u, 0x247A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A50u;
label_247a50:
    // 0x247a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247a54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x247a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x247a58: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x247a5c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247a60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x247a60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x247a64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a68: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x247a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x247a6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x247a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247a74: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x247a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x247a78: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x247a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x247a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x247a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247a80: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x247a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x247a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247a88: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x247a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x247a8c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x247a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x247a90: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x247a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x247a94: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x247a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x247a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247aa0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247aa4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x247aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247aac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247ab0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ab4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x247ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247abc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247ac0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ac4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247ac8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247AC8u;
    SET_GPR_U32(ctx, 31, 0x247AD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247AC8u, 0x247AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AD0u;
label_247ad0:
    // 0x247ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247ad8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x247AD8u;
    {
        const bool branch_taken_0x247ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ad8) {
            ctx->pc = 0x247B28u;
            goto label_247b28;
        }
    }
    ctx->pc = 0x247AE0u;
    // 0x247ae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ae4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247ae8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x247ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x247aec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x247aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x247af0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247AF0u;
    {
        const bool branch_taken_0x247af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247af0) {
            ctx->pc = 0x247B28u;
            goto label_247b28;
        }
    }
    ctx->pc = 0x247AF8u;
    // 0x247af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247b00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247b04: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x247b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247b08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b0c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b14: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x247b14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b18: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b1c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x247b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_247b28:
    // 0x247b28: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247b30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x247b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247b34: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247b34u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247b38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247b3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b40: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x247b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247b48: 0x0  nop
    ctx->pc = 0x247b48u;
    // NOP
    // 0x247b4c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x247B4Cu;
    {
        const bool branch_taken_0x247b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247b4c) {
            ctx->pc = 0x247B9Cu;
            goto label_247b9c;
        }
    }
    ctx->pc = 0x247B54u;
    // 0x247b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b58: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247b5c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x247b60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x247b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x247b64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B9Cu;
            goto label_247b9c;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b70: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b74: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x247b74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x247b78: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x247b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247b7c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b80: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x247b80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x247b84: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x247b84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b88: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x247b88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b90: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247b90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_247b9c:
    // 0x247b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247B9Cu;
    SET_GPR_U32(ctx, 31, 0x247BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247B9Cu, 0x247BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247BA4u;
label_247ba4:
    // 0x247ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247bac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x247BACu;
    {
        const bool branch_taken_0x247bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247bac) {
            ctx->pc = 0x247C10u;
            goto label_247c10;
        }
    }
    ctx->pc = 0x247BB4u;
    // 0x247bb4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247bb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247bbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x247bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247bc0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247bc0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bc4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247bc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247bc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bcc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x247bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247bd4: 0x0  nop
    ctx->pc = 0x247bd4u;
    // NOP
    // 0x247bd8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247BD8u;
    {
        const bool branch_taken_0x247bd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247bd8) {
            ctx->pc = 0x247C10u;
            goto label_247c10;
        }
    }
    ctx->pc = 0x247BE0u;
    // 0x247be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247be4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247be8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x247be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x247bec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x247becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x247bf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bf4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x247bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x247bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247bfc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x247bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_247c10:
    // 0x247c10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247C10u;
    SET_GPR_U32(ctx, 31, 0x247C18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247C10u, 0x247C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C18u;
label_247c18:
    // 0x247c18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247c1c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x247c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x247c20: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x247c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x247c24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x247c28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x247c28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247c2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c34: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x247c34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x247c38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c40: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c48: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c50: 0x0  nop
    ctx->pc = 0x247c50u;
    // NOP
    // 0x247c54: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x247C54u;
    {
        const bool branch_taken_0x247c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c54) {
            ctx->pc = 0x247D4Cu;
            goto label_247d4c;
        }
    }
    ctx->pc = 0x247C5Cu;
    // 0x247c5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c64: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c6c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c74: 0x0  nop
    ctx->pc = 0x247c74u;
    // NOP
    // 0x247c78: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x247C78u;
    {
        const bool branch_taken_0x247c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c78) {
            ctx->pc = 0x247CD4u;
            goto label_247cd4;
        }
    }
    ctx->pc = 0x247C80u;
    // 0x247c80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c88: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x247c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c90: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247c98: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x247c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x247c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ca0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247ca4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cac: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x247cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cb4: 0x0  nop
    ctx->pc = 0x247cb4u;
    // NOP
    // 0x247cb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x247CB8u;
    {
        const bool branch_taken_0x247cb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cb8) {
            ctx->pc = 0x247CD4u;
            goto label_247cd4;
        }
    }
    ctx->pc = 0x247CC0u;
    // 0x247cc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247cc8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x247cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ccc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cd0: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_247cd4:
    // 0x247cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247cdc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ce4: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cec: 0x0  nop
    ctx->pc = 0x247cecu;
    // NOP
    // 0x247cf0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x247CF0u;
    {
        const bool branch_taken_0x247cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cf0) {
            ctx->pc = 0x247D4Cu;
            goto label_247d4c;
        }
    }
    ctx->pc = 0x247CF8u;
    // 0x247cf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d00: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x247d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d08: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x247d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247d10: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x247d14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d18: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d1c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x247d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d20: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d24: 0xc4a00184  lwc1        $f0, 0x184($a1)
    ctx->pc = 0x247d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247d2c: 0x0  nop
    ctx->pc = 0x247d2cu;
    // NOP
    // 0x247d30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x247D30u;
    {
        const bool branch_taken_0x247d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247d30) {
            ctx->pc = 0x247D4Cu;
            goto label_247d4c;
        }
    }
    ctx->pc = 0x247D38u;
    // 0x247d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d40: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x247d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d48: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_247d4c:
    // 0x247d4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x247d4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247d50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247d54: 0x3e00008  jr          $ra
    ctx->pc = 0x247D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D5Cu;
}
