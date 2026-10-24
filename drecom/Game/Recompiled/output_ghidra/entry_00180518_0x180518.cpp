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

// Function: entry_00180518
// Address: 0x180518 - 0x180928
void entry_00180518_0x180518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180518_0x180518");
#endif

    switch (ctx->pc) {
        case 0x180688u: goto label_180688;
        case 0x1806b4u: goto label_1806b4;
        case 0x1806dcu: goto label_1806dc;
        case 0x180700u: goto label_180700;
        case 0x180728u: goto label_180728;
        case 0x180758u: goto label_180758;
        case 0x180778u: goto label_180778;
        case 0x1807acu: goto label_1807ac;
        case 0x1808f8u: goto label_1808f8;
        default: break;
    }

    ctx->pc = 0x180518u;

    // 0x180518: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18051c: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180520: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x180524: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180528: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180528u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18052c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x18052cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180530: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180530u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180534: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18053c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180540: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180544: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180548: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x180548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18054c: 0x90630155  lbu         $v1, 0x155($v1)
    ctx->pc = 0x18054cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x180550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180554: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x180554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x180558: 0x10200102  beqz        $at, . + 4 + (0x102 << 2)
    ctx->pc = 0x180558u;
    {
        const bool branch_taken_0x180558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180558) {
            ctx->pc = 0x180964u;
            return;
        }
    }
    ctx->pc = 0x180560u;
    // 0x180560: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180564: 0x8c22f1d0  lw          $v0, -0xE30($at)
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180568: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18056c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180570: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180574: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180578: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18057c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180580: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180584: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x180588: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x180588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18058c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18058cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180590: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180598: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18059c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1805a0: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1805a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1805a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1805ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1805acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1805b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1805b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1805b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805b8: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x1805b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x1805bc: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1805c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805c4: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x1805c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1805cc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1805d0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1805d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805d8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1805dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1805dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1805e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1805e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1805e4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1805e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1805ec: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1805f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1805f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1805f4: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x1805f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1805f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1805fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1805fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180604: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x180604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180608: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18060c: 0x8c24f1d0  lw          $a0, -0xE30($at)
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180610: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x180614: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180618: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x18061c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180620: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180624: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x180624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180628: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18062c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x180630: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x180630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180634: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180634u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180638: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x180638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18063c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x180640: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180644: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180648: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x18064c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180650: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180654: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x180654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180658: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18065c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180664: 0x0  nop
    ctx->pc = 0x180664u;
    // NOP
    // 0x180668: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18066c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180670: 0x2464f1b0  addiu       $a0, $v1, -0xE50
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x180674: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180678: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18067c: 0x2466f160  addiu       $a2, $v1, -0xEA0
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x180680: 0xc040c80  jal         func_103200
    ctx->pc = 0x180680u;
    SET_GPR_U32(ctx, 31, 0x180688u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180688u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180688u) { return; }
    ctx->pc = 0x180688u;
label_180688:
    // 0x180688: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x180688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18068c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180698: 0xe420f1bc  swc1        $f0, -0xE44($at)
    ctx->pc = 0x180698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1BCu, _value); } while (0); }
    // 0x18069c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806a0: 0x2464f1b0  addiu       $a0, $v1, -0xE50
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x1806a4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1806a8: 0x24c5f1b0  addiu       $a1, $a2, -0xE50
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963632));
    // 0x1806ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x1806ACu;
    SET_GPR_U32(ctx, 31, 0x1806B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1806B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1806B4u) { return; }
    ctx->pc = 0x1806B4u;
label_1806b4:
    // 0x1806b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1806b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1806b8: 0x3c03433b  lui         $v1, 0x433B
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17211 << 16));
    // 0x1806bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1806bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1806c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1806c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1806c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1806c8: 0x24a4f1b0  addiu       $a0, $a1, -0xE50
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
    // 0x1806cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806d0: 0x2465f1b0  addiu       $a1, $v1, -0xE50
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x1806d4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1806D4u;
    SET_GPR_U32(ctx, 31, 0x1806DCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1806DCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1806DCu) { return; }
    ctx->pc = 0x1806DCu;
label_1806dc:
    // 0x1806dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1806dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1806e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806e4: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x1806e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1806ec: 0x2445f1a0  addiu       $a1, $v0, -0xE60
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    // 0x1806f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1806f4: 0x2446f1b0  addiu       $a2, $v0, -0xE50
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x1806f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1806F8u;
    SET_GPR_U32(ctx, 31, 0x180700u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180700u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180700u) { return; }
    ctx->pc = 0x180700u;
