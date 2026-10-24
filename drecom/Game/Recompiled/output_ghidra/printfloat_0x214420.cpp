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

// Function: printfloat
// Address: 0x214420 - 0x214588
void printfloat_0x214420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printfloat_0x214420");
#endif

    switch (ctx->pc) {
        case 0x214420u: goto label_214420;
        case 0x214424u: goto label_214424;
        case 0x214428u: goto label_214428;
        case 0x21442cu: goto label_21442c;
        case 0x214430u: goto label_214430;
        case 0x214434u: goto label_214434;
        case 0x214438u: goto label_214438;
        case 0x21443cu: goto label_21443c;
        case 0x214440u: goto label_214440;
        case 0x214444u: goto label_214444;
        case 0x214448u: goto label_214448;
        case 0x21444cu: goto label_21444c;
        case 0x214450u: goto label_214450;
        case 0x214454u: goto label_214454;
        case 0x214458u: goto label_214458;
        case 0x21445cu: goto label_21445c;
        case 0x214460u: goto label_214460;
        case 0x214464u: goto label_214464;
        case 0x214468u: goto label_214468;
        case 0x21446cu: goto label_21446c;
        case 0x214470u: goto label_214470;
        case 0x214474u: goto label_214474;
        case 0x214478u: goto label_214478;
        case 0x21447cu: goto label_21447c;
        case 0x214480u: goto label_214480;
        case 0x214484u: goto label_214484;
        case 0x214488u: goto label_214488;
        case 0x21448cu: goto label_21448c;
        case 0x214490u: goto label_214490;
        case 0x214494u: goto label_214494;
        case 0x214498u: goto label_214498;
        case 0x21449cu: goto label_21449c;
        case 0x2144a0u: goto label_2144a0;
        case 0x2144a4u: goto label_2144a4;
        case 0x2144a8u: goto label_2144a8;
        case 0x2144acu: goto label_2144ac;
        case 0x2144b0u: goto label_2144b0;
        case 0x2144b4u: goto label_2144b4;
        case 0x2144b8u: goto label_2144b8;
        case 0x2144bcu: goto label_2144bc;
        case 0x2144c0u: goto label_2144c0;
        case 0x2144c4u: goto label_2144c4;
        case 0x2144c8u: goto label_2144c8;
        case 0x2144ccu: goto label_2144cc;
        case 0x2144d0u: goto label_2144d0;
        case 0x2144d4u: goto label_2144d4;
        case 0x2144d8u: goto label_2144d8;
        case 0x2144dcu: goto label_2144dc;
        case 0x2144e0u: goto label_2144e0;
        case 0x2144e4u: goto label_2144e4;
        case 0x2144e8u: goto label_2144e8;
        case 0x2144ecu: goto label_2144ec;
        case 0x2144f0u: goto label_2144f0;
        case 0x2144f4u: goto label_2144f4;
        case 0x2144f8u: goto label_2144f8;
        case 0x2144fcu: goto label_2144fc;
        case 0x214500u: goto label_214500;
        case 0x214504u: goto label_214504;
        case 0x214508u: goto label_214508;
        case 0x21450cu: goto label_21450c;
        case 0x214510u: goto label_214510;
        case 0x214514u: goto label_214514;
        case 0x214518u: goto label_214518;
        case 0x21451cu: goto label_21451c;
        case 0x214520u: goto label_214520;
        case 0x214524u: goto label_214524;
        case 0x214528u: goto label_214528;
        case 0x21452cu: goto label_21452c;
        case 0x214530u: goto label_214530;
        case 0x214534u: goto label_214534;
        case 0x214538u: goto label_214538;
        case 0x21453cu: goto label_21453c;
        case 0x214540u: goto label_214540;
        case 0x214544u: goto label_214544;
        case 0x214548u: goto label_214548;
        case 0x21454cu: goto label_21454c;
        case 0x214550u: goto label_214550;
        case 0x214554u: goto label_214554;
        case 0x214558u: goto label_214558;
        case 0x21455cu: goto label_21455c;
        case 0x214560u: goto label_214560;
        case 0x214564u: goto label_214564;
        case 0x214568u: goto label_214568;
        case 0x21456cu: goto label_21456c;
        case 0x214570u: goto label_214570;
        case 0x214574u: goto label_214574;
        case 0x214578u: goto label_214578;
        case 0x21457cu: goto label_21457c;
        case 0x214580u: goto label_214580;
        case 0x214584u: goto label_214584;
        default: break;
    }

    ctx->pc = 0x214420u;

