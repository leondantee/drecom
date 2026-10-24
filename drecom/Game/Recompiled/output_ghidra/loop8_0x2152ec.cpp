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

// Function: loop8
// Address: 0x2152ec - 0x21533c
void loop8_0x2152ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("loop8_0x2152ec");
#endif

    ctx->pc = 0x2152ecu;

label_2152ec:
    // 0x2152ec: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2152ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2152f0: 0xf  sync
    ctx->pc = 0x2152f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2152f4: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x2152f4u;
    // CACHE instruction (ignored)
    // 0x2152f8: 0xf  sync
    ctx->pc = 0x2152f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2152fc: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x2152fcu;
    // CACHE instruction (ignored)
    // 0x215300: 0xf  sync
    ctx->pc = 0x215300u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215304: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x215304u;
    // CACHE instruction (ignored)
    // 0x215308: 0xf  sync
    ctx->pc = 0x215308u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21530c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x21530cu;
    // CACHE instruction (ignored)
    // 0x215310: 0xf  sync
    ctx->pc = 0x215310u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215314: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x215314u;
    // CACHE instruction (ignored)
    // 0x215318: 0xf  sync
    ctx->pc = 0x215318u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21531c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x21531cu;
    // CACHE instruction (ignored)
    // 0x215320: 0xf  sync
    ctx->pc = 0x215320u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215324: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x215324u;
    // CACHE instruction (ignored)
    // 0x215328: 0xf  sync
    ctx->pc = 0x215328u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21532c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x21532cu;
    // CACHE instruction (ignored)
    // 0x215330: 0xf  sync
    ctx->pc = 0x215330u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215334: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x215334u;
    {
        const bool branch_taken_0x215334 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x215338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215334u;
        // 0x215338: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215334) {
            ctx->pc = 0x2152ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2152ec;
        }
    }
    ctx->pc = 0x21533Cu;
}
