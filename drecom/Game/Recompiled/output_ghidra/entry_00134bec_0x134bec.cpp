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

// Function: entry_00134bec
// Address: 0x134bec - 0x134c04
void entry_00134bec_0x134bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134bec_0x134bec");
#endif

    ctx->pc = 0x134becu;

    // 0x134bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134bf4: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x134bf8: 0xe460043c  swc1        $f0, 0x43C($v1)
    ctx->pc = 0x134bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1084), bits); }
    // 0x134bfc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x134BFCu;
    {
        const bool branch_taken_0x134bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bfc) {
            ctx->pc = 0x134C6Cu;
            return;
        }
    }
    ctx->pc = 0x134C04u;
}
