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

// Function: Om_eff_move
// Address: 0x265190 - 0x26531c
void Om_eff_move_0x265190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_eff_move_0x265190");
#endif

    switch (ctx->pc) {
        case 0x265190u: goto label_265190;
        case 0x265194u: goto label_265194;
        case 0x265198u: goto label_265198;
        case 0x26519cu: goto label_26519c;
        case 0x2651a0u: goto label_2651a0;
        case 0x2651a4u: goto label_2651a4;
        case 0x2651a8u: goto label_2651a8;
        case 0x2651acu: goto label_2651ac;
        case 0x2651b0u: goto label_2651b0;
        case 0x2651b4u: goto label_2651b4;
        case 0x2651b8u: goto label_2651b8;
        case 0x2651bcu: goto label_2651bc;
        case 0x2651c0u: goto label_2651c0;
        case 0x2651c4u: goto label_2651c4;
        case 0x2651c8u: goto label_2651c8;
        case 0x2651ccu: goto label_2651cc;
        case 0x2651d0u: goto label_2651d0;
        case 0x2651d4u: goto label_2651d4;
        case 0x2651d8u: goto label_2651d8;
        case 0x2651dcu: goto label_2651dc;
        case 0x2651e0u: goto label_2651e0;
        case 0x2651e4u: goto label_2651e4;
        case 0x2651e8u: goto label_2651e8;
        case 0x2651ecu: goto label_2651ec;
        case 0x2651f0u: goto label_2651f0;
        case 0x2651f4u: goto label_2651f4;
        case 0x2651f8u: goto label_2651f8;
        case 0x2651fcu: goto label_2651fc;
        case 0x265200u: goto label_265200;
        case 0x265204u: goto label_265204;
        case 0x265208u: goto label_265208;
        case 0x26520cu: goto label_26520c;
        case 0x265210u: goto label_265210;
        case 0x265214u: goto label_265214;
        case 0x265218u: goto label_265218;
        case 0x26521cu: goto label_26521c;
        case 0x265220u: goto label_265220;
        case 0x265224u: goto label_265224;
        case 0x265228u: goto label_265228;
        case 0x26522cu: goto label_26522c;
        case 0x265230u: goto label_265230;
        case 0x265234u: goto label_265234;
        case 0x265238u: goto label_265238;
        case 0x26523cu: goto label_26523c;
        case 0x265240u: goto label_265240;
        case 0x265244u: goto label_265244;
        case 0x265248u: goto label_265248;
        case 0x26524cu: goto label_26524c;
        case 0x265250u: goto label_265250;
        case 0x265254u: goto label_265254;
        case 0x265258u: goto label_265258;
        case 0x26525cu: goto label_26525c;
        case 0x265260u: goto label_265260;
        case 0x265264u: goto label_265264;
        case 0x265268u: goto label_265268;
        case 0x26526cu: goto label_26526c;
        case 0x265270u: goto label_265270;
        case 0x265274u: goto label_265274;
        case 0x265278u: goto label_265278;
        case 0x26527cu: goto label_26527c;
        case 0x265280u: goto label_265280;
        case 0x265284u: goto label_265284;
        case 0x265288u: goto label_265288;
        case 0x26528cu: goto label_26528c;
        case 0x265290u: goto label_265290;
        case 0x265294u: goto label_265294;
        case 0x265298u: goto label_265298;
        case 0x26529cu: goto label_26529c;
        case 0x2652a0u: goto label_2652a0;
        case 0x2652a4u: goto label_2652a4;
        case 0x2652a8u: goto label_2652a8;
        case 0x2652acu: goto label_2652ac;
        case 0x2652b0u: goto label_2652b0;
        case 0x2652b4u: goto label_2652b4;
        case 0x2652b8u: goto label_2652b8;
        case 0x2652bcu: goto label_2652bc;
        case 0x2652c0u: goto label_2652c0;
        case 0x2652c4u: goto label_2652c4;
        case 0x2652c8u: goto label_2652c8;
        case 0x2652ccu: goto label_2652cc;
        case 0x2652d0u: goto label_2652d0;
        case 0x2652d4u: goto label_2652d4;
        case 0x2652d8u: goto label_2652d8;
        case 0x2652dcu: goto label_2652dc;
        case 0x2652e0u: goto label_2652e0;
        case 0x2652e4u: goto label_2652e4;
        case 0x2652e8u: goto label_2652e8;
        case 0x2652ecu: goto label_2652ec;
        case 0x2652f0u: goto label_2652f0;
        case 0x2652f4u: goto label_2652f4;
        case 0x2652f8u: goto label_2652f8;
        case 0x2652fcu: goto label_2652fc;
        case 0x265300u: goto label_265300;
        case 0x265304u: goto label_265304;
        case 0x265308u: goto label_265308;
        case 0x26530cu: goto label_26530c;
        case 0x265310u: goto label_265310;
        case 0x265314u: goto label_265314;
        case 0x265318u: goto label_265318;
        default: break;
    }

    ctx->pc = 0x265190u;

