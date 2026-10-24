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

// Function: entry_002a92e0
// Address: 0x2a92e0 - 0x2a931c
void entry_002a92e0_0x2a92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a92e0_0x2a92e0");
#endif

    switch (ctx->pc) {
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a9300u: goto label_2a9300;
        default: break;
    }

    ctx->pc = 0x2a92e0u;

    // 0x2a92e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a92e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a92e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a92ec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x2A92ECu;
    SET_GPR_U32(ctx, 31, 0x2A92F4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x2A92ECu, 0x2A92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92F4u;
label_2a92f4:
    // 0x2a92f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a92f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a92f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A92F8u;
    SET_GPR_U32(ctx, 31, 0x2A9300u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A92F8u, 0x2A9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9300u;
label_2a9300:
    // 0x2a9300: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9304: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2a9304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2a9308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9308u;
    {
        const bool branch_taken_0x2a9308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9308) {
            ctx->pc = 0x2A931Cu;
            return;
        }
    }
    ctx->pc = 0x2A9310u;
    // 0x2a9310: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9314: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a9318: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a9318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2a931cu;
}
