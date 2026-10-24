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

// Function: Em0a_eye_r0_on
// Address: 0x3687e0 - 0x36894c
void Em0a_eye_r0_on_0x3687e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_on_0x3687e0");
#endif

    switch (ctx->pc) {
        case 0x3688d4u: goto label_3688d4;
        default: break;
    }

    ctx->pc = 0x3687e0u;

    // 0x3687e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3687e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3687e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3687e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3687e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3687e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3687ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3687ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3687f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3687f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3687f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3687f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3687f8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3687f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x3687fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3687fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368800: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368808: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36880c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36880cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368810: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x368810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x368814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368818: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x368818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36881c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x36881cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368820: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x368820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x368824: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x368824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x368828: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x368828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36882c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x368830: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368834: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x368834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x368838: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x368838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36883c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368840: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x368840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x368844: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x368844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368848: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x368848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36884c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36884cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x368850: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x368850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x368854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368858: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36885c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x36885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x368860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368864: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368868: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x368868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36886c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x36886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x368870: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x368870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368874: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368878: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x368878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36887c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36887cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x368880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368884: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x368884u;
    {
        const bool branch_taken_0x368884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368884) {
            ctx->pc = 0x368930u;
            goto label_368930;
        }
    }
    ctx->pc = 0x36888Cu;
    // 0x36888c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36888Cu;
    {
        const bool branch_taken_0x36888c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36888c) {
            ctx->pc = 0x36889Cu;
            goto label_36889c;
        }
    }
    ctx->pc = 0x368894u;
    // 0x368894: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x368894u;
    {
        const bool branch_taken_0x368894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368894) {
            ctx->pc = 0x368930u;
            goto label_368930;
        }
    }
    ctx->pc = 0x36889Cu;
label_36889c:
    // 0x36889c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3688a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688a4: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x3688a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3688a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688ac: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x3688acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x3688b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3688b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3688b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3688b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3688b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3688b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3688bc: 0x2442af10  addiu       $v0, $v0, -0x50F0
    ctx->pc = 0x3688bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946576));
    // 0x3688c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3688c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3688c4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3688c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3688c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3688c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3688cc: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x3688CCu;
    SET_GPR_U32(ctx, 31, 0x3688D4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3688CCu, 0x3688D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3688D4u;
label_3688d4:
    // 0x3688d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3688d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3688d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3688d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3688dc: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3688dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3688e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3688e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3688e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3688e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3688e8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3688e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3688ec: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x3688ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x3688f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3688f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3688f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3688f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3688f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3688fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3688fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368900: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x368900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368904: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x368904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368908: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x368908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x36890c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368910: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x368910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x368914: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x368914u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x368918: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x368918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x36891c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x36891cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x368920: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x368920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368924: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x368924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x368928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x368928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36892c: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x36892cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
label_368930:
    // 0x368930: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x368930u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36893c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36893cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368940: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x368940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x368944: 0x3e00008  jr          $ra
    ctx->pc = 0x368944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36894Cu;
}
