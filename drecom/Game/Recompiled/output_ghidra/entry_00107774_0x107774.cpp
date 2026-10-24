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

// Function: entry_00107774
// Address: 0x107774 - 0x107810
void entry_00107774_0x107774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107774_0x107774");
#endif

    switch (ctx->pc) {
        case 0x107794u: goto label_107794;
        case 0x1077a8u: goto label_1077a8;
        case 0x1077b4u: goto label_1077b4;
        case 0x1077c0u: goto label_1077c0;
        case 0x1077ccu: goto label_1077cc;
        case 0x1077fcu: goto label_1077fc;
        default: break;
    }

    ctx->pc = 0x107774u;

    // 0x107774: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107774u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10777c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10777cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107780: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x107780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x107784: 0x8c433bf4  lw          $v1, 0x3BF4($v0)
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15348)));
    // 0x107788: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10778c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10778Cu;
    SET_GPR_U32(ctx, 31, 0x107794u);
    ctx->pc = 0x107790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10778Cu;
    // 0x107790: 0x8c730040  lw          $s3, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10778Cu, 0x107794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107794u;
label_107794:
    // 0x107794: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107798: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x107798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10779c: 0xae023d98  sw          $v0, 0x3D98($s0)
    ctx->pc = 0x10779cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D98u, _value); } while (0);
    // 0x1077a0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1077A0u;
    SET_GPR_U32(ctx, 31, 0x1077A8u);
    ctx->pc = 0x1077A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077A0u;
    // 0x1077a4: 0x26103d98  addiu       $s0, $s0, 0x3D98 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1077A0u, 0x1077A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077A8u;
label_1077a8:
    // 0x1077a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1077a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1077ac: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1077ACu;
    SET_GPR_U32(ctx, 31, 0x1077B4u);
    ctx->pc = 0x1077B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077ACu;
    // 0x1077b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1077ACu, 0x1077B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077B4u;
label_1077b4:
    // 0x1077b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1077b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1077b8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1077B8u;
    SET_GPR_U32(ctx, 31, 0x1077C0u);
    ctx->pc = 0x1077BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077B8u;
    // 0x1077bc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1077B8u, 0x1077C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077C0u;
label_1077c0:
    // 0x1077c0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1077c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1077c4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1077C4u;
    SET_GPR_U32(ctx, 31, 0x1077CCu);
    ctx->pc = 0x1077C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077C4u;
    // 0x1077c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1077C4u, 0x1077CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077CCu;
label_1077cc:
    // 0x1077cc: 0xae223da8  sw          $v0, 0x3DA8($s1)
    ctx->pc = 0x1077ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15784), GPR_U32(ctx, 2));
    // 0x1077d0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1077d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1077d4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x1077d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x1077d8: 0x3c05fffc  lui         $a1, 0xFFFC
    ctx->pc = 0x1077d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65532 << 16));
    // 0x1077dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1077dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1077e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1077e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1077e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1077e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1077e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1077e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1077ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1077ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1077f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1077f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1077f4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1077F4u;
    SET_GPR_U32(ctx, 31, 0x1077FCu);
    ctx->pc = 0x1077F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077F4u;
    // 0x1077f8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1077F4u, 0x1077FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077FCu;
label_1077fc:
    // 0x1077fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1077fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107800: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x107800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x107804: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x107804u;
    {
        const bool branch_taken_0x107804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107804u;
        // 0x107808: 0xae433dac  sw          $v1, 0x3DAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107804) {
            ctx->pc = 0x107810u;
            return;
        }
    }
    ctx->pc = 0x10780Cu;
    // 0x10780c: 0xae6300d4  sw          $v1, 0xD4($s3)
    ctx->pc = 0x10780cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 3));
    ctx->pc = 0x107810u;
}
