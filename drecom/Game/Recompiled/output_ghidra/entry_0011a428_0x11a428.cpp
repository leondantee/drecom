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

// Function: entry_0011a428
// Address: 0x11a428 - 0x11a458
void entry_0011a428_0x11a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a428_0x11a428");
#endif

    ctx->pc = 0x11a428u;

    // 0x11a428: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11A428u;
    {
        const bool branch_taken_0x11a428 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A428u;
        // 0x11a42c: 0x2333823  subu        $a3, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a428) {
            ctx->pc = 0x11A4CCu;
            return;
        }
    }
    ctx->pc = 0x11A430u;
    // 0x11a430: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a434: 0x17c00008  bnez        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A434u;
    {
        const bool branch_taken_0x11a434 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A434u;
        // 0x11a438: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a434) {
            ctx->pc = 0x11A458u;
            return;
        }
    }
    ctx->pc = 0x11A43Cu;
    // 0x11a43c: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11a440: 0x2333823  subu        $a3, $s1, $s3
    ctx->pc = 0x11a440u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x11a444: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x11a444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a448: 0x2934023  subu        $t0, $s4, $s3
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x11a44c: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x11a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x11a450: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11A450u;
    {
        const bool branch_taken_0x11a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A450u;
        // 0x11a454: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a450) {
            ctx->pc = 0x11A4C8u;
            return;
        }
    }
    ctx->pc = 0x11A458u;
}
