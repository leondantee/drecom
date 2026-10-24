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

// Function: _b2d
// Address: 0x119910 - 0x119a8c
void _b2d_0x119910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_b2d_0x119910");
#endif

    switch (ctx->pc) {
        case 0x119950u: goto label_119950;
        default: break;
    }

    ctx->pc = 0x119910u;

    // 0x119910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x119910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x119914: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x119914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x119918: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x119918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11991c: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x11991cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x119920: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119924: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x119924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119928: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11992c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x119930: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119934: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x119934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x119938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11993c: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x119940: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x119944: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119948: 0xc046416  jal         func_119058
    ctx->pc = 0x119948u;
    SET_GPR_U32(ctx, 31, 0x119950u);
    ctx->pc = 0x11994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119948u;
    // 0x11994c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119058u, 0x119948u, 0x119950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119950u;
label_119950:
    // 0x119950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119954: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x119954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x119958: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x11995c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x11995cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119960: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x119960u;
    {
        const bool branch_taken_0x119960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119960u;
        // 0x119964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119960) {
            ctx->pc = 0x1199CCu;
            goto label_1199cc;
        }
    }
    ctx->pc = 0x119968u;
    // 0x119968: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11996c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x11996cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x119970: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119974: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x119974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x119978: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x119978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11997c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x119980: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x119980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x119984: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x119984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x119988: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x119988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11998c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119990: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x119990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x119994: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x119994u;
    {
        const bool branch_taken_0x119994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119994u;
        // 0x119998: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119994) {
            ctx->pc = 0x1199A0u;
            goto label_1199a0;
        }
    }
    ctx->pc = 0x11999Cu;
    // 0x11999c: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x11999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_1199a0:
    // 0x1199a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1199a4: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x1199a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x1199a8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1199ac: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x1199acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x1199b0: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x1199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1199b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1199b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1199b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1199bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1199bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1199c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1199c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1199C4u;
    {
        const bool branch_taken_0x1199c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199C4u;
        // 0x1199c8: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199c4) {
            ctx->pc = 0x119A44u;
            goto label_119a44;
        }
    }
    ctx->pc = 0x1199CCu;
label_1199cc:
    // 0x1199cc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1199ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1199d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D0u;
        // 0x1199d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x1199E0u;
            goto label_1199e0;
        }
    }
    ctx->pc = 0x1199D8u;
    // 0x1199d8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1199dc: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1199e0:
    // 0x1199e0: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x1199e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x1199e4: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1199E4u;
    {
        const bool branch_taken_0x1199e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199E4u;
        // 0x1199e8: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e4) {
            ctx->pc = 0x119A50u;
            goto label_119a50;
        }
    }
    ctx->pc = 0x1199ECu;
    // 0x1199ec: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x1199ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x1199f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1199f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1199f4: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x1199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x1199f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1199f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1199fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1199fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119a00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x119a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x119a04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119a08: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x119a08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x119a0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119a10: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x119a14: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x119a14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x119a18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119A18u;
    {
        const bool branch_taken_0x119a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A18u;
        // 0x119a1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a18) {
            ctx->pc = 0x119A24u;
            goto label_119a24;
        }
    }
    ctx->pc = 0x119A20u;
    // 0x119a20: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_119a24:
    // 0x119a24: 0x61023  negu        $v0, $a2
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x119a28: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x119a2c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x119a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x119a30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119a34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x119a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119a3c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x119a40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_119a44:
    // 0x119a44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x119a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x119a48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x119A48u;
    {
        const bool branch_taken_0x119a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A48u;
        // 0x119a4c: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a48) {
            ctx->pc = 0x119A68u;
            goto label_119a68;
        }
    }
    ctx->pc = 0x119A50u;
label_119a50:
    // 0x119a50: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x119a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x119a54: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x119a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x119a58: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x119a5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x119a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x119a60: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x119a60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119a64: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_119a68:
    // 0x119a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119a70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119a74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119a80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a84: 0x3e00008  jr          $ra
    ctx->pc = 0x119A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A84u;
        // 0x119a88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A8Cu;
}
