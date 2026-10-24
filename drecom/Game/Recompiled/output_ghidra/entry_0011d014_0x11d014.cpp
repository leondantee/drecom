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

// Function: entry_0011d014
// Address: 0x11d014 - 0x11d06c
void entry_0011d014_0x11d014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d014_0x11d014");
#endif

    ctx->pc = 0x11d014u;

    // 0x11d014: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11d014u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11d018: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11d018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11d01c: 0x1012  mflo        $v0
    ctx->pc = 0x11d01cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11d020: 0x1810  mfhi        $v1
    ctx->pc = 0x11d020u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11d024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d02c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11d030: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d030u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d034: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x11d034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11d038: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11d038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11d03c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d040: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D040u;
    {
        const bool branch_taken_0x11d040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D040u;
        // 0x11d044: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d040) {
            ctx->pc = 0x11D070u;
            return;
        }
    }
    ctx->pc = 0x11D048u;
    // 0x11d048: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11d04c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x11d04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d050: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D050u;
    {
        const bool branch_taken_0x11d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D050u;
        // 0x11d054: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d050) {
            ctx->pc = 0x11D06Cu;
            return;
        }
    }
    ctx->pc = 0x11D058u;
    // 0x11d058: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11d058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11d05c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D05Cu;
    {
        const bool branch_taken_0x11d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D05Cu;
        // 0x11d060: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d05c) {
            ctx->pc = 0x11D070u;
            return;
        }
    }
    ctx->pc = 0x11D064u;
    // 0x11d064: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11d068: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x11d06cu;
}
