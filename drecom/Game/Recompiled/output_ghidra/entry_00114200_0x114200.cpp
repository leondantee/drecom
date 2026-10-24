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

// Function: entry_00114200
// Address: 0x114200 - 0x114218
void entry_00114200_0x114200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114200_0x114200");
#endif

    ctx->pc = 0x114200u;

    // 0x114200: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114200u;
    {
        const bool branch_taken_0x114200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114200) {
            ctx->pc = 0x114204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114200u;
            // 0x114204: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114218u;
            return;
        }
    }
    ctx->pc = 0x114208u;
    // 0x114208: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x114208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x11420c: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x11420cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x114210: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114210u;
    {
        const bool branch_taken_0x114210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114210u;
        // 0x114214: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x114210) {
            ctx->pc = 0x11422Cu;
            return;
        }
    }
    ctx->pc = 0x114218u;
}