label_265190:
    // 0x265190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_265194:
    // 0x265194: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x265194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_265198:
    // 0x265198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26519c:
    // 0x26519c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2651a0:
    // 0x2651a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2651a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2651a4:
    // 0x2651a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2651a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_2651a8:
    // 0x2651a8: 0x2471f9e0  addiu       $s1, $v1, -0x620
    ctx->pc = 0x2651a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965728));
label_2651ac:
    // 0x2651ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2651acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2651b0:
    // 0x2651b0: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x2651b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960720)));
label_2651b4:
    // 0x2651b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2651b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2651b8:
    // 0x2651b8: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_2651bc:
    if (ctx->pc == 0x2651BCu) {
        ctx->pc = 0x2651C0u;
        goto label_2651c0;
    }
    ctx->pc = 0x2651B8u;
    {
        const bool branch_taken_0x2651b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651b8) {
            ctx->pc = 0x265300u;
            goto label_265300;
        }
    }
    ctx->pc = 0x2651C0u;
label_2651c0:
    // 0x2651c0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2651c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2651c4:
    // 0x2651c4: 0x10000048  b           . + 4 + (0x48 << 2)
label_2651c8:
    if (ctx->pc == 0x2651C8u) {
        ctx->pc = 0x2651CCu;
        goto label_2651cc;
    }
    ctx->pc = 0x2651C4u;
    {
        const bool branch_taken_0x2651c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651c4) {
            ctx->pc = 0x2652E8u;
            goto label_2652e8;
        }
    }
    ctx->pc = 0x2651CCu;
label_2651cc:
    // 0x2651cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2651ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2651d0:
    // 0x2651d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2651d4:
    // 0x2651d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2651d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2651d8:
    // 0x2651d8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_2651dc:
    if (ctx->pc == 0x2651DCu) {
        ctx->pc = 0x2651E0u;
        goto label_2651e0;
    }
    ctx->pc = 0x2651D8u;
    {
        const bool branch_taken_0x2651d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651d8) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x2651E0u;
label_2651e0:
    // 0x2651e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_2651e4:
    // 0x2651e4: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x2651e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_2651e8:
    // 0x2651e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2651e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2651ec:
    // 0x2651ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2651ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2651f0:
    // 0x2651f0: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_2651f4:
    if (ctx->pc == 0x2651F4u) {
        ctx->pc = 0x2651F8u;
        goto label_2651f8;
    }
    ctx->pc = 0x2651F0u;
    {
        const bool branch_taken_0x2651f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2651f0) {
            ctx->pc = 0x2652C4u;
            goto label_2652c4;
        }
    }
    ctx->pc = 0x2651F8u;
label_2651f8:
    // 0x2651f8: 0x8e031338  lw          $v1, 0x1338($s0)
    ctx->pc = 0x2651f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_2651fc:
    // 0x2651fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2651fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_265200:
    // 0x265200: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_265204:
    if (ctx->pc == 0x265204u) {
        ctx->pc = 0x265208u;
        goto label_265208;
    }
    ctx->pc = 0x265200u;
    {
        const bool branch_taken_0x265200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265200) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x265208u;
label_265208:
    // 0x265208: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_26520c:
    // 0x26520c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x26520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_265210:
    // 0x265210: 0xc040c9e  jal         func_103278
label_265214:
    if (ctx->pc == 0x265214u) {
        ctx->pc = 0x265218u;
        goto label_265218;
    }
    ctx->pc = 0x265210u;
    SET_GPR_U32(ctx, 31, 0x265218u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x265218u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265218u) { return; }
    ctx->pc = 0x265218u;
label_265218:
    // 0x265218: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_26521c:
    // 0x26521c: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x26521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
label_265220:
    // 0x265220: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_265224:
    // 0x265224: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x265224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_265228:
    // 0x265228: 0x2442ba10  addiu       $v0, $v0, -0x45F0
    ctx->pc = 0x265228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
label_26522c:
    // 0x26522c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_265230:
    // 0x265230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_265234:
    // 0x265234: 0x40f809  jalr        $v0
label_265238:
    if (ctx->pc == 0x265238u) {
        ctx->pc = 0x26523Cu;
        goto label_26523c;
    }
    ctx->pc = 0x265234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26523Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265234u, 0x26523Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26523Cu;
label_26523c:
    // 0x26523c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_265240:
    // 0x265240: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x265240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_265244:
    // 0x265244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_265248:
    if (ctx->pc == 0x265248u) {
        ctx->pc = 0x26524Cu;
        goto label_26524c;
    }
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265244) {
            ctx->pc = 0x265258u;
            goto label_265258;
        }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26524cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_265250:
    // 0x265250: 0xc097a68  jal         func_25E9A0