label_180700:
    // 0x180700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180708: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18070c: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x18070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x180710: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180714: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180718: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18071c: 0x2445f170  addiu       $a1, $v0, -0xE90
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180720: 0xc040c24  jal         func_103090
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180728u) { return; }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180730: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180734: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x180734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x180738: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x18073c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18073cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180740: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180744: 0x2444f170  addiu       $a0, $v0, -0xE90
    ctx->pc = 0x180744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18074c: 0x2445f170  addiu       $a1, $v0, -0xE90
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180750: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x180750u;
    SET_GPR_U32(ctx, 31, 0x180758u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x180758u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180758u) { return; }
    ctx->pc = 0x180758u;
label_180758:
    // 0x180758: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18075c: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x18075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180760: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180764: 0x2465f170  addiu       $a1, $v1, -0xE90
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180768: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x18076c: 0x24e6f160  addiu       $a2, $a3, -0xEA0
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963552));
    // 0x180770: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x180770u;
    SET_GPR_U32(ctx, 31, 0x180778u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180778u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180778u) { return; }
    ctx->pc = 0x180778u;
label_180778:
    // 0x180778: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180778u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18077c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x180780: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180780u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180784: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180788: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x180788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x18078c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180790: 0x2464f1a0  addiu       $a0, $v1, -0xE60
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963616));
    // 0x180794: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180798: 0x2465f170  addiu       $a1, $v1, -0xE90
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x18079c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1807a0: 0x2466f160  addiu       $a2, $v1, -0xEA0
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x1807a4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1807ACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1807ACu) { return; }
    ctx->pc = 0x1807ACu;
label_1807ac:
    // 0x1807ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1807acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1807b0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1807b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1807b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807bc: 0xe420f1ac  swc1        $f0, -0xE54($at)
    ctx->pc = 0x1807bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1ACu, _value); } while (0); }
    // 0x1807c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1807c4: 0x24a3f170  addiu       $v1, $a1, -0xE90
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1807c8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1807c8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x47F170u));
    // 0x1807cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1807d0: 0x2463f160  addiu       $v1, $v1, -0xEA0
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x1807d4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1807d4u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F160u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F160u, _value); } while (0);
    // 0x1807d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807dc: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x1807dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x1807e0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1807e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807e8: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x1807ec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1807f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1807f4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1807f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807fc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180800: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180808: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18080c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x180810: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180814: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180818: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x18081c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x18081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180820: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x180820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180828: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x180828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18082c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180830: 0x8c25f1d0  lw          $a1, -0xE30($at)
    ctx->pc = 0x180830u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180834: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x180834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x180838: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18083c: 0x8c26f1c8  lw          $a2, -0xE38($at)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180840: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x180844: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180848: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18084c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180850: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x180854: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x180858: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18085c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180860: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x180860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x180864: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x180864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180868: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18086c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180870: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x180870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180874: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180878: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18087c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180880: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180884: 0x8c25f1d0  lw          $a1, -0xE30($at)
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180888: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x18088c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180890: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180894: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180898: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18089c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1808a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1808a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1808a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1808a8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1808a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1808ac: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1808acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1808b0: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1808b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1808b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1808b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1808b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1808b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1808bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1808c0: 0x24820380  addiu       $v0, $a0, 0x380
    ctx->pc = 0x1808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1808c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1808c8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1808cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1808ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1808d0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1808d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1808d4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1808d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1808d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1808dc: 0x0  nop
    ctx->pc = 0x1808dcu;
    // NOP
    // 0x1808e0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1808e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1808e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1808e8: 0x2444f160  addiu       $a0, $v0, -0xEA0
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1808ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1808f0: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1808F0u;
    SET_GPR_U32(ctx, 31, 0x1808F8u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1808F0u, 0x1808F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808F8u;
label_1808f8:
    // 0x1808f8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1808fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1808fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180900: 0x0  nop
    ctx->pc = 0x180900u;
    // NOP
    // 0x180904: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180908: 0x0  nop
    ctx->pc = 0x180908u;
    // NOP
    // 0x18090c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18090Cu;
    {
        const bool branch_taken_0x18090c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18090c) {
            ctx->pc = 0x180928u;
            return;
        }
    }
    ctx->pc = 0x180914u;
    // 0x180914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180918: 0x8c25f1c8  lw          $a1, -0xE38($at)
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x18091c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x180920: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180924: 0xac24f1c8  sw          $a0, -0xE38($at)
    ctx->pc = 0x180924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47F1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C8u, _value); } while (0);
    ctx->pc = 0x180928u;
}
