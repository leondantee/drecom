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

// Function: entry_00118540
// Address: 0x118540 - 0x118598
void entry_00118540_0x118540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118540_0x118540");
#endif

    ctx->pc = 0x118540u;

    // 0x118540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118544: 0x26834928  addiu       $v1, $s4, 0x4928
    ctx->pc = 0x118544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x118548: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x118548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11854c: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x11854cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x118550: 0x162300b  movn        $a2, $t3, $v0
    ctx->pc = 0x118550u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x118554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118558: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x11855c: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x11855cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x118560: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x118560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x118564: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x118564u;
    {
        const bool branch_taken_0x118564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118564u;
        // 0x118568: 0x26834928  addiu       $v1, $s4, 0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118564) {
            ctx->pc = 0x1186ECu;
            return;
        }
    }
    ctx->pc = 0x11856Cu;
    // 0x11856c: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x11856cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x118570: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x118570u;
    {
        const bool branch_taken_0x118570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118570u;
        // 0x118574: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118570) {
            ctx->pc = 0x1185B8u;
            return;
        }
    }
    ctx->pc = 0x118578u;
    // 0x118578: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x118578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x11857c: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x11857cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x118580: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x118580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x118584: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x118584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x118588: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x118588u;
    {
        const bool branch_taken_0x118588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118588u;
        // 0x11858c: 0x244b0004  addiu       $t3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118588) {
            ctx->pc = 0x1185B4u;
            return;
        }
    }
    ctx->pc = 0x118590u;
    // 0x118590: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x118590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118594: 0x0  nop
    ctx->pc = 0x118594u;
    // NOP
    ctx->pc = 0x118598u;
}