label_214420:
    // 0x214420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_214424:
    // 0x214424: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x214424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_214428:
    // 0x214428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21442c:
    // 0x21442c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214430:
    // 0x214430: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x214430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_214434:
    // 0x214434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_214438:
    // 0x214438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x214438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_21443c:
    // 0x21443c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214440:
    // 0x214440: 0xc047c3a  jal         func_11F0E8
label_214444:
    if (ctx->pc == 0x214444u) {
        ctx->pc = 0x214444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214440u;
        // 0x214444: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214448u;
        goto label_214448;
    }
    ctx->pc = 0x214440u;
    SET_GPR_U32(ctx, 31, 0x214448u);
    ctx->pc = 0x214444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214440u;
    // 0x214444: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x214440u, 0x214448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214448u;
label_214448:
    // 0x214448: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_21444c:
    if (ctx->pc == 0x21444Cu) {
        ctx->pc = 0x21444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214448u;
        // 0x21444c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214450u;
        goto label_214450;
    }
    ctx->pc = 0x214448u;
    {
        const bool branch_taken_0x214448 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214448u;
        // 0x21444c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214448) {
            ctx->pc = 0x21446Cu;
            goto label_21446c;
        }
    }
    ctx->pc = 0x214450u;
label_214450:
    // 0x214450: 0xc047ad6  jal         func_11EB58
label_214454:
    if (ctx->pc == 0x214454u) {
        ctx->pc = 0x214454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214450u;
        // 0x214454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214458u;
        goto label_214458;
    }
    ctx->pc = 0x214450u;
    SET_GPR_U32(ctx, 31, 0x214458u);
    ctx->pc = 0x214454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214450u;
    // 0x214454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x214450u, 0x214458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214458u;
label_214458:
    // 0x214458: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x214458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_21445c:
    // 0x21445c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21445cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214460:
    // 0x214460: 0x8c62aad4  lw          $v0, -0x552C($v1)
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945492)));
label_214464:
    // 0x214464: 0x40f809  jalr        $v0
label_214468:
    if (ctx->pc == 0x214468u) {
        ctx->pc = 0x214468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214464u;
        // 0x214468: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21446Cu;
        goto label_21446c;
    }
    ctx->pc = 0x214464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21446Cu);
        ctx->pc = 0x214468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214464u;
        // 0x214468: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214464u, 0x21446Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21446Cu;
label_21446c:
    // 0x21446c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_214470:
    // 0x214470: 0xdc250f58  ld          $a1, 0xF58($at)
    ctx->pc = 0x214470u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3928)));
label_214474:
    // 0x214474: 0xc047c3a  jal         func_11F0E8
label_214478:
    if (ctx->pc == 0x214478u) {
        ctx->pc = 0x214478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214474u;
        // 0x214478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21447Cu;
        goto label_21447c;
    }
    ctx->pc = 0x214474u;
    SET_GPR_U32(ctx, 31, 0x21447Cu);
    ctx->pc = 0x214478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214474u;
    // 0x214478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x214474u, 0x21447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21447Cu;
label_21447c:
    // 0x21447c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_214480:
    if (ctx->pc == 0x214480u) {
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214484u;
        goto label_214484;
    }
    ctx->pc = 0x21447Cu;
    {
        const bool branch_taken_0x21447c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21447c) {
            ctx->pc = 0x2144C4u;
            goto label_2144c4;
        }
    }
    ctx->pc = 0x214484u;
label_214484:
    // 0x214484: 0x10000007  b           . + 4 + (0x7 << 2)
label_214488:
    if (ctx->pc == 0x214488u) {
        ctx->pc = 0x21448Cu;
        goto label_21448c;
    }
    ctx->pc = 0x214484u;
    {
        const bool branch_taken_0x214484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214484) {
            ctx->pc = 0x2144A4u;
            goto label_2144a4;
        }
    }
    ctx->pc = 0x21448Cu;
label_21448c:
    // 0x21448c: 0x0  nop
    ctx->pc = 0x21448cu;
    // NOP
label_214490:
    // 0x214490: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x214490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_214494:
    // 0x214494: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x214494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_214498:
    // 0x214498: 0xc047af0  jal         func_11EBC0
label_21449c:
    if (ctx->pc == 0x21449Cu) {
        ctx->pc = 0x21449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214498u;
        // 0x21449c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144A0u;
        goto label_2144a0;
    }
    ctx->pc = 0x214498u;
    SET_GPR_U32(ctx, 31, 0x2144A0u);
    ctx->pc = 0x21449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214498u;
    // 0x21449c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x214498u, 0x2144A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144A0u;
label_2144a0:
    // 0x2144a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2144a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2144a4:
    // 0x2144a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2144a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_2144a8:
    // 0x2144a8: 0xdc250f60  ld          $a1, 0xF60($at)
    ctx->pc = 0x2144a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3936)));
