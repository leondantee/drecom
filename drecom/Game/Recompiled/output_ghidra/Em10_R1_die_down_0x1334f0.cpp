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

// Function: Em10_R1_die_down
// Address: 0x1334f0 - 0x133950
void Em10_R1_die_down_0x1334f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_die_down_0x1334f0");
#endif

    switch (ctx->pc) {
        case 0x1335c8u: goto label_1335c8;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335ecu: goto label_1335ec;
        case 0x13360cu: goto label_13360c;
        case 0x133618u: goto label_133618;
        case 0x13368cu: goto label_13368c;
        case 0x13369cu: goto label_13369c;
        case 0x1336acu: goto label_1336ac;
        case 0x1336bcu: goto label_1336bc;
        case 0x1336ccu: goto label_1336cc;
        case 0x1336dcu: goto label_1336dc;
        case 0x1336ecu: goto label_1336ec;
        case 0x1336fcu: goto label_1336fc;
        case 0x133740u: goto label_133740;
        case 0x133764u: goto label_133764;
        case 0x13378cu: goto label_13378c;
        case 0x1337b4u: goto label_1337b4;
        case 0x1337bcu: goto label_1337bc;
        case 0x1337e4u: goto label_1337e4;
        case 0x13380cu: goto label_13380c;
        case 0x133814u: goto label_133814;
        case 0x13383cu: goto label_13383c;
        case 0x133864u: goto label_133864;
        case 0x13386cu: goto label_13386c;
        case 0x133894u: goto label_133894;
        case 0x1338bcu: goto label_1338bc;
        case 0x1338d4u: goto label_1338d4;
        case 0x1338e0u: goto label_1338e0;
        default: break;
    }

    ctx->pc = 0x1334f0u;

    // 0x1334f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1334f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1334f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1334f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1334f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1334f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1334fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1334fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133500: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x133500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x133504: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133508: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x133508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x13350c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133510: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x133510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133514: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x133514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x133518: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13351c: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x13351Cu;
    {
        const bool branch_taken_0x13351c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13351c) {
            ctx->pc = 0x1338C4u;
            goto label_1338c4;
        }
    }
    ctx->pc = 0x133524u;
    // 0x133524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133528: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x133528u;
    {
        const bool branch_taken_0x133528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133528) {
            ctx->pc = 0x1335FCu;
            goto label_1335fc;
        }
    }
    ctx->pc = 0x133530u;
    // 0x133530: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133530u;
    {
        const bool branch_taken_0x133530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133530) {
            ctx->pc = 0x133540u;
            goto label_133540;
        }
    }
    ctx->pc = 0x133538u;
    // 0x133538: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x133538u;
    {
        const bool branch_taken_0x133538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133538) {
            ctx->pc = 0x133938u;
            goto label_133938;
        }
    }
    ctx->pc = 0x133540u;
