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

// Function: entry_0011127c
// Address: 0x11127c - 0x1113a8
void entry_0011127c_0x11127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011127c_0x11127c");
#endif

    switch (ctx->pc) {
        case 0x111288u: goto label_111288;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112f4u: goto label_1112f4;
        case 0x111300u: goto label_111300;
        case 0x11130cu: goto label_11130c;
        case 0x11131cu: goto label_11131c;
        case 0x111350u: goto label_111350;
        case 0x111360u: goto label_111360;
        case 0x111374u: goto label_111374;
        case 0x111384u: goto label_111384;
        case 0x111390u: goto label_111390;
        case 0x11139cu: goto label_11139c;
        default: break;
    }

    ctx->pc = 0x11127cu;

    // 0x11127c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111280: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111280u;
    SET_GPR_U32(ctx, 31, 0x111288u);
    ctx->pc = 0x111284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111280u;
    // 0x111284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111280u, 0x111288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111288u;
label_111288:
    // 0x111288: 0x10bd03  sra         $s7, $s0, 20
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    // 0x11128c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11128cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x111290: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111294: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x111294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x111298: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x111298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11129c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1112a0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1112a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1112a4: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1112A4u;
    {
        const bool branch_taken_0x1112a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1112a4) {
            ctx->pc = 0x1112A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112A4u;
            // 0x1112a8: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113B8u;
            return;
        }
    }
    ctx->pc = 0x1112ACu;
    // 0x1112ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1112b0: 0xdc25d298  ld          $a1, -0x2D68($at)
    ctx->pc = 0x1112b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD298u));
    // 0x1112b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1112b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112b8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1112B8u;
    SET_GPR_U32(ctx, 31, 0x1112C0u);
    ctx->pc = 0x1112BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112B8u;
    // 0x1112bc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1112B8u, 0x1112C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112C0u;
label_1112c0:
    // 0x1112c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1112c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1112c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112C8u;
    SET_GPR_U32(ctx, 31, 0x1112D0u);
    ctx->pc = 0x1112CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112C8u;
    // 0x1112cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112C8u, 0x1112D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112D0u;
label_1112d0:
    // 0x1112d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1112d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1112d4: 0xdc25d2a0  ld          $a1, -0x2D60($at)
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2A0u));
    // 0x1112d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1112e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ec: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112ECu;
    SET_GPR_U32(ctx, 31, 0x1112F4u);
    ctx->pc = 0x1112F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112ECu;
    // 0x1112f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112ECu, 0x1112F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1112f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112f8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112F8u;
    SET_GPR_U32(ctx, 31, 0x111300u);
    ctx->pc = 0x1112FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112F8u;
    // 0x1112fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112F8u, 0x111300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111300u;
label_111300:
    // 0x111300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111304: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111304u;
    SET_GPR_U32(ctx, 31, 0x11130Cu);
    ctx->pc = 0x111308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111304u;
    // 0x111308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111304u, 0x11130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11130Cu;
label_11130c:
    // 0x11130c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111314: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111314u;
    SET_GPR_U32(ctx, 31, 0x11131Cu);
    ctx->pc = 0x111318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111314u;
    // 0x111318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111314u, 0x11131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11131Cu;
label_11131c:
    // 0x11131c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11131cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x111320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111324: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x111328: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x111328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11132c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11132cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x111330: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x111334: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x111334u;
    {
        const bool branch_taken_0x111334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111334) {
            ctx->pc = 0x111338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111334u;
            // 0x111338: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113B8u;
            return;
        }
    }
    ctx->pc = 0x11133Cu;
    // 0x11133c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111340: 0xdc25d2a8  ld          $a1, -0x2D58($at)
    ctx->pc = 0x111340u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2A8u));
    // 0x111344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111348: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111348u;
    SET_GPR_U32(ctx, 31, 0x111350u);
    ctx->pc = 0x11134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111348u;
    // 0x11134c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111348u, 0x111350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111350u;
label_111350:
    // 0x111350: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111358: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111358u;
    SET_GPR_U32(ctx, 31, 0x111360u);
    ctx->pc = 0x11135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111358u;
    // 0x11135c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111358u, 0x111360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111360u;
label_111360:
    // 0x111360: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111364: 0xdc25d2b0  ld          $a1, -0x2D50($at)
    ctx->pc = 0x111364u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2B0u));
    // 0x111368: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11136c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11136Cu;
    SET_GPR_U32(ctx, 31, 0x111374u);
    ctx->pc = 0x111370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11136Cu;
    // 0x111370: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11136Cu, 0x111374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111374u;
label_111374:
    // 0x111374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11137c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11137Cu;
    SET_GPR_U32(ctx, 31, 0x111384u);
    ctx->pc = 0x111380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11137Cu;
    // 0x111380: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11137Cu, 0x111384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111384u;
label_111384:
    // 0x111384: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111388: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111388u;
    SET_GPR_U32(ctx, 31, 0x111390u);
    ctx->pc = 0x11138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111388u;
    // 0x11138c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111388u, 0x111390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111390u;
label_111390:
    // 0x111390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111394: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111394u;
    SET_GPR_U32(ctx, 31, 0x11139Cu);
    ctx->pc = 0x111398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111394u;
    // 0x111398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111394u, 0x11139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11139Cu;
label_11139c:
    // 0x11139c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11139cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a4: 0x0  nop
    ctx->pc = 0x1113a4u;
    // NOP
    ctx->pc = 0x1113a8u;
}
