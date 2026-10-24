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

// Function: Scene_load
// Address: 0x1d96e0 - 0x1d9a84
void Scene_load_0x1d96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scene_load_0x1d96e0");
#endif

    switch (ctx->pc) {
        case 0x1d977cu: goto label_1d977c;
        case 0x1d97acu: goto label_1d97ac;
        case 0x1d97b4u: goto label_1d97b4;
        case 0x1d97c0u: goto label_1d97c0;
        case 0x1d97c8u: goto label_1d97c8;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97ecu: goto label_1d97ec;
        case 0x1d981cu: goto label_1d981c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9888u: goto label_1d9888;
        case 0x1d9898u: goto label_1d9898;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98ccu: goto label_1d98cc;
        case 0x1d98dcu: goto label_1d98dc;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d9928u: goto label_1d9928;
        case 0x1d99b0u: goto label_1d99b0;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99f4u: goto label_1d99f4;
        default: break;
    }

    ctx->pc = 0x1d96e0u;

    // 0x1d96e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d96e4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x1d96e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1d96e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d96ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d96f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d96f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d96f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d96fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d96fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9704: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d9708: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1d9708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d970c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d9710: 0x2454fe10  addiu       $s4, $v0, -0x1F0
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x1d9714: 0x26021a14  addiu       $v0, $s0, 0x1A14
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6676));
    // 0x1d9718: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d9718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D1A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A94u, _value); } while (0);
    // 0x1d971c: 0x8e820258  lw          $v0, 0x258($s4)
    ctx->pc = 0x1d971cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x1d9720: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d9720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9724: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d9724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d9728: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x1d9728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1d972c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9730: 0x8e82025c  lw          $v0, 0x25C($s4)
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 604)));
    // 0x1d9734: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d9738: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d973c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9740: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1d9740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9744: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x1d9744u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d9748: 0x8e820258  lw          $v0, 0x258($s4)
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 600)));
    // 0x1d974c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d974cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d9750: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d9754: 0x24429b80  addiu       $v0, $v0, -0x6480
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1d9758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d975c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9760u;
    {
        const bool branch_taken_0x1d9760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9760) {
            ctx->pc = 0x1D9774u;
            goto label_1d9774;
        }
    }
    ctx->pc = 0x1D9768u;
    // 0x1d9768: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x1d9768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x1d976c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D976Cu;
    {
        const bool branch_taken_0x1d976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d976c) {
            ctx->pc = 0x1D9784u;
            goto label_1d9784;
        }
    }
    ctx->pc = 0x1D9774u;
label_1d9774:
    // 0x1d9774: 0xc0766a4  jal         func_1D9A90
    ctx->pc = 0x1D9774u;
    SET_GPR_U32(ctx, 31, 0x1D977Cu);
    ctx->pc = 0x1D9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A90u, 0x1D9774u, 0x1D977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D977Cu;
label_1d977c:
    // 0x1d977c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D977Cu;
    {
        const bool branch_taken_0x1d977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d977c) {
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D9784u;
label_1d9784:
    // 0x1d9784: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9788: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1d9788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1d978c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1d9790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9794: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 2));
    // 0x1d9798: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1d9798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d979c: 0x8e050a68  lw          $a1, 0xA68($s0)
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d97a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d97a4: 0xc076504  jal         func_1D9410
    ctx->pc = 0x1D97A4u;
    SET_GPR_U32(ctx, 31, 0x1D97ACu);
    ctx->pc = 0x1D9410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9410u, 0x1D97A4u, 0x1D97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97ACu;
label_1d97ac:
    // 0x1d97ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97ACu;
    {
        const bool branch_taken_0x1d97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97ac) {
            ctx->pc = 0x1D97C0u;
            goto label_1d97c0;
        }
    }
    ctx->pc = 0x1D97B4u;
