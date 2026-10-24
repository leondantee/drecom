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

// Function: __kernel_cos
// Address: 0x112830 - 0x112a7c
void ps2___kernel_cos_0x112830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_cos_0x112830");
#endif

    switch (ctx->pc) {
        case 0x112888u: goto label_112888;
        case 0x1128acu: goto label_1128ac;
        case 0x1128c0u: goto label_1128c0;
        case 0x1128d0u: goto label_1128d0;
        case 0x1128dcu: goto label_1128dc;
        case 0x1128ecu: goto label_1128ec;
        case 0x1128f8u: goto label_1128f8;
        case 0x112908u: goto label_112908;
        case 0x112914u: goto label_112914;
        case 0x112924u: goto label_112924;
        case 0x112930u: goto label_112930;
        case 0x112940u: goto label_112940;
        case 0x11294cu: goto label_11294c;
        case 0x112974u: goto label_112974;
        case 0x112984u: goto label_112984;
        case 0x112994u: goto label_112994;
        case 0x1129a0u: goto label_1129a0;
        case 0x1129acu: goto label_1129ac;
        case 0x1129f0u: goto label_1129f0;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a10u: goto label_112a10;
        case 0x112a20u: goto label_112a20;
        case 0x112a30u: goto label_112a30;
        case 0x112a3cu: goto label_112a3c;
        case 0x112a48u: goto label_112a48;
        case 0x112a54u: goto label_112a54;
        default: break;
    }

    ctx->pc = 0x112830u;

    // 0x112830: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x112830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x112834: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x112834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x112838: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x112838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11283c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x112840: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x112840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112844: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x112844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x112848: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x112848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11284c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x112850: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x112850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x112854: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x112854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x112858: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x112858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11285c: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x11285cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x112860: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x112864: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x112864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x112868: 0x3c023e3f  lui         $v0, 0x3E3F
    ctx->pc = 0x112868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15935 << 16));
    // 0x11286c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x11286cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x112870: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x112870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112874: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x112874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x112878: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112878u;
    {
        const bool branch_taken_0x112878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112878u;
        // 0x11287c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112878) {
            ctx->pc = 0x1128A0u;
            goto label_1128a0;
        }
    }
    ctx->pc = 0x112880u;
    // 0x112880: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x112880u;
    SET_GPR_U32(ctx, 31, 0x112888u);
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x112880u, 0x112888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112888u;
label_112888:
    // 0x112888: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112888u;
    {
        const bool branch_taken_0x112888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112888u;
        // 0x11288c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112888) {
            ctx->pc = 0x1128A4u;
            goto label_1128a4;
        }
    }
    ctx->pc = 0x112890u;
    // 0x112890: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x112890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x112894: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x112898: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x112898u;
    {
        const bool branch_taken_0x112898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112898u;
        // 0x11289c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112898) {
            ctx->pc = 0x112A58u;
            goto label_112a58;
        }
    }
    ctx->pc = 0x1128A0u;
label_1128a0:
    // 0x1128a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1128a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1128a4:
    // 0x1128a4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1128A4u;
    SET_GPR_U32(ctx, 31, 0x1128ACu);
    ctx->pc = 0x1128A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128A4u;
    // 0x1128a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1128A4u, 0x1128ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ACu;
label_1128ac:
    // 0x1128ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1128acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1128b4: 0xdc25d6d0  ld          $a1, -0x2930($at)
    ctx->pc = 0x1128b4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6D0u));
    // 0x1128b8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1128B8u;
    SET_GPR_U32(ctx, 31, 0x1128C0u);
    ctx->pc = 0x1128BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128B8u;
    // 0x1128bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1128B8u, 0x1128C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128C0u;
label_1128c0:
    // 0x1128c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1128c4: 0xdc25d6d8  ld          $a1, -0x2928($at)
    ctx->pc = 0x1128c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6D8u));
    // 0x1128c8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1128C8u;
    SET_GPR_U32(ctx, 31, 0x1128D0u);
    ctx->pc = 0x1128CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128C8u;
    // 0x1128cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1128C8u, 0x1128D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128D0u;
