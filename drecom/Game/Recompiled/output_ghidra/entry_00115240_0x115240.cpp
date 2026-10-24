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

// Function: entry_00115240
// Address: 0x115240 - 0x115258
void entry_00115240_0x115240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115240_0x115240");
#endif

    ctx->pc = 0x115240u;

    // 0x115240: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x115244: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115244u;
    {
        const bool branch_taken_0x115244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x115248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115244u;
        // 0x115248: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115244) {
            ctx->pc = 0x115258u;
            return;
        }
    }
    ctx->pc = 0x11524Cu;
    // 0x11524c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x11524cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x115250: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x115250u;
    {
        const bool branch_taken_0x115250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115250u;
        // 0x115254: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115250) {
            ctx->pc = 0x115300u;
            return;
        }
    }
    ctx->pc = 0x115258u;
}
