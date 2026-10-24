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

// Function: entry_0011a254
// Address: 0x11a254 - 0x11a288
void entry_0011a254_0x11a254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a254_0x11a254");
#endif

    ctx->pc = 0x11a254u;

    // 0x11a254: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x11a254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a258: 0x8fb2003c  lw          $s2, 0x3C($sp)
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x11a25c: 0x13583c  dsll32      $t3, $s3, 0
    ctx->pc = 0x11a25cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 0));
    // 0x11a260: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11a264: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11a264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x11a268: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x11a268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a26c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x11a270: 0x1310c2  srl         $v0, $s3, 3
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
    // 0x11a274: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x11a274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a278: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a27c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x11A27Cu;
    {
        const bool branch_taken_0x11a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A27Cu;
        // 0x11a280: 0xffa20020  sd          $v0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a27c) {
            ctx->pc = 0x11A3F0u;
            return;
        }
    }
    ctx->pc = 0x11A284u;
    // 0x11a284: 0x0  nop
    ctx->pc = 0x11a284u;
    // NOP
    ctx->pc = 0x11a288u;
}