label_1d97b4:
    // 0x1d97b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d97b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d97b8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1D97B8u;
    SET_GPR_U32(ctx, 31, 0x1D97C0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1D97B8u, 0x1D97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97C0u;
label_1d97c0:
    // 0x1d97c0: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1D97C0u;
    SET_GPR_U32(ctx, 31, 0x1D97C8u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1D97C0u, 0x1D97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97C8u;
label_1d97c8:
    // 0x1d97c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D97C8u;
    {
        const bool branch_taken_0x1d97c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d97c8) {
            ctx->pc = 0x1D97B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d97b4;
        }
    }
    ctx->pc = 0x1D97D0u;
    // 0x1d97d0: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x1D97D0u;
    SET_GPR_U32(ctx, 31, 0x1D97D8u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x1D97D0u, 0x1D97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97D8u;
label_1d97d8:
    // 0x1d97d8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d97d8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d97dc: 0x1ec00005  bgtz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D97DCu;
    {
        const bool branch_taken_0x1d97dc = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x1d97dc) {
            ctx->pc = 0x1D97F4u;
            goto label_1d97f4;
        }
    }
    ctx->pc = 0x1D97E4u;
    // 0x1d97e4: 0xc0766a4  jal         func_1D9A90
    ctx->pc = 0x1D97E4u;
    SET_GPR_U32(ctx, 31, 0x1D97ECu);
    ctx->pc = 0x1D9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A90u, 0x1D97E4u, 0x1D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97ECu;
label_1d97ec:
    // 0x1d97ec: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D97ECu;
    {
        const bool branch_taken_0x1d97ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97ec) {
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D97F4u;
label_1d97f4:
    // 0x1d97f4: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d97f8: 0xae021a14  sw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
    // 0x1d97fc: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9800: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d9800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d9804: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 2));
    // 0x1d9808: 0x8e111a14  lw          $s1, 0x1A14($s0)
    ctx->pc = 0x1d9808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d980c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d9810: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d9810u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D9814u;
    {
        const bool branch_taken_0x1d9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9814) {
            ctx->pc = 0x1D9840u;
            goto label_1d9840;
        }
    }
    ctx->pc = 0x1D981Cu;
label_1d981c:
    // 0x1d981c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9820u;
    {
        const bool branch_taken_0x1d9820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9820) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D9828u;
    // 0x1d9828: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d982c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9834: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d9834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d9838:
    // 0x1d9838: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d9838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d983c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d983cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d9840:
    // 0x1d9840: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9848: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1d9848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d984c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D984Cu;
    {
        const bool branch_taken_0x1d984c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d984c) {
            ctx->pc = 0x1D981Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d981c;
        }
    }
    ctx->pc = 0x1D9854u;
    // 0x1d9854: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9858: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d985c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D985Cu;
    {
        const bool branch_taken_0x1d985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d985c) {
            ctx->pc = 0x1D9890u;
            goto label_1d9890;
        }
    }
    ctx->pc = 0x1D9864u;
    // 0x1d9864: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9868: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d986c: 0x2444fd60  addiu       $a0, $v0, -0x2A0
    ctx->pc = 0x1d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x1d9870: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9874: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d9878: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1D9878u;
    SET_GPR_U32(ctx, 31, 0x1D9880u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1D9880u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9880u) { return; }
    ctx->pc = 0x1D9880u;
label_1d9880:
    // 0x1d9880: 0xc0766f4  jal         func_1D9BD0
    ctx->pc = 0x1D9880u;
    SET_GPR_U32(ctx, 31, 0x1D9888u);
    ctx->pc = 0x1D9BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BD0u, 0x1D9880u, 0x1D9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9888u;
label_1d9888:
    // 0x1d9888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9888u;
    {
        const bool branch_taken_0x1d9888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9888) {
            ctx->pc = 0x1D9898u;
            goto label_1d9898;
        }
    }
    ctx->pc = 0x1D9890u;
label_1d9890:
    // 0x1d9890: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D9890u;
    SET_GPR_U32(ctx, 31, 0x1D9898u);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D9890u, 0x1D9898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9898u;
