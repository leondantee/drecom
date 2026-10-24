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

// Function: entry_00285544
// Address: 0x285544 - 0x285658
void entry_00285544_0x285544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285544_0x285544");
#endif

    switch (ctx->pc) {
        case 0x28555cu: goto label_28555c;
        case 0x285598u: goto label_285598;
        case 0x2855b0u: goto label_2855b0;
        default: break;
    }

    ctx->pc = 0x285544u;

    // 0x285544: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285548: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x285548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28554c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x28554Cu;
    {
        const bool branch_taken_0x28554c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28554c) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285554u;
    // 0x285554: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x285554u;
    SET_GPR_U32(ctx, 31, 0x28555Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x285554u, 0x28555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28555Cu;
label_28555c:
    // 0x28555c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x28555Cu;
    {
        const bool branch_taken_0x28555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28555c) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285564u;
    // 0x285564: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x285564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285568: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x285568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28556c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x28556cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285570: 0xae05685c  sw          $a1, 0x685C($s0)
    ctx->pc = 0x285570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 5));
    // 0x285574: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x285578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28557c: 0xac222990  sw          $v0, 0x2990($at)
    ctx->pc = 0x28557cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622990u, _value); } while (0);
    // 0x285580: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285584: 0x8c242990  lw          $a0, 0x2990($at)
    ctx->pc = 0x285584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622990u));
    // 0x285588: 0x26050720  addiu       $a1, $s0, 0x720
    ctx->pc = 0x285588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x28558c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x28558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x285590: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x285590u;
    SET_GPR_U32(ctx, 31, 0x285598u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x285598u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x285598u) { return; }
    ctx->pc = 0x285598u;
label_285598:
    // 0x285598: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x285598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x28559c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28559cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855a0: 0x8c222990  lw          $v0, 0x2990($at)
    ctx->pc = 0x2855a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622990u));
    // 0x2855a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2855a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2855a8: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x2855A8u;
    SET_GPR_U32(ctx, 31, 0x2855B0u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x2855A8u, 0x2855B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x2855b0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2855b4: 0x8e0365a0  lw          $v1, 0x65A0($s0)
    ctx->pc = 0x2855b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2855b8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2855b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2855bc: 0xae0365a0  sw          $v1, 0x65A0($s0)
    ctx->pc = 0x2855bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 3));
    // 0x2855c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855c4: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2855c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2855cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855d0: 0xac232990  sw          $v1, 0x2990($at)
    ctx->pc = 0x2855d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622990u, _value); } while (0);
    // 0x2855d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2855d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2855d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855dc: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2855e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2855e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2855e8: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x2855e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x2855ec: 0x9463fffc  lhu         $v1, -0x4($v1)
    ctx->pc = 0x2855ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2855f0: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x2855f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2855f4: 0x27d10400  addiu       $s1, $fp, 0x400
    ctx->pc = 0x2855f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
    // 0x2855f8: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x2855f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2855fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285600: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x285600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285604: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x285604u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x285608: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28560c: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x28560cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285610: 0x9463fffe  lhu         $v1, -0x2($v1)
    ctx->pc = 0x285610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x285614: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x285614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28561c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28561cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x285620: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285624: 0x8c232990  lw          $v1, 0x2990($at)
    ctx->pc = 0x285624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622990u));
    // 0x285628: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x285628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x28562c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285630: 0xac201b98  sw          $zero, 0x1B98($at)
    ctx->pc = 0x285630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x285634: 0x8e045dc4  lw          $a0, 0x5DC4($s0)
    ctx->pc = 0x285634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x285638: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x285638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28563c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28563Cu;
    {
        const bool branch_taken_0x28563c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28563c) {
            ctx->pc = 0x285658u;
            return;
        }
    }
    ctx->pc = 0x285644u;
    // 0x285644: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x285644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x285648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28564c: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28564cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x285650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285650u;
    {
        const bool branch_taken_0x285650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285650) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285658u;
}
