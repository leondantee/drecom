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

// Function: entry_001bf3ec
// Address: 0x1bf3ec - 0x1bf434
void entry_001bf3ec_0x1bf3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf3ec_0x1bf3ec");
#endif

    switch (ctx->pc) {
        case 0x1bf400u: goto label_1bf400;
        default: break;
    }

    ctx->pc = 0x1bf3ecu;

    // 0x1bf3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3f4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf3f8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF3F8u;
    SET_GPR_U32(ctx, 31, 0x1BF400u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF3F8u, 0x1BF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF400u;
label_1bf400:
    // 0x1bf400: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF400u;
    {
        const bool branch_taken_0x1bf400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf400) {
            ctx->pc = 0x1BF434u;
            return;
        }
    }
    ctx->pc = 0x1BF408u;
    // 0x1bf408: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf40c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf410: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf418: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf41c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf41cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bf420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf424: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1bf424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf428: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf42c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf430: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bf434u;
}
