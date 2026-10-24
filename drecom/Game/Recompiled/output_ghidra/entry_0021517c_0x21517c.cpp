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

// Function: entry_0021517c
// Address: 0x21517c - 0x2151d0
void entry_0021517c_0x21517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021517c_0x21517c");
#endif

    ctx->pc = 0x21517cu;

    // 0x21517c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x21517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x215180: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x215180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x215184: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x215184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x215188: 0x2470a258  addiu       $s0, $v1, -0x5DA8
    ctx->pc = 0x215188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943320));
    // 0x21518c: 0x42000038  ei
    ctx->pc = 0x21518cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x215190: 0x8c67a258  lw          $a3, -0x5DA8($v1)
    ctx->pc = 0x215190u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61A258u));
    // 0x215194: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x215194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x215198: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x215198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21519c: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x21519Cu;
    {
        const bool branch_taken_0x21519c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21519Cu;
        // 0x2151a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21519c) {
            ctx->pc = 0x215288u;
            return;
        }
    }
    ctx->pc = 0x2151A4u;
    // 0x2151a4: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2151a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2151a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2151ac: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x2151acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x2151b0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2151b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2151b4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2151b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2151b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2151b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151bc: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x2151bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2151c0: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x2151c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2151c4: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2151C4u;
    {
        const bool branch_taken_0x2151c4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2151C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151C4u;
        // 0x2151c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151c4) {
            ctx->pc = 0x2151ECu;
            return;
        }
    }
    ctx->pc = 0x2151CCu;
    // 0x2151cc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2151ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2151d0u;
}