label_2144ac:
    // 0x2144ac: 0xc047c3a  jal         func_11F0E8
label_2144b0:
    if (ctx->pc == 0x2144B0u) {
        ctx->pc = 0x2144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144ACu;
        // 0x2144b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144B4u;
        goto label_2144b4;
    }
    ctx->pc = 0x2144ACu;
    SET_GPR_U32(ctx, 31, 0x2144B4u);
    ctx->pc = 0x2144B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144ACu;
    // 0x2144b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x2144ACu, 0x2144B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144B4u;
label_2144b4:
    // 0x2144b4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_2144b8:
    if (ctx->pc == 0x2144B8u) {
        ctx->pc = 0x2144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144B4u;
        // 0x2144b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144BCu;
        goto label_2144bc;
    }
    ctx->pc = 0x2144B4u;
    {
        const bool branch_taken_0x2144b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144B4u;
        // 0x2144b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144b4) {
            ctx->pc = 0x214490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214490;
        }
    }
    ctx->pc = 0x2144BCu;
label_2144bc:
    // 0x2144bc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2144c0:
    if (ctx->pc == 0x2144C0u) {
        ctx->pc = 0x2144C4u;
        goto label_2144c4;
    }
    ctx->pc = 0x2144BCu;
    {
        const bool branch_taken_0x2144bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144bc) {
            ctx->pc = 0x214514u;
            goto label_214514;
        }
    }
    ctx->pc = 0x2144C4u;
label_2144c4:
    // 0x2144c4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2144c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_2144c8:
    // 0x2144c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2144c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2144cc:
    // 0x2144cc: 0xc047c3a  jal         func_11F0E8
label_2144d0:
    if (ctx->pc == 0x2144D0u) {
        ctx->pc = 0x2144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144CCu;
        // 0x2144d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144D4u;
        goto label_2144d4;
    }
    ctx->pc = 0x2144CCu;
    SET_GPR_U32(ctx, 31, 0x2144D4u);
    ctx->pc = 0x2144D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144CCu;
    // 0x2144d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x2144CCu, 0x2144D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144D4u;
label_2144d4:
    // 0x2144d4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_2144d8:
    if (ctx->pc == 0x2144D8u) {
        ctx->pc = 0x2144D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144D4u;
        // 0x2144d8: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144DCu;
        goto label_2144dc;
    }
    ctx->pc = 0x2144D4u;
    {
        const bool branch_taken_0x2144d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2144D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144D4u;
        // 0x2144d8: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144d4) {
            ctx->pc = 0x214514u;
            goto label_214514;
        }
    }
    ctx->pc = 0x2144DCu;
label_2144dc:
    // 0x2144dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2144e0:
    if (ctx->pc == 0x2144E0u) {
        ctx->pc = 0x2144E4u;
        goto label_2144e4;
    }
    ctx->pc = 0x2144DCu;
    {
        const bool branch_taken_0x2144dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144dc) {
            ctx->pc = 0x2144FCu;
            goto label_2144fc;
        }
    }
    ctx->pc = 0x2144E4u;
label_2144e4:
    // 0x2144e4: 0x0  nop
    ctx->pc = 0x2144e4u;
    // NOP
label_2144e8:
    // 0x2144e8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x2144e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_2144ec:
    // 0x2144ec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2144ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2144f0:
    // 0x2144f0: 0xc047b9a  jal         func_11EE68
label_2144f4:
    if (ctx->pc == 0x2144F4u) {
        ctx->pc = 0x2144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144F0u;
        // 0x2144f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2144F8u;
        goto label_2144f8;
    }
    ctx->pc = 0x2144F0u;
    SET_GPR_U32(ctx, 31, 0x2144F8u);
    ctx->pc = 0x2144F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144F0u;
    // 0x2144f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2144F0u, 0x2144F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144F8u;
label_2144f8:
    // 0x2144f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2144f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2144fc:
    // 0x2144fc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x2144fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_214500:
    // 0x214500: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_214504:
    // 0x214504: 0xc047c3a  jal         func_11F0E8
label_214508:
    if (ctx->pc == 0x214508u) {
        ctx->pc = 0x214508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214504u;
        // 0x214508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21450Cu;
        goto label_21450c;
    }
    ctx->pc = 0x214504u;
    SET_GPR_U32(ctx, 31, 0x21450Cu);
    ctx->pc = 0x214508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214504u;
    // 0x214508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x214504u, 0x21450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21450Cu;
