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

// Function: entry_001c2128
// Address: 0x1c2128 - 0x1c216c
void entry_001c2128_0x1c2128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2128_0x1c2128");
#endif

    switch (ctx->pc) {
        case 0x1c213cu: goto label_1c213c;
        default: break;
    }

    ctx->pc = 0x1c2128u;

    // 0x1c2128: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c212c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2130: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2134: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2134u;
    SET_GPR_U32(ctx, 31, 0x1C213Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2134u, 0x1C213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C213Cu;
label_1c213c:
    // 0x1c213c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C213Cu;
    {
        const bool branch_taken_0x1c213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c213c) {
            ctx->pc = 0x1C216Cu;
            return;
        }
    }
    ctx->pc = 0x1C2144u;
    // 0x1c2144: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c2144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2148: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c214c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2150: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2154: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2158: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c215c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2160: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c2160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2164: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c2164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c216cu;
}