label_1d9898:
    // 0x1d9898: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d989c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d98a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D98A0u;
    {
        const bool branch_taken_0x1d98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d98a0) {
            ctx->pc = 0x1D98D4u;
            goto label_1d98d4;
        }
    }
    ctx->pc = 0x1D98A8u;
    // 0x1d98a8: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d98acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d98b0: 0x2444fce0  addiu       $a0, $v0, -0x320
    ctx->pc = 0x1d98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x1d98b4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d98b8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d98b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d98bc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1D98BCu;
    SET_GPR_U32(ctx, 31, 0x1D98C4u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1D98C4u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D98C4u) { return; }
    ctx->pc = 0x1D98C4u;
label_1d98c4:
    // 0x1d98c4: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x1D98C4u;
    SET_GPR_U32(ctx, 31, 0x1D98CCu);
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x1D98C4u, 0x1D98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98CCu;
label_1d98cc:
    // 0x1d98cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D98CCu;
    {
        const bool branch_taken_0x1d98cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d98cc) {
            ctx->pc = 0x1D98DCu;
            goto label_1d98dc;
        }
    }
    ctx->pc = 0x1D98D4u;
label_1d98d4:
    // 0x1d98d4: 0xc076708  jal         func_1D9C20
    ctx->pc = 0x1D98D4u;
    SET_GPR_U32(ctx, 31, 0x1D98DCu);
    ctx->pc = 0x1D9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C20u, 0x1D98D4u, 0x1D98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98DCu;
label_1d98dc:
    // 0x1d98dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d98e0: 0x24530b10  addiu       $s3, $v0, 0xB10
    ctx->pc = 0x1d98e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x1d98e4: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98e8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d98ec: 0xc0656a8  jal         func_195AA0
    ctx->pc = 0x1D98ECu;
    SET_GPR_U32(ctx, 31, 0x1D98F4u);
    ctx->pc = 0x195AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AA0u, 0x1D98ECu, 0x1D98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98F4u;
label_1d98f4:
    // 0x1d98f4: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98f8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d98fc: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x1d98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x1d9900: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9904: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d9908: 0xae6201ec  sw          $v0, 0x1EC($s3)
    ctx->pc = 0x1d9908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 2));
    // 0x1d990c: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9910: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d9914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9914u;
    {
        const bool branch_taken_0x1d9914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9914) {
            ctx->pc = 0x1D9928u;
            goto label_1d9928;
        }
    }
    ctx->pc = 0x1D991Cu;
    // 0x1d991c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1d991cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1d9920: 0xc079304  jal         func_1E4C10
    ctx->pc = 0x1D9920u;
    SET_GPR_U32(ctx, 31, 0x1D9928u);
    ctx->pc = 0x1E4C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4C10u, 0x1D9920u, 0x1D9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9928u;