label_21450c:
    // 0x21450c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_214510:
    if (ctx->pc == 0x214510u) {
        ctx->pc = 0x214510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21450Cu;
        // 0x214510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214514u;
        goto label_214514;
    }
    ctx->pc = 0x21450Cu;
    {
        const bool branch_taken_0x21450c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21450Cu;
        // 0x214510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21450c) {
            ctx->pc = 0x2144E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2144e8;
        }
    }
    ctx->pc = 0x214514u;
label_214514:
    // 0x214514: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
label_214518:
    // 0x214518: 0xdc250f68  ld          $a1, 0xF68($at)
    ctx->pc = 0x214518u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 3944)));
label_21451c:
    // 0x21451c: 0xc047af0  jal         func_11EBC0
label_214520:
    if (ctx->pc == 0x214520u) {
        ctx->pc = 0x214520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21451Cu;
        // 0x214520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214524u;
        goto label_214524;
    }
    ctx->pc = 0x21451Cu;
    SET_GPR_U32(ctx, 31, 0x214524u);
    ctx->pc = 0x214520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21451Cu;
    // 0x214520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21451Cu, 0x214524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214524u;
label_214524:
    // 0x214524: 0xc0474e4  jal         func_11D390
label_214528:
    if (ctx->pc == 0x214528u) {
        ctx->pc = 0x214528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214524u;
        // 0x214528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21452Cu;
        goto label_21452c;
    }
    ctx->pc = 0x214524u;
    SET_GPR_U32(ctx, 31, 0x21452Cu);
    ctx->pc = 0x214528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214524u;
    // 0x214528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D390u, 0x214524u, 0x21452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21452Cu;
label_21452c:
    // 0x21452c: 0xc0850b2  jal         func_2142C8
label_214530:
    if (ctx->pc == 0x214530u) {
        ctx->pc = 0x214530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21452Cu;
        // 0x214530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214534u;
        goto label_214534;
    }
    ctx->pc = 0x21452Cu;
    SET_GPR_U32(ctx, 31, 0x214534u);
    ctx->pc = 0x214530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21452Cu;
    // 0x214530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2142C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2142C8u, 0x21452Cu, 0x214534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214534u;
label_214534:
    // 0x214534: 0x26440f40  addiu       $a0, $s2, 0xF40
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_214538:
    // 0x214538: 0xc0852d4  jal         func_214B50
label_21453c:
    if (ctx->pc == 0x21453Cu) {
        ctx->pc = 0x21453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214538u;
        // 0x21453c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214540u;
        goto label_214540;
    }
    ctx->pc = 0x214538u;
    SET_GPR_U32(ctx, 31, 0x214540u);
    ctx->pc = 0x21453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214538u;
    // 0x21453c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x214538u, 0x214540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214540u;
label_214540:
    // 0x214540: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_214544:
    if (ctx->pc == 0x214544u) {
        ctx->pc = 0x214544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214540u;
        // 0x214544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214548u;
        goto label_214548;
    }
    ctx->pc = 0x214540u;
    {
        const bool branch_taken_0x214540 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x214544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214540u;
        // 0x214544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214540) {
            ctx->pc = 0x214568u;
            goto label_214568;
        }
    }
    ctx->pc = 0x214548u;
label_214548:
    // 0x214548: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x214548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_21454c:
    // 0x21454c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_214550:
    // 0x214550: 0x24840f48  addiu       $a0, $a0, 0xF48
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3912));
label_214554:
    // 0x214554: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_214558:
    // 0x214558: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21455c:
    // 0x21455c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21455cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214560:
    // 0x214560: 0x80852d4  j           func_214B50
label_214564:
    if (ctx->pc == 0x214564u) {
        ctx->pc = 0x214564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214560u;
        // 0x214564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214568u;
        goto label_214568;
    }
    ctx->pc = 0x214560u;
    ctx->pc = 0x214564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214560u;
    // 0x214564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    kprintf_0x214b50(rdram, ctx, runtime); return;
    ctx->pc = 0x214568u;
label_214568:
    // 0x214568: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_21456c:
    // 0x21456c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_214570:
    // 0x214570: 0x24840f50  addiu       $a0, $a0, 0xF50
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3920));
label_214574:
    // 0x214574: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_214578:
    // 0x214578: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21457c:
    // 0x21457c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214580:
    // 0x214580: 0x80852d4  j           func_214B50
label_214584:
    if (ctx->pc == 0x214584u) {
        ctx->pc = 0x214584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214580u;
        // 0x214584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214588u;
        goto label_fallthrough_0x214580;
    }
    ctx->pc = 0x214580u;
    ctx->pc = 0x214584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214580u;
    // 0x214584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    kprintf_0x214b50(rdram, ctx, runtime); return;
label_fallthrough_0x214580:
    ctx->pc = 0x214588u;
}
