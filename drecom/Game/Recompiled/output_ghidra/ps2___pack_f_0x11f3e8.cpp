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

// Function: __pack_f
// Address: 0x11f3e8 - 0x11f4f4
void ps2___pack_f_0x11f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_f_0x11f3e8");
#endif

    ctx->pc = 0x11f3e8u;

    // 0x11f3e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x11f3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f3f4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11f3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f3f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3F8u;
    {
        const bool branch_taken_0x11f3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3F8u;
        // 0x11f3fc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3f8) {
            ctx->pc = 0x11F410u;
            goto label_11f410;
        }
    }
    ctx->pc = 0x11F400u;
    // 0x11f400: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11f400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11f404: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x11f404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f408: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11F408u;
    {
        const bool branch_taken_0x11f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F408u;
        // 0x11f40c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f408) {
            ctx->pc = 0x11F4A4u;
            goto label_11f4a4;
        }
    }
    ctx->pc = 0x11F410u;
label_11f410:
    // 0x11f410: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11f414: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F414u;
    {
        const bool branch_taken_0x11f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F414u;
        // 0x11f418: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f414) {
            ctx->pc = 0x11F468u;
            goto label_11f468;
        }
    }
    ctx->pc = 0x11F41Cu;
    // 0x11f41c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F41Cu;
    {
        const bool branch_taken_0x11f41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f41c) {
            ctx->pc = 0x11F42Cu;
            goto label_11f42c;
        }
    }
    ctx->pc = 0x11F424u;
    // 0x11f424: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11F424u;
    {
        const bool branch_taken_0x11f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F424u;
        // 0x11f428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f424) {
            ctx->pc = 0x11F4A4u;
            goto label_11f4a4;
        }
    }
    ctx->pc = 0x11F42Cu;
label_11f42c:
    // 0x11f42c: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11F42Cu;
    {
        const bool branch_taken_0x11f42c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F42Cu;
        // 0x11f430: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f42c) {
            ctx->pc = 0x11F4A8u;
            goto label_11f4a8;
        }
    }
    ctx->pc = 0x11F434u;
    // 0x11f434: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f438: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x11f438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x11f43c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F43Cu;
    {
        const bool branch_taken_0x11f43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F43Cu;
        // 0x11f440: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f43c) {
            ctx->pc = 0x11F45Cu;
            goto label_11f45c;
        }
    }
    ctx->pc = 0x11F444u;
    // 0x11f444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11f444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f448: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x11f448u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x11f44c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F44Cu;
        // 0x11f450: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F4A0u;
            goto label_11f4a0;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11F454u;
    {
        const bool branch_taken_0x11f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F454u;
        // 0x11f458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f454) {
            ctx->pc = 0x11F4A0u;
            goto label_11f4a0;
        }
    }
    ctx->pc = 0x11F45Cu;
label_11f45c:
    // 0x11f45c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x11f45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x11f460: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F460u;
    {
        const bool branch_taken_0x11f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F460u;
        // 0x11f464: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f460) {
            ctx->pc = 0x11F474u;
            goto label_11f474;
        }
    }
    ctx->pc = 0x11F468u;
label_11f468:
    // 0x11f468: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x11f468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11f46c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11F46Cu;
    {
        const bool branch_taken_0x11f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F46Cu;
        // 0x11f470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f46c) {
            ctx->pc = 0x11F4A4u;
            goto label_11f4a4;
        }
    }
    ctx->pc = 0x11F474u;
label_11f474:
    // 0x11f474: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11f478: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x11f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x11f47c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F47Cu;
    {
        const bool branch_taken_0x11f47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f47c) {
            ctx->pc = 0x11F480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F47Cu;
            // 0x11f480: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F490u;
            goto label_11f490;
        }
    }
    ctx->pc = 0x11F484u;
    // 0x11f484: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x11f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x11f488: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x11f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x11f48c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x11f48cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_11f490:
    // 0x11f490: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F490u;
    {
        const bool branch_taken_0x11f490 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11f490) {
            ctx->pc = 0x11F494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F490u;
            // 0x11f494: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F4A4u;
            goto label_11f4a4;
        }
    }
    ctx->pc = 0x11F498u;
    // 0x11f498: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x11f498u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f49c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11f49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_11f4a0:
    // 0x11f4a0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x11f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_11f4a4:
    // 0x11f4a4: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x11f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_11f4a8:
    // 0x11f4a8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x11f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x11f4ac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11f4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11f4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f4b4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11f4b8: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x11f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x11f4bc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11f4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11f4c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11f4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11f4c4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x11f4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x11f4c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11f4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11f4cc: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x11f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x11f4d0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11f4d4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x11f4d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x11f4d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f4dc: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x11f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x11f4e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11f4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11f4e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11f4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11f4e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x11f4e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F4F4u;
}
