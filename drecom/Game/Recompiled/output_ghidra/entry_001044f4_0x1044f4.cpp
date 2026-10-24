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

// Function: entry_001044f4
// Address: 0x1044f4 - 0x10453c
void entry_001044f4_0x1044f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044f4_0x1044f4");
#endif

    ctx->pc = 0x1044f4u;

    // 0x1044f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1044f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1044f8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1044F8u;
    {
        const bool branch_taken_0x1044f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044F8u;
        // 0x1044fc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044f8) {
            ctx->pc = 0x1046C8u;
            return;
        }
    }
    ctx->pc = 0x104500u;
    // 0x104500: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x104500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104504: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x104504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15788)));
    // 0x104508: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x104508u;
    {
        const bool branch_taken_0x104508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104508u;
        // 0x10450c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104508) {
            ctx->pc = 0x1045B8u;
            return;
        }
    }
    ctx->pc = 0x104510u;
    // 0x104510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104514: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104514u;
    {
        const bool branch_taken_0x104514 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104514u;
        // 0x104518: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104514) {
            ctx->pc = 0x10453Cu;
            return;
        }
    }
    ctx->pc = 0x10451Cu;
    // 0x10451c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x10451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104520: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104524: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x104524u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104528: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10452c: 0x8c443c04  lw          $a0, 0x3C04($v0)
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C04u));
    // 0x104530: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104530u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104534: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x104534u;
    {
        const bool branch_taken_0x104534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104534u;
        // 0x104538: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104534) {
            ctx->pc = 0x1045F0u;
            return;
        }
    }
    ctx->pc = 0x10453Cu;
}
