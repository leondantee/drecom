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

// Function: entry_00114070
// Address: 0x114070 - 0x114088
void entry_00114070_0x114070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114070_0x114070");
#endif

    ctx->pc = 0x114070u;

    // 0x114070: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114074: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x114074u;
    {
        const bool branch_taken_0x114074 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x114078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114074u;
        // 0x114078: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114074) {
            ctx->pc = 0x1140ACu;
            return;
        }
    }
    ctx->pc = 0x11407Cu;
    // 0x11407c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x11407cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114080: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x114080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x114084: 0x0  nop
    ctx->pc = 0x114084u;
    // NOP
    ctx->pc = 0x114088u;
}
