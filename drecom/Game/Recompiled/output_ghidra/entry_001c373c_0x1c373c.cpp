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

// Function: entry_001c373c
// Address: 0x1c373c - 0x1c3784
void entry_001c373c_0x1c373c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c373c_0x1c373c");
#endif

    switch (ctx->pc) {
        case 0x1c3750u: goto label_1c3750;
        default: break;
    }

    ctx->pc = 0x1c373cu;

    // 0x1c373c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3740: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3744: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3748: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3748u;
    SET_GPR_U32(ctx, 31, 0x1C3750u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3748u, 0x1C3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3750u;
label_1c3750:
    // 0x1c3750: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3750u;
    {
        const bool branch_taken_0x1c3750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3750) {
            ctx->pc = 0x1C3784u;
            return;
        }
    }
    ctx->pc = 0x1C3758u;
    // 0x1c3758: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c375c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3760: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c376c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c376cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3774: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c3774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c377c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3780: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c3784u;
}
