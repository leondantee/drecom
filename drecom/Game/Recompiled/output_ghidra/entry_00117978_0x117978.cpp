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

// Function: entry_00117978
// Address: 0x117978 - 0x1179c0
void entry_00117978_0x117978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117978_0x117978");
#endif

    switch (ctx->pc) {
        case 0x11799cu: goto label_11799c;
        case 0x1179b0u: goto label_1179b0;
        default: break;
    }

    ctx->pc = 0x117978u;

    // 0x117978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11797c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x117980: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x117980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x117984: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117984u;
    {
        const bool branch_taken_0x117984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117984u;
        // 0x117988: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117984) {
            ctx->pc = 0x1179C0u;
            return;
        }
    }
    ctx->pc = 0x11798Cu;
    // 0x11798c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11798Cu;
    {
        const bool branch_taken_0x11798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11798Cu;
        // 0x117990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11798c) {
            ctx->pc = 0x1179C0u;
            return;
        }
    }
    ctx->pc = 0x117994u;
    // 0x117994: 0xc0462d2  jal         func_118B48
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x117998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117994u;
    // 0x117998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x11799Cu;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11799Cu) { return; }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1179a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1179a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1179a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1179a8: 0xc045bec  jal         func_116FB0
    ctx->pc = 0x1179A8u;
    SET_GPR_U32(ctx, 31, 0x1179B0u);
    ctx->pc = 0x1179ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179A8u;
    // 0x1179ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB0u;
    {
        ctx->pc = 0x1179B0u;
        ps2_stubs::fflush(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1179B0u) { return; }
    ctx->pc = 0x1179B0u;
label_1179b0:
    // 0x1179b0: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1179B0u;
    {
        const bool branch_taken_0x1179b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1179b0) {
            ctx->pc = 0x1179B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179B0u;
            // 0x1179b4: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117BA0u;
            return;
        }
    }
    ctx->pc = 0x1179B8u;
    // 0x1179b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1179B8u;
    {
        const bool branch_taken_0x1179b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B8u;
        // 0x1179bc: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179b8) {
            ctx->pc = 0x117A24u;
            return;
        }
    }
    ctx->pc = 0x1179C0u;
}