label_1128d0:
    // 0x1128d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1128d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128d4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1128D4u;
    SET_GPR_U32(ctx, 31, 0x1128DCu);
    ctx->pc = 0x1128D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128D4u;
    // 0x1128d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1128D4u, 0x1128DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128DCu;
label_1128dc:
    // 0x1128dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1128dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1128e0: 0xdc25d6e0  ld          $a1, -0x2920($at)
    ctx->pc = 0x1128e0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6E0u));
    // 0x1128e4: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1128E4u;
    SET_GPR_U32(ctx, 31, 0x1128ECu);
    ctx->pc = 0x1128E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128E4u;
    // 0x1128e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1128E4u, 0x1128ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ECu;
label_1128ec:
    // 0x1128ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1128ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128f0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1128F0u;
    SET_GPR_U32(ctx, 31, 0x1128F8u);
    ctx->pc = 0x1128F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128F0u;
    // 0x1128f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1128F0u, 0x1128F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128F8u;
label_1128f8:
    // 0x1128f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1128fc: 0xdc25d6e8  ld          $a1, -0x2918($at)
    ctx->pc = 0x1128fcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6E8u));
    // 0x112900: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112900u;
    SET_GPR_U32(ctx, 31, 0x112908u);
    ctx->pc = 0x112904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112900u;
    // 0x112904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112900u, 0x112908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112908u;
label_112908:
    // 0x112908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11290c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11290Cu;
    SET_GPR_U32(ctx, 31, 0x112914u);
    ctx->pc = 0x112910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11290Cu;
    // 0x112910: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11290Cu, 0x112914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112914u;
label_112914:
    // 0x112914: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x112914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x112918: 0xdc25d6f0  ld          $a1, -0x2910($at)
    ctx->pc = 0x112918u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6F0u));
    // 0x11291c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11291Cu;
    SET_GPR_U32(ctx, 31, 0x112924u);
    ctx->pc = 0x112920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11291Cu;
    // 0x112920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11291Cu, 0x112924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112924u;
label_112924:
    // 0x112924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112928: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112928u;
    SET_GPR_U32(ctx, 31, 0x112930u);
    ctx->pc = 0x11292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112928u;
    // 0x11292c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112928u, 0x112930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112930u;
label_112930:
    // 0x112930: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x112934: 0xdc25d6f8  ld          $a1, -0x2908($at)
    ctx->pc = 0x112934u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD6F8u));
    // 0x112938: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x112938u;
    SET_GPR_U32(ctx, 31, 0x112940u);
    ctx->pc = 0x11293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112938u;
    // 0x11293c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x112938u, 0x112940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112940u;
label_112940:
    // 0x112940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112944: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112944u;
    SET_GPR_U32(ctx, 31, 0x11294Cu);
    ctx->pc = 0x112948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112944u;
    // 0x112948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112944u, 0x11294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11294Cu;
label_11294c:
    // 0x11294c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11294cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112950: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x112954: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x112954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x112958: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x112958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11295c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11295Cu;
    {
        const bool branch_taken_0x11295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11295Cu;
        // 0x112960: 0x3c023fe9  lui         $v0, 0x3FE9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11295c) {
            ctx->pc = 0x1129BCu;
            goto label_1129bc;
        }
    }
    ctx->pc = 0x112964u;
    // 0x112964: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x112964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x112968: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x112968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11296c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11296Cu;
    SET_GPR_U32(ctx, 31, 0x112974u);
    ctx->pc = 0x112970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11296Cu;
    // 0x112970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11296Cu, 0x112974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112974u;
label_112974:
    // 0x112974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11297c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11297Cu;
    SET_GPR_U32(ctx, 31, 0x112984u);
    ctx->pc = 0x112980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11297Cu;
    // 0x112980: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11297Cu, 0x112984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112984u;
label_112984:
    // 0x112984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112988: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11298c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11298Cu;
    SET_GPR_U32(ctx, 31, 0x112994u);
    ctx->pc = 0x112990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11298Cu;
    // 0x112990: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11298Cu, 0x112994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112994u;
label_112994:
    // 0x112994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112998: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112998u;
    SET_GPR_U32(ctx, 31, 0x1129A0u);
    ctx->pc = 0x11299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112998u;
    // 0x11299c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112998u, 0x1129A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129A0u;
