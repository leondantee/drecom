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

// Function: entry_00114058
// Address: 0x114058 - 0x114070
void entry_00114058_0x114058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114058_0x114058");
#endif

    ctx->pc = 0x114058u;

    // 0x114058: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x114058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x11405c: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x11405Cu;
    {
        const bool branch_taken_0x11405c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x114060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11405Cu;
        // 0x114060: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11405c) {
            ctx->pc = 0x114230u;
            return;
        }
    }
    ctx->pc = 0x114064u;
    // 0x114064: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x114064u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x114068: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x114068u;
    {
        const bool branch_taken_0x114068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114068u;
        // 0x11406c: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114068) {
            ctx->pc = 0x114230u;
            return;
        }
    }
    ctx->pc = 0x114070u;
}
