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

// Function: entry_001c4c38
// Address: 0x1c4c38 - 0x1c4c7c
void entry_001c4c38_0x1c4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4c38_0x1c4c38");
#endif

    switch (ctx->pc) {
        case 0x1c4c4cu: goto label_1c4c4c;
        default: break;
    }

    ctx->pc = 0x1c4c38u;

    // 0x1c4c38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c40: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4c44: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C4C44u;
    SET_GPR_U32(ctx, 31, 0x1C4C4Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C4C44u, 0x1C4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C4Cu;
label_1c4c4c:
    // 0x1c4c4c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4C4Cu;
    {
        const bool branch_taken_0x1c4c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c4c) {
            ctx->pc = 0x1C4C7Cu;
            return;
        }
    }
    ctx->pc = 0x1C4C54u;
    // 0x1c4c54: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4c5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c4c60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c4c64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4c68: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c4c6c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c70: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c4c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4c74: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c4c7cu;
}
