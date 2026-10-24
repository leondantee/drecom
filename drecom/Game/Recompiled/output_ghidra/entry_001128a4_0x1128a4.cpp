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

// Function: entry_001128a4
// Address: 0x1128a4 - 0x1129bc
void entry_001128a4_0x1128a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128a4_0x1128a4");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x1128a4u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1129BCu;
}