label_1129a0:
    // 0x1129a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1129a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1129A4u;
    SET_GPR_U32(ctx, 31, 0x1129ACu);
    ctx->pc = 0x1129A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129A4u;
    // 0x1129a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1129A4u, 0x1129ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129ACu;
label_1129ac:
    // 0x1129ac: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1129acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1129b0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1129b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1129b4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1129B4u;
    {
        const bool branch_taken_0x1129b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129b4) {
            ctx->pc = 0x112A4Cu;
            goto label_112a4c;
        }
    }
    ctx->pc = 0x1129BCu;
label_1129bc:
    // 0x1129bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1129bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1129c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129C0u;
    {
        const bool branch_taken_0x1129c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C0u;
        // 0x1129c4: 0x3c02ffe0  lui         $v0, 0xFFE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65504 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c0) {
            ctx->pc = 0x1129D8u;
            goto label_1129d8;
        }
    }
    ctx->pc = 0x1129C8u;
    // 0x1129c8: 0x3411ff48  ori         $s1, $zero, 0xFF48
    ctx->pc = 0x1129c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65352);
    // 0x1129cc: 0x118bbc  dsll32      $s1, $s1, 14
    ctx->pc = 0x1129ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 14));
    // 0x1129d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1129D0u;
    {
        const bool branch_taken_0x1129d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129d0) {
            ctx->pc = 0x1129E0u;
            goto label_1129e0;
        }
    }
    ctx->pc = 0x1129D8u;
label_1129d8:
    // 0x1129d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1129d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1129dc: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1129dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_1129e0:
    // 0x1129e0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1129e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1129e4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1129e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1129e8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1129E8u;
    SET_GPR_U32(ctx, 31, 0x1129F0u);
    ctx->pc = 0x1129ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129E8u;
    // 0x1129ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1129E8u, 0x1129F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129F0u;
label_1129f0:
    // 0x1129f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1129f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1129f4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1129F4u;
    SET_GPR_U32(ctx, 31, 0x1129FCu);
    ctx->pc = 0x1129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129F4u;
    // 0x1129f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1129F4u, 0x1129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129FCu;
label_1129fc:
    // 0x1129fc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1129fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x112a00: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x112a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x112a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a08: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A08u;
    SET_GPR_U32(ctx, 31, 0x112A10u);
    ctx->pc = 0x112A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A08u;
    // 0x112a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A08u, 0x112A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A10u;
label_112a10:
    // 0x112a10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a18: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112A18u;
    SET_GPR_U32(ctx, 31, 0x112A20u);
    ctx->pc = 0x112A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A18u;
    // 0x112a1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112A18u, 0x112A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A20u;
label_112a20:
    // 0x112a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x112a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a28: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x112A28u;
    SET_GPR_U32(ctx, 31, 0x112A30u);
    ctx->pc = 0x112A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A28u;
    // 0x112a2c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x112A28u, 0x112A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A30u;
label_112a30:
    // 0x112a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a34: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A34u;
    SET_GPR_U32(ctx, 31, 0x112A3Cu);
    ctx->pc = 0x112A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A34u;
    // 0x112a38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A34u, 0x112A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A3Cu;
label_112a3c:
    // 0x112a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a40: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A40u;
    SET_GPR_U32(ctx, 31, 0x112A48u);
    ctx->pc = 0x112A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A40u;
    // 0x112a44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A40u, 0x112A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A48u;
label_112a48:
    // 0x112a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_112a4c:
    // 0x112a4c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112A4Cu;
    SET_GPR_U32(ctx, 31, 0x112A54u);
    ctx->pc = 0x112A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A4Cu;
    // 0x112a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112A4Cu, 0x112A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A54u;
label_112a54:
    // 0x112a54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x112a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_112a58:
    // 0x112a58: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x112a58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112a5c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x112a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112a60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x112a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112a64: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x112a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112a68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112a6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x112a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112a70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112a74: 0x3e00008  jr          $ra
    ctx->pc = 0x112A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A74u;
        // 0x112a78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A7Cu;
}
