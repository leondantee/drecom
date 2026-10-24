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

// Function: Set_om_tex_trans
// Address: 0x266370 - 0x2664d0
void Set_om_tex_trans_0x266370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_om_tex_trans_0x266370");
#endif

    switch (ctx->pc) {
        case 0x2663c0u: goto label_2663c0;
        case 0x2663ecu: goto label_2663ec;
        case 0x26644cu: goto label_26644c;
        default: break;
    }

    ctx->pc = 0x266370u;

    // 0x266370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x266370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x266374: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x266374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x266378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26637c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26638c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x26638cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x266390: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x266390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x266394: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x266394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x266398: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x266398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26639c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26639cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2663a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2663a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2663a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2663a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2663a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2663ac: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x2663acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x2663b0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2663b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2663b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2663b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2663b8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2663B8u;
    {
        const bool branch_taken_0x2663b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2663b8) {
            ctx->pc = 0x266498u;
            goto label_266498;
        }
    }
    ctx->pc = 0x2663C0u;
label_2663c0:
    // 0x2663c0: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x2663c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2663c4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2663c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2663c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2663c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2663cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2663ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2663d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2663d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2663d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2663d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2663d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2663d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2663dc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2663dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2663e0: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2663e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2663e4: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2663E4u;
    SET_GPR_U32(ctx, 31, 0x2663ECu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2663E4u, 0x2663ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663ECu;
label_2663ec:
    // 0x2663ec: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x2663ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2663f0: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x2663f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2663f4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2663f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2663f8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2663f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2663fc: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x2663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x266400: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x266404: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x266404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x266408: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x266408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26640c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x26640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x266410: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x266410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x266414: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x266414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x266418: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x266418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26641c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x26641cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x266420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x266420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x266424: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x266424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x266428: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x266428u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x26642c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26642cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x266430: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x266430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x266434: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x266434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x266438: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x266438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26643c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26643cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266440: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266444: 0xc07465c  jal         func_1D1970
    ctx->pc = 0x266444u;
    SET_GPR_U32(ctx, 31, 0x26644Cu);
    ctx->pc = 0x1D1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1970u, 0x266444u, 0x26644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26644Cu;
label_26644c:
    // 0x26644c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x26644cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x266450: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x266450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x266454: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x266458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26645c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26645cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266460: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x266464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266468: 0xac500204  sw          $s0, 0x204($v0)
    ctx->pc = 0x266468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 16));
    // 0x26646c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x26646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x266470: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x266470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x266474: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x266474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x266478: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x266478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26647c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26647cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266480: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x266480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x266484: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266488: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x266488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26648c: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x26648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x266490: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x266490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x266494: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x266494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_266498:
    // 0x266498: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x266498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x26649c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26649cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2664a0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2664A0u;
    {
        const bool branch_taken_0x2664a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2664a0) {
            ctx->pc = 0x2663C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2663c0;
        }
    }
    ctx->pc = 0x2664A8u;
    // 0x2664a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2664a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2664ac: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2664acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2664b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2664b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2664b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2664b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2664b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2664b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2664bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2664bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2664c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2664c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2664c4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2664c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2664c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2664C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2664C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2664D0u;
}
