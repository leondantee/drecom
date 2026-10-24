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

// Function: entry_001118b8
// Address: 0x1118b8 - 0x1118dc
void entry_001118b8_0x1118b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001118b8_0x1118b8");
#endif

    ctx->pc = 0x1118b8u;

    // 0x1118b8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1118b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1118BCu;
    {
        const bool branch_taken_0x1118bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118BCu;
        // 0x1118c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118bc) {
            ctx->pc = 0x1118DCu;
            return;
        }
    }
    ctx->pc = 0x1118C4u;
    // 0x1118c4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1118c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1118c8: 0x0  nop
    ctx->pc = 0x1118c8u;
    // NOP
    // 0x1118cc: 0x0  nop
    ctx->pc = 0x1118ccu;
    // NOP
    // 0x1118d0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1118d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x1118d4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1118D4u;
    {
        const bool branch_taken_0x1118d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118D4u;
        // 0x1118d8: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118d4) {
            ctx->pc = 0x111C80u;
            return;
        }
    }
    ctx->pc = 0x1118DCu;
}
