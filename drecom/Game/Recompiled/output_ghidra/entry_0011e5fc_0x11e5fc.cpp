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

// Function: entry_0011e5fc
// Address: 0x11e5fc - 0x11e654
void entry_0011e5fc_0x11e5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e5fc_0x11e5fc");
#endif

    ctx->pc = 0x11e5fcu;

    // 0x11e5fc: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x11e5fcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11e600: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x11e604: 0x1012  mflo        $v0
    ctx->pc = 0x11e604u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e608: 0x1810  mfhi        $v1
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11e60c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11e60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11e610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11e614: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11e618: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11e618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11e61c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x11e61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11e620: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x11e620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11e624: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11e624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e628: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E628u;
    {
        const bool branch_taken_0x11e628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E628u;
        // 0x11e62c: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e628) {
            ctx->pc = 0x11E658u;
            return;
        }
    }
    ctx->pc = 0x11E630u;
    // 0x11e630: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11e630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11e634: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x11e634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11e638: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E638u;
    {
        const bool branch_taken_0x11e638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E638u;
        // 0x11e63c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e638) {
            ctx->pc = 0x11E654u;
            return;
        }
    }
    ctx->pc = 0x11E640u;
    // 0x11e640: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11e640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11e644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E644u;
        // 0x11e648: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E658u;
            return;
        }
    }
    ctx->pc = 0x11E64Cu;
    // 0x11e64c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11e64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11e650: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x11e650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x11e654u;
}