label_265254:
    if (ctx->pc == 0x265254u) {
        ctx->pc = 0x265258u;
        goto label_265258;
    }
    ctx->pc = 0x265250u;
    SET_GPR_U32(ctx, 31, 0x265258u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x265250u, 0x265258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265258u;
label_265258:
    // 0x265258: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x265258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_26525c:
    // 0x26525c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26525cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_265260:
    // 0x265260: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x265260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_265264:
    // 0x265264: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_265268:
    if (ctx->pc == 0x265268u) {
        ctx->pc = 0x26526Cu;
        goto label_26526c;
    }
    ctx->pc = 0x265264u;
    {
        const bool branch_taken_0x265264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265264) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x26526Cu;
label_26526c:
    // 0x26526c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x26526cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_265270:
    // 0x265270: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x265270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_265274:
    // 0x265274: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x265274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_265278:
    // 0x265278: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_26527c:
    if (ctx->pc == 0x26527Cu) {
        ctx->pc = 0x265280u;
        goto label_265280;
    }
    ctx->pc = 0x265278u;
    {
        const bool branch_taken_0x265278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265278) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x265280u;
label_265280:
    // 0x265280: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_265284:
    // 0x265284: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_265288:
    // 0x265288: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x265288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_26528c:
    // 0x26528c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_265290:
    // 0x265290: 0x832806  srlv        $a1, $v1, $a0
    ctx->pc = 0x265290u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_265294:
    // 0x265294: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_265298:
    // 0x265298: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_26529c:
    // 0x26529c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x26529cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_2652a0:
    // 0x2652a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2652a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2652a4:
    // 0x2652a4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_2652a8:
    // 0x2652a8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2652a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2652ac:
    // 0x2652ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2652acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2652b0:
    // 0x2652b0: 0x8c831a84  lw          $v1, 0x1A84($a0)
    ctx->pc = 0x2652b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6788)));
label_2652b4:
    // 0x2652b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2652b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2652b8:
    // 0x2652b8: 0xac831a84  sw          $v1, 0x1A84($a0)
    ctx->pc = 0x2652b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6788), GPR_U32(ctx, 3));
label_2652bc:
    // 0x2652bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2652c0:
    if (ctx->pc == 0x2652C0u) {
        ctx->pc = 0x2652C4u;
        goto label_2652c4;
    }
    ctx->pc = 0x2652BCu;
    {
        const bool branch_taken_0x2652bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652bc) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x2652C4u;
label_2652c4:
    // 0x2652c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2652c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2652c8:
    // 0x2652c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2652cc:
    // 0x2652cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2652d0:
    if (ctx->pc == 0x2652D0u) {
        ctx->pc = 0x2652D4u;
        goto label_2652d4;
    }
    ctx->pc = 0x2652CCu;
    {
        const bool branch_taken_0x2652cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652cc) {
            ctx->pc = 0x2652E0u;
            goto label_2652e0;
        }
    }
    ctx->pc = 0x2652D4u;
label_2652d4:
    // 0x2652d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2652d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2652d8:
    // 0x2652d8: 0xc097a68  jal         func_25E9A0
label_2652dc:
    if (ctx->pc == 0x2652DCu) {
        ctx->pc = 0x2652E0u;
        goto label_2652e0;
    }
    ctx->pc = 0x2652D8u;
    SET_GPR_U32(ctx, 31, 0x2652E0u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2652D8u, 0x2652E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652E0u;
label_2652e0:
    // 0x2652e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2652e4:
    // 0x2652e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2652e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2652e8:
    // 0x2652e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2652e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
label_2652ec:
    // 0x2652ec: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x2652ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960720)));
label_2652f0:
    // 0x2652f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2652f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2652f4:
    // 0x2652f4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2652f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2652f8:
    // 0x2652f8: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
label_2652fc:
    if (ctx->pc == 0x2652FCu) {
        ctx->pc = 0x265300u;
        goto label_265300;
    }
    ctx->pc = 0x2652F8u;
    {
        const bool branch_taken_0x2652f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2652f8) {
            ctx->pc = 0x2651CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2651cc;
        }
    }
    ctx->pc = 0x265300u;
label_265300:
    // 0x265300: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x265300u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_265304:
    // 0x265304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_265308:
    // 0x265308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26530c:
    // 0x26530c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26530cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_265310:
    // 0x265310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_265314:
    // 0x265314: 0x3e00008  jr          $ra
label_265318:
    if (ctx->pc == 0x265318u) {
        ctx->pc = 0x26531Cu;
        goto label_fallthrough_0x265314;
    }
    ctx->pc = 0x265314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x265314:
    ctx->pc = 0x26531Cu;
}
