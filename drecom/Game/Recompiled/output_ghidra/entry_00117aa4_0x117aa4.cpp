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

// Function: entry_00117aa4
// Address: 0x117aa4 - 0x117b08
void entry_00117aa4_0x117aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117aa4_0x117aa4");
#endif

    switch (ctx->pc) {
        case 0x117ae4u: goto label_117ae4;
        case 0x117af8u: goto label_117af8;
        default: break;
    }

    ctx->pc = 0x117aa4u;

    // 0x117aa4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x117aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x117aa8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x117aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x117aac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ab0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x117ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117ab4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x117ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ab8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x117ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x117abc: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x117abcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x117ac0: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x117ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x117ac4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x117AC4u;
    {
        const bool branch_taken_0x117ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AC4u;
        // 0x117ac8: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ac4) {
            ctx->pc = 0x117B08u;
            return;
        }
    }
    ctx->pc = 0x117ACCu;
    // 0x117acc: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x117ad0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x117AD0u;
    {
        const bool branch_taken_0x117ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AD0u;
        // 0x117ad4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ad0) {
            ctx->pc = 0x117B08u;
            return;
        }
    }
    ctx->pc = 0x117AD8u;
    // 0x117ad8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117adc: 0xc0462d2  jal         func_118B48
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x117AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ADCu;
    // 0x117ae0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117AE4u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117AE4u) { return; }
    ctx->pc = 0x117AE4u;
label_117ae4:
    // 0x117ae4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x117ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x117aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x117af0: 0xc045bec  jal         func_116FB0
    ctx->pc = 0x117AF0u;
    SET_GPR_U32(ctx, 31, 0x117AF8u);
    ctx->pc = 0x117AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AF0u;
    // 0x117af4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x117AF8u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117AF8u) { return; }
    ctx->pc = 0x117AF8u;
label_117af8:
    // 0x117af8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x117AF8u;
    {
        const bool branch_taken_0x117af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF8u;
        // 0x117afc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117af8) {
            ctx->pc = 0x117B9Cu;
            return;
        }
    }
    ctx->pc = 0x117B00u;
    // 0x117b00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x117B00u;
    {
        const bool branch_taken_0x117b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b00) {
            ctx->pc = 0x117B64u;
            return;
        }
    }
    ctx->pc = 0x117B08u;
}
