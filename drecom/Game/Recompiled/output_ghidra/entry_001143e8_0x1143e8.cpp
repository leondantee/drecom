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

// Function: entry_001143e8
// Address: 0x1143e8 - 0x11440c
void entry_001143e8_0x1143e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001143e8_0x1143e8");
#endif

    ctx->pc = 0x1143e8u;

    // 0x1143e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1143E8u;
    {
        const bool branch_taken_0x1143e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E8u;
        // 0x1143ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e8) {
            ctx->pc = 0x11440Cu;
            return;
        }
    }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1143f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1143f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1143f8: 0x0  nop
    ctx->pc = 0x1143f8u;
    // NOP
    // 0x1143fc: 0x0  nop
    ctx->pc = 0x1143fcu;
    // NOP
    // 0x114400: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x114400u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x114404: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x114404u;
    {
        const bool branch_taken_0x114404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114404) {
            ctx->pc = 0x1145FCu;
            return;
        }
    }
    ctx->pc = 0x11440Cu;
}
