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

// Function: entry_001141b8
// Address: 0x1141b8 - 0x1141d0
void entry_001141b8_0x1141b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001141b8_0x1141b8");
#endif

    ctx->pc = 0x1141b8u;

    // 0x1141b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1141b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1141bc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1141bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1141c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1141C0u;
    {
        const bool branch_taken_0x1141c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141C0u;
        // 0x1141c4: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141c0) {
            ctx->pc = 0x1141F8u;
            return;
        }
    }
    ctx->pc = 0x1141C8u;
    // 0x1141c8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1141cc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1141ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x1141d0u;
}