label_133540:
    // 0x133540: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133544: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133548: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x13354c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133550: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133554: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x13355c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133560: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133564: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133568: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13356c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133570: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133574: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133578: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13357c: 0x946209e0  lhu         $v0, 0x9E0($v1)
    ctx->pc = 0x13357cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x133580: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x133580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x133584: 0xa46209e0  sh          $v0, 0x9E0($v1)
    ctx->pc = 0x133584u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2528), (uint16_t)GPR_U32(ctx, 2));
    // 0x133588: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13358c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133590: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133594: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x13359c: 0xa200009b  sb          $zero, 0x9B($s0)
    ctx->pc = 0x13359cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 0));
    // 0x1335a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1335a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335a4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1335a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1335a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1335ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1335acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1335b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1335b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1335b4: 0x2404050b  addiu       $a0, $zero, 0x50B
    ctx->pc = 0x1335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x1335b8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1335b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1335bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1335bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1335c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1335C0u;
    SET_GPR_U32(ctx, 31, 0x1335C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1335C0u, 0x1335C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335C8u;
label_1335c8:
    // 0x1335c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335cc: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x1335CCu;
    SET_GPR_U32(ctx, 31, 0x1335D4u);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x1335CCu, 0x1335D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335D4u;
label_1335d4:
    // 0x1335d4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1335d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1335d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335dc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1335dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1335e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335e4: 0xc04d994  jal         func_136650
    ctx->pc = 0x1335E4u;
    SET_GPR_U32(ctx, 31, 0x1335ECu);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x1335E4u, 0x1335ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335ECu;
label_1335ec:
    // 0x1335ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1335ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1335f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1335f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1335f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1335f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1335f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1335f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1335fc:
    // 0x1335fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133604u;
    SET_GPR_U32(ctx, 31, 0x13360Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133604u, 0x13360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13360Cu;
label_13360c:
    // 0x13360c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133610: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133610u;
    SET_GPR_U32(ctx, 31, 0x133618u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133610u, 0x133618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133618u;
label_133618:
    // 0x133618: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13361c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13361cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133620: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133620u;
    {
        const bool branch_taken_0x133620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133620) {
            ctx->pc = 0x133640u;
            goto label_133640;
        }
    }
    ctx->pc = 0x133628u;
    // 0x133628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13362c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x13362cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133634: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133638: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133638u;
    {
        const bool branch_taken_0x133638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133638) {
            ctx->pc = 0x133718u;
            goto label_133718;
        }
    }
    ctx->pc = 0x133640u;
label_133640:
    // 0x133640: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133644: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13364c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133650: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x133654: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133658: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x13365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133660: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133664: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133668: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x13366c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133678: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x133678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x13367c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133680: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x133684: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133684u;
    SET_GPR_U32(ctx, 31, 0x13368Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133684u, 0x13368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13368Cu;
label_13368c:
    // 0x13368c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133690: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x133690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x133694: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133694u;
    SET_GPR_U32(ctx, 31, 0x13369Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133694u, 0x13369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13369Cu;
label_13369c:
    // 0x13369c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336a0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1336a4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336A4u;
    SET_GPR_U32(ctx, 31, 0x1336ACu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336A4u, 0x1336ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336ACu;
label_1336ac:
    // 0x1336ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1336b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1336b4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336B4u;
    SET_GPR_U32(ctx, 31, 0x1336BCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336B4u, 0x1336BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336BCu;
label_1336bc:
    // 0x1336bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336c0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1336c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1336c4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336C4u;
    SET_GPR_U32(ctx, 31, 0x1336CCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336C4u, 0x1336CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336CCu;
label_1336cc:
    // 0x1336cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1336d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1336d4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336D4u;
    SET_GPR_U32(ctx, 31, 0x1336DCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336D4u, 0x1336DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336DCu;
label_1336dc:
    // 0x1336dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1336e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1336e4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336E4u;
    SET_GPR_U32(ctx, 31, 0x1336ECu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336E4u, 0x1336ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336ECu;
label_1336ec:
    // 0x1336ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1336f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1336f4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x1336F4u;
    SET_GPR_U32(ctx, 31, 0x1336FCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1336F4u, 0x1336FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336FCu;
label_1336fc:
    // 0x1336fc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1336fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133700: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133704: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x133704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x133708: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13370c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13370cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133710: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133714: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_133718:
    // 0x133718: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13371c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13371cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133720: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x133724: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x133724u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x133728: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x133728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x13372c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13372Cu;
    {
        const bool branch_taken_0x13372c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13372c) {
            ctx->pc = 0x133740u;
            goto label_133740;
        }
    }
    ctx->pc = 0x133734u;
    // 0x133734: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133738: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133738u;
    SET_GPR_U32(ctx, 31, 0x133740u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133738u, 0x133740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133740u;
label_133740:
    // 0x133740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133744: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133748: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x133748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13374c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13374cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x133750: 0x2861005b  slti        $at, $v1, 0x5B
    ctx->pc = 0x133750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x133754: 0x14200078  bnez        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x133754u;
    {
        const bool branch_taken_0x133754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x133754) {
            ctx->pc = 0x133938u;
            goto label_133938;
        }
    }
    ctx->pc = 0x13375Cu;
    // 0x13375c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x13375Cu;
    SET_GPR_U32(ctx, 31, 0x133764u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13375Cu, 0x133764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x133764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133768: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x133768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13376c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13376Cu;
    {
        const bool branch_taken_0x13376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13376c) {
            ctx->pc = 0x1337B4u;
            goto label_1337b4;
        }
    }
    ctx->pc = 0x133774u;
    // 0x133774: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133778: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13377c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133780: 0x24450270  addiu       $a1, $v0, 0x270
    ctx->pc = 0x133780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x133784: 0xc040c9e  jal         func_103278
    ctx->pc = 0x133784u;
    SET_GPR_U32(ctx, 31, 0x13378Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13378Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13378Cu) { return; }
    ctx->pc = 0x13378Cu;
label_13378c:
    // 0x13378c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x13378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133790: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x133794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133798: 0x0  nop
    ctx->pc = 0x133798u;
    // NOP
    // 0x13379c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13379cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1337a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1337a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1337a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1337a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1337a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1337ac: 0xc086158  jal         func_218560
    ctx->pc = 0x1337ACu;
    SET_GPR_U32(ctx, 31, 0x1337B4u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x1337ACu, 0x1337B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337B4u;
label_1337b4:
    // 0x1337b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1337B4u;
    SET_GPR_U32(ctx, 31, 0x1337BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1337B4u, 0x1337BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337BCu;
label_1337bc:
    // 0x1337bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1337bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1337c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1337c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1337c4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1337C4u;
    {
        const bool branch_taken_0x1337c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337c4) {
            ctx->pc = 0x13380Cu;
            goto label_13380c;
        }
    }
    ctx->pc = 0x1337CCu;
    // 0x1337cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1337d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1337d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1337d8: 0x24450370  addiu       $a1, $v0, 0x370
    ctx->pc = 0x1337d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x1337dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1337DCu;
    SET_GPR_U32(ctx, 31, 0x1337E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1337E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1337E4u) { return; }
    ctx->pc = 0x1337E4u;
label_1337e4:
    // 0x1337e4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1337e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1337e8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1337e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1337ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1337ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1337f0: 0x0  nop
    ctx->pc = 0x1337f0u;
    // NOP
    // 0x1337f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1337f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1337f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1337f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1337fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1337fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133800: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x133804: 0xc086158  jal         func_218560
    ctx->pc = 0x133804u;
    SET_GPR_U32(ctx, 31, 0x13380Cu);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x133804u, 0x13380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13380Cu;
label_13380c:
    // 0x13380c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x13380Cu;
    SET_GPR_U32(ctx, 31, 0x133814u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13380Cu, 0x133814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133814u;
label_133814:
    // 0x133814: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133818: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x133818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13381c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133864u;
            goto label_133864;
        }
    }
    ctx->pc = 0x133824u;
    // 0x133824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133828: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13382c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133830: 0x244501f0  addiu       $a1, $v0, 0x1F0
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x133834: 0xc040c9e  jal         func_103278
    ctx->pc = 0x133834u;
    SET_GPR_U32(ctx, 31, 0x13383Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13383Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13383Cu) { return; }
    ctx->pc = 0x13383Cu;
label_13383c:
    // 0x13383c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x13383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133840: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x133844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133848: 0x0  nop
    ctx->pc = 0x133848u;
    // NOP
    // 0x13384c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13384cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133850: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x133850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x133854: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133858: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13385c: 0xc086158  jal         func_218560
    ctx->pc = 0x13385Cu;
    SET_GPR_U32(ctx, 31, 0x133864u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x13385Cu, 0x133864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133864u;
label_133864:
    // 0x133864: 0xc067694  jal         func_19DA50
    ctx->pc = 0x133864u;
    SET_GPR_U32(ctx, 31, 0x13386Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x133864u, 0x13386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13386Cu;
label_13386c:
    // 0x13386c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13386cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x133870: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x133870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x133874: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x133874u;
    {
        const bool branch_taken_0x133874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133874) {
            ctx->pc = 0x133938u;
            goto label_133938;
        }
    }
    ctx->pc = 0x13387Cu;
    // 0x13387c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133880: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x133880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133884: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133888: 0x244502f0  addiu       $a1, $v0, 0x2F0
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x13388c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13388Cu;
    SET_GPR_U32(ctx, 31, 0x133894u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x133894u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x133894u) { return; }
    ctx->pc = 0x133894u;
label_133894:
    // 0x133894: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x133894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133898: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x133898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x13389c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13389cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1338a0: 0x0  nop
    ctx->pc = 0x1338a0u;
    // NOP
    // 0x1338a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1338a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1338a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1338a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1338ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1338b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1338b4: 0xc086158  jal         func_218560
    ctx->pc = 0x1338B4u;
    SET_GPR_U32(ctx, 31, 0x1338BCu);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x1338B4u, 0x1338BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338BCu;
label_1338bc:
    // 0x1338bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1338BCu;
    {
        const bool branch_taken_0x1338bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338bc) {
            ctx->pc = 0x133938u;
            goto label_133938;
        }
    }
    ctx->pc = 0x1338C4u;
label_1338c4:
    // 0x1338c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1338c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1338cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1338CCu;
    SET_GPR_U32(ctx, 31, 0x1338D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1338CCu, 0x1338D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D4u;
label_1338d4:
    // 0x1338d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1338D8u;
    SET_GPR_U32(ctx, 31, 0x1338E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1338D8u, 0x1338E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338E0u;
label_1338e0:
    // 0x1338e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1338e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1338e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1338E8u;
    {
        const bool branch_taken_0x1338e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338e8) {
            ctx->pc = 0x133908u;
            goto label_133908;
        }
    }
    ctx->pc = 0x1338F0u;
    // 0x1338f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338f4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1338f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1338f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1338fc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1338fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x133900u;
    {
        const bool branch_taken_0x133900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133900) {
            ctx->pc = 0x133938u;
            goto label_133938;
        }
    }
    ctx->pc = 0x133908u;
label_133908:
    // 0x133908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13390c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133910: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x133910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x133914: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133918: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13391c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133920: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x133920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x133924: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13392c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13392cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_133938:
    // 0x133938: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x133938u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13393c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13393cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133944: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x133944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x133948: 0x3e00008  jr          $ra
    ctx->pc = 0x133948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133950u;
}
