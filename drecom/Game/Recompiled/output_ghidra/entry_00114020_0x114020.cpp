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

// Function: entry_00114020
// Address: 0x114020 - 0x114038
void entry_00114020_0x114020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114020_0x114020");
#endif

    ctx->pc = 0x114020u;

    // 0x114020: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114024: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x114024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114028: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x114028u;
    {
        const bool branch_taken_0x114028 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x114028) {
            ctx->pc = 0x11402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114028u;
            // 0x11402c: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x114058u;
            return;
        }
    }
    ctx->pc = 0x114030u;
    // 0x114030: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x114034: 0x0  nop
    ctx->pc = 0x114034u;
    // NOP
    ctx->pc = 0x114038u;
}
