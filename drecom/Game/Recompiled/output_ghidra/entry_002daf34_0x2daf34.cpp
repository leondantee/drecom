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

// Function: entry_002daf34
// Address: 0x2daf34 - 0x2daf7c
void entry_002daf34_0x2daf34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002daf34_0x2daf34");
#endif

    switch (ctx->pc) {
        case 0x2daf50u: goto label_2daf50;
        default: break;
    }

    ctx->pc = 0x2daf34u;

    // 0x2daf34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2daf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2daf38: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x2daf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2daf3c: 0xc60d0084  lwc1        $f13, 0x84($s0)
    ctx->pc = 0x2daf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2daf40: 0xc60e0084  lwc1        $f14, 0x84($s0)
    ctx->pc = 0x2daf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2daf44: 0xc60f0084  lwc1        $f15, 0x84($s0)
    ctx->pc = 0x2daf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2daf48: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2DAF48u;
    SET_GPR_U32(ctx, 31, 0x2DAF50u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2DAF48u, 0x2DAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF50u;
label_2daf50:
    // 0x2daf50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2daf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2daf54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2daf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2daf58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2daf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2daf5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2daf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2daf60: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DAF60u;
    {
        const bool branch_taken_0x2daf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daf60) {
            ctx->pc = 0x2DAFD8u;
            return;
        }
    }
    ctx->pc = 0x2DAF68u;
    // 0x2daf68: 0x920300da  lbu         $v1, 0xDA($s0)
    ctx->pc = 0x2daf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2daf6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2daf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2daf70: 0xa20300da  sb          $v1, 0xDA($s0)
    ctx->pc = 0x2daf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 3));
    // 0x2daf74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DAF74u;
    {
        const bool branch_taken_0x2daf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf74) {
            ctx->pc = 0x2DAFD8u;
            return;
        }
    }
    ctx->pc = 0x2DAF7Cu;
}
