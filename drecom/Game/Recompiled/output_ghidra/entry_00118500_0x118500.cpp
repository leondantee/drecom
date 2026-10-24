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

// Function: entry_00118500
// Address: 0x118500 - 0x11852c
void entry_00118500_0x118500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118500_0x118500");
#endif

    ctx->pc = 0x118500u;

label_118500:
    // 0x118500: 0x512a000b  beql        $t1, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x118500u;
    {
        const bool branch_taken_0x118500 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 10));
        if (branch_taken_0x118500) {
            ctx->pc = 0x118504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118500u;
            // 0x118504: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118530u;
            return;
        }
    }
    ctx->pc = 0x118508u;
    // 0x118508: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x118508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x11850c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11850cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118510: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x118510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x118514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x118514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118518: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x118518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11851c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11851Cu;
    {
        const bool branch_taken_0x11851c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11851c) {
            ctx->pc = 0x118520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11851Cu;
            // 0x118520: 0x8d290008  lw          $t1, 0x8($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118500;
        }
    }
    ctx->pc = 0x118524u;
    // 0x118524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118524u;
    {
        const bool branch_taken_0x118524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118524u;
        // 0x118528: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118524) {
            ctx->pc = 0x118530u;
            return;
        }
    }
    ctx->pc = 0x11852Cu;
}
