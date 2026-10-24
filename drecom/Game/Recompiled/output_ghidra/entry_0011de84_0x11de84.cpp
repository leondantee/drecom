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

// Function: entry_0011de84
// Address: 0x11de84 - 0x11dedc
void entry_0011de84_0x11de84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de84_0x11de84");
#endif

    ctx->pc = 0x11de84u;

    // 0x11de84: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x11de84u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11de88: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x11de88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x11de8c: 0x1012  mflo        $v0
    ctx->pc = 0x11de8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11de90: 0x1810  mfhi        $v1
    ctx->pc = 0x11de90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11de94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11de94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11de98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11de9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dea0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11dea0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11dea4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x11dea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11dea8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11deac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11deacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11deb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DEB0u;
    {
        const bool branch_taken_0x11deb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEB0u;
        // 0x11deb4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deb0) {
            ctx->pc = 0x11DEE0u;
            return;
        }
    }
    ctx->pc = 0x11DEB8u;
    // 0x11deb8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x11debc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x11debcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dec0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DEC0u;
    {
        const bool branch_taken_0x11dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEC0u;
        // 0x11dec4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dec0) {
            ctx->pc = 0x11DEDCu;
            return;
        }
    }
    ctx->pc = 0x11DEC8u;
    // 0x11dec8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x11dec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11decc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DECCu;
    {
        const bool branch_taken_0x11decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DECCu;
        // 0x11ded0: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11decc) {
            ctx->pc = 0x11DEE0u;
            return;
        }
    }
    ctx->pc = 0x11DED4u;
    // 0x11ded4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11ded8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x11ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x11dedcu;
}
