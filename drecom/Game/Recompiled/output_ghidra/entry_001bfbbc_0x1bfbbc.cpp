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

// Function: entry_001bfbbc
// Address: 0x1bfbbc - 0x1bfc04
void entry_001bfbbc_0x1bfbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfbbc_0x1bfbbc");
#endif

    switch (ctx->pc) {
        case 0x1bfbd0u: goto label_1bfbd0;
        default: break;
    }

    ctx->pc = 0x1bfbbcu;

    // 0x1bfbbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbc4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bfbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfbc8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BFBC8u;
    SET_GPR_U32(ctx, 31, 0x1BFBD0u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BFBC8u, 0x1BFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBD0u;
label_1bfbd0:
    // 0x1bfbd0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFBD0u;
    {
        const bool branch_taken_0x1bfbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbd0) {
            ctx->pc = 0x1BFC04u;
            return;
        }
    }
    ctx->pc = 0x1BFBD8u;
    // 0x1bfbd8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bfbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbdc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bfbe0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bfbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bfbe4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bfbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bfbe8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfbec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bfbf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbf4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1bfbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfbf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfbfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc00: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bfc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bfc04u;
}
