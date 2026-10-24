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

// Function: entry_001c59cc
// Address: 0x1c59cc - 0x1c5a14
void entry_001c59cc_0x1c59cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59cc_0x1c59cc");
#endif

    switch (ctx->pc) {
        case 0x1c59e0u: goto label_1c59e0;
        default: break;
    }

    ctx->pc = 0x1c59ccu;

    // 0x1c59cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59d4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c59d8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C59D8u;
    SET_GPR_U32(ctx, 31, 0x1C59E0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C59D8u, 0x1C59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59E0u;
label_1c59e0:
    // 0x1c59e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C59E0u;
    {
        const bool branch_taken_0x1c59e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c59e0) {
            ctx->pc = 0x1C5A14u;
            return;
        }
    }
    ctx->pc = 0x1C59E8u;
    // 0x1c59e8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c59ec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c59f0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c59f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c59f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c59f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c59f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c59fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a04: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c5a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5a08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5a10: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c5a14u;
}
