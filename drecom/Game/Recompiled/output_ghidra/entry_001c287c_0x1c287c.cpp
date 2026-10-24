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

// Function: entry_001c287c
// Address: 0x1c287c - 0x1c28c4
void entry_001c287c_0x1c287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c287c_0x1c287c");
#endif

    switch (ctx->pc) {
        case 0x1c2890u: goto label_1c2890;
        default: break;
    }

    ctx->pc = 0x1c287cu;

    // 0x1c287c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2884: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2888: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2888u;
    SET_GPR_U32(ctx, 31, 0x1C2890u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2888u, 0x1C2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2890u;
    {
        const bool branch_taken_0x1c2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2890) {
            ctx->pc = 0x1C28C4u;
            return;
        }
    }
    ctx->pc = 0x1C2898u;
    // 0x1c2898: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c289c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c28a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c28a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c28a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c28a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c28a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c28ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c28acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c28b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28b4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c28b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c28b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c28bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28c0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c28c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c28c4u;
}