label_1d9928:
    // 0x1d9928: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d992c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d9930: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1d9930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
    // 0x1d9934: 0xa6600096  sh          $zero, 0x96($s3)
    ctx->pc = 0x1d9934u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d993c: 0x0  nop
    ctx->pc = 0x1d993cu;
    // NOP
    // 0x1d9940: 0xe6600090  swc1        $f0, 0x90($s3)
    ctx->pc = 0x1d9940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    // 0x1d9944: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9948: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d994c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9950: 0xac22fdf8  sw          $v0, -0x208($at)
    ctx->pc = 0x1d9950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFDF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDF8u, _value); } while (0);
    // 0x1d9954: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9958: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d995c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9960: 0xac220df0  sw          $v0, 0xDF0($at)
    ctx->pc = 0x1d9960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF0u, _value); } while (0);
    // 0x1d9964: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9968: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d996c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9970: 0xac220df4  sw          $v0, 0xDF4($at)
    ctx->pc = 0x1d9970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF4u, _value); } while (0);
    // 0x1d9974: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d9978: 0x24420dfc  addiu       $v0, $v0, 0xDFC
    ctx->pc = 0x1d9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3580));
    // 0x1d997c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d997cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9980: 0xac220df8  sw          $v0, 0xDF8($at)
    ctx->pc = 0x1d9980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DF8u, _value); } while (0);
    // 0x1d9984: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d998c: 0xac220dfc  sw          $v0, 0xDFC($at)
    ctx->pc = 0x1d998cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0DFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0DFCu, _value); } while (0);
    // 0x1d9990: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9994: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d9998: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d999c: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x1d99a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d99a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d99a4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1d99a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d99a8: 0xc05e858  jal         func_17A160
    ctx->pc = 0x1D99A8u;
    SET_GPR_U32(ctx, 31, 0x1D99B0u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x1D99A8u, 0x1D99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99B0u;
label_1d99b0:
    // 0x1d99b0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d99b4: 0xc05e964  jal         func_17A590
    ctx->pc = 0x1D99B4u;
    SET_GPR_U32(ctx, 31, 0x1D99BCu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x1D99B4u, 0x1D99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99BCu;
label_1d99bc:
    // 0x1d99bc: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99c0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d99c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D99C4u;
    {
        const bool branch_taken_0x1d99c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99c4) {
            ctx->pc = 0x1D99DCu;
            goto label_1d99dc;
        }
    }
    ctx->pc = 0x1D99CCu;
    // 0x1d99cc: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99d0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d99d4: 0xc05d6cc  jal         func_175B30
    ctx->pc = 0x1D99D4u;
    SET_GPR_U32(ctx, 31, 0x1D99DCu);
    ctx->pc = 0x175B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175B30u, 0x1D99D4u, 0x1D99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99DCu;
label_1d99dc:
    // 0x1d99dc: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d99e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d99e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D99E4u;
    {
        const bool branch_taken_0x1d99e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99e4) {
            ctx->pc = 0x1D99F4u;
            goto label_1d99f4;
        }
    }
    ctx->pc = 0x1D99ECu;
    // 0x1d99ec: 0xc0ddf70  jal         func_377DC0
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x377DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377DC0u, 0x1D99ECu, 0x1D99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99F4u;
label_1d99f4:
    // 0x1d99f4: 0xa2000d84  sb          $zero, 0xD84($s0)
    ctx->pc = 0x1d99f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d99f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d99fc: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9a00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9a04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9a08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9A08u;
    {
        const bool branch_taken_0x1d9a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a08) {
            ctx->pc = 0x1D9A18u;
            goto label_1d9a18;
        }
    }
    ctx->pc = 0x1D9A10u;
    // 0x1d9a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9a14: 0xa2030d84  sb          $v1, 0xD84($s0)
    ctx->pc = 0x1d9a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 3));
label_1d9a18:
    // 0x1d9a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9a1c: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9a20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1d9a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9a28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9A28u;
    {
        const bool branch_taken_0x1d9a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a28) {
            ctx->pc = 0x1D9A3Cu;
            goto label_1d9a3c;
        }
    }
    ctx->pc = 0x1D9A30u;
    // 0x1d9a30: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x1d9a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x1d9a34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1d9a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1d9a38: 0xa2030d84  sb          $v1, 0xD84($s0)
    ctx->pc = 0x1d9a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 3));
label_1d9a3c:
    // 0x1d9a3c: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x1d9a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x1d9a40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9A40u;
    {
        const bool branch_taken_0x1d9a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a40) {
            ctx->pc = 0x1D9A58u;
            goto label_1d9a58;
        }
    }
    ctx->pc = 0x1D9A48u;
    // 0x1d9a48: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9a4c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d9a50: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a54: 0xe6000d80  swc1        $f0, 0xD80($s0)
    ctx->pc = 0x1d9a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
label_1d9a58:
    // 0x1d9a58: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1d9a58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9a5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d9a5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d9a60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d9a60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9a64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d9a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9a68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d9a68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d9a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a78: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d9a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A84u;
}
