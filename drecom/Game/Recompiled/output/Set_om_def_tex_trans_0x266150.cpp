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

// Function: Set_om_def_tex_trans
// Address: 0x266150 - 0x266370
void Set_om_def_tex_trans_0x266150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_om_def_tex_trans_0x266150");
#endif

    switch (ctx->pc) {
        case 0x26620cu: goto label_26620c;
        case 0x266254u: goto label_266254;
        case 0x2662b4u: goto label_2662b4;
        default: break;
    }

    ctx->pc = 0x266150u;

    // 0x266150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x266150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x266154: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x266154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x266158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26615c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26615cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26616c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x26616cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x266170: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x266170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x266174: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x266174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x266178: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x266178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26617c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x26617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x266180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266184: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x266188: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x266188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x26618c: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x26618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x266190: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x266190u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266198: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x266198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x26619c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x26619cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2661a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2661a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2661a4: 0x8c22fca8  lw          $v0, -0x358($at)
    ctx->pc = 0x2661a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCA8u));
    // 0x2661a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2661a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2661ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2661ACu;
    {
        const bool branch_taken_0x2661ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2661ac) {
            ctx->pc = 0x2661C0u;
            goto label_2661c0;
        }
    }
    ctx->pc = 0x2661B4u;
    // 0x2661b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2661b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2661b8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2661B8u;
    {
        const bool branch_taken_0x2661b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2661b8) {
            ctx->pc = 0x26634Cu;
            goto label_26634c;
        }
    }
    ctx->pc = 0x2661C0u;
label_2661c0:
    // 0x2661c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2661c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2661c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2661c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2661c8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2661c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2661cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2661ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2661d0: 0x8c22fca8  lw          $v0, -0x358($at)
    ctx->pc = 0x2661d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCA8u));
    // 0x2661d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2661d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2661d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2661d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2661dc: 0xac22fca8  sw          $v0, -0x358($at)
    ctx->pc = 0x2661dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FCA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA8u, _value); } while (0);
    // 0x2661e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2661e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2661e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2661e8: 0x2442b898  addiu       $v0, $v0, -0x4768
    ctx->pc = 0x2661e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949016));
    // 0x2661ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2661ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2661f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2661f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2661f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2661f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2661f8: 0x38420027  xori        $v0, $v0, 0x27
    ctx->pc = 0x2661f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)39);
    // 0x2661fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2661fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x266200: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x266200u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266204: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x266204u;
    {
        const bool branch_taken_0x266204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266204) {
            ctx->pc = 0x266320u;
            goto label_266320;
        }
    }
    ctx->pc = 0x26620Cu;
label_26620c:
    // 0x26620c: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x26620cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266210: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266214: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x266214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x266218: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x266218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26621c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266220: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x266220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x266224: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x266224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x266228: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x266228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26622c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x26622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266230: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x266230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x266234: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x266234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x266238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26623c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266240: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266244: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266248: 0x244415ac  addiu       $a0, $v0, 0x15AC
    ctx->pc = 0x266248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5548));
    // 0x26624c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x26624Cu;
    SET_GPR_U32(ctx, 31, 0x266254u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x26624Cu, 0x266254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266254u;
label_266254:
    // 0x266254: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x266254u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x266258: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x266258u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x26625c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x26625cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x266260: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x266260u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x266264: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x266268: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x26626c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x26626cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x266270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x266270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x266274: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x266274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x266278: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x266278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26627c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x266280: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x266280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266284: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x266288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x266288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x26628c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x266290: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x266290u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x266294: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x266294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x266298: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x266298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x26629c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x26629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2662a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2662a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2662a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2662a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2662a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2662a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2662ac: 0xc07465c  jal         func_1D1970
    ctx->pc = 0x2662ACu;
    SET_GPR_U32(ctx, 31, 0x2662B4u);
    ctx->pc = 0x1D1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1970u, 0x2662ACu, 0x2662B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662B4u;
label_2662b4:
    // 0x2662b4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2662b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2662b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2662b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2662bc: 0x8c23fca4  lw          $v1, -0x35C($at)
    ctx->pc = 0x2662bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x2662c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2662c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2662c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2662c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2662cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2662ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2662d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x2662d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x2662d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2662d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662d8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2662d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2662dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2662dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2662e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2662e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2662e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2662e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2662ec: 0xac5015ac  sw          $s0, 0x15AC($v0)
    ctx->pc = 0x2662ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5548), GPR_U32(ctx, 16));
    // 0x2662f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2662f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2662f4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2662f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2662f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2662fc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2662fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x266300: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x266300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x266304: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x266304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x266308: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x266308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26630c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x26630cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x266310: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x266310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x266314: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x266314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x266318: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x266318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26631c: 0x0  nop
    ctx->pc = 0x26631cu;
    // NOP
label_266320:
    // 0x266320: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x266320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x266324: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x266324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x266328: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x266328u;
    {
        const bool branch_taken_0x266328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266328) {
            ctx->pc = 0x26620Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26620c;
        }
    }
    ctx->pc = 0x266330u;
    // 0x266330: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266334: 0x8c22fca4  lw          $v0, -0x35C($at)
    ctx->pc = 0x266334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FCA4u));
    // 0x266338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x266338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26633c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266340: 0xac22fca4  sw          $v0, -0x35C($at)
    ctx->pc = 0x266340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FCA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FCA4u, _value); } while (0);
    // 0x266344: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266348: 0x0  nop
    ctx->pc = 0x266348u;
    // NOP
label_26634c:
    // 0x26634c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x26634cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266350: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26635c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26635cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266364: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x266364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x266368: 0x3e00008  jr          $ra
    ctx->pc = 0x266368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266370u;
}
