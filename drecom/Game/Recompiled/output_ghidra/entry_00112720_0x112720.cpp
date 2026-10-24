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

// Function: entry_00112720
// Address: 0x112720 - 0x112754
void entry_00112720_0x112720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112720_0x112720");
#endif

    ctx->pc = 0x112720u;

    // 0x112720: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x112720u;
    {
        const bool branch_taken_0x112720 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x112724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112720u;
        // 0x112724: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112720) {
            ctx->pc = 0x11275Cu;
            return;
        }
    }
    ctx->pc = 0x112728u;
    // 0x112728: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x112728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11272c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112730: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x112730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x112734: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112734u;
    {
        const bool branch_taken_0x112734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112734u;
        // 0x112738: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112734) {
            ctx->pc = 0x112754u;
            return;
        }
    }
    ctx->pc = 0x11273Cu;
    // 0x11273c: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11273Cu;
    {
        const bool branch_taken_0x11273c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11273c) {
            ctx->pc = 0x11275Cu;
            return;
        }
    }
    ctx->pc = 0x112744u;
    // 0x112744: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x112744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x112748: 0x0  nop
    ctx->pc = 0x112748u;
    // NOP
    // 0x11274c: 0x0  nop
    ctx->pc = 0x11274cu;
    // NOP
    // 0x112750: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x112750u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    ctx->pc = 0x112754u;
}
