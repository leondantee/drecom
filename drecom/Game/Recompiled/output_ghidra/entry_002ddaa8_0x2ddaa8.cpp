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

// Function: entry_002ddaa8
// Address: 0x2ddaa8 - 0x2ddb18
void entry_002ddaa8_0x2ddaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ddaa8_0x2ddaa8");
#endif

    switch (ctx->pc) {
        case 0x2ddaf4u: goto label_2ddaf4;
        case 0x2ddb10u: goto label_2ddb10;
        default: break;
    }

    ctx->pc = 0x2ddaa8u;

    // 0x2ddaa8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2ddaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddaac: 0x84c3127e  lh          $v1, 0x127E($a2)
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4734)));
    // 0x2ddab0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DDAB0u;
    {
        const bool branch_taken_0x2ddab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddab0) {
            ctx->pc = 0x2DDB18u;
            return;
        }
    }
    ctx->pc = 0x2DDAB8u;
    // 0x2ddab8: 0x3c0743e1  lui         $a3, 0x43E1
    ctx->pc = 0x2ddab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17377 << 16));
    // 0x2ddabc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ddabcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddac0: 0x0  nop
    ctx->pc = 0x2ddac0u;
    // NOP
    // 0x2ddac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ddac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ddac8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ddac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddacc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddad0: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x2ddad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ddad4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ddad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddad8: 0x246203c0  addiu       $v0, $v1, 0x3C0
    ctx->pc = 0x2ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x2ddadc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2ddadcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddae0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ddae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ddae4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2ddae8: 0x24678e00  addiu       $a3, $v1, -0x7200
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938112));
    // 0x2ddaec: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DDAECu;
    SET_GPR_U32(ctx, 31, 0x2DDAF4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DDAECu, 0x2DDAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAF4u;
label_2ddaf4:
    // 0x2ddaf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DDAF4u;
    {
        const bool branch_taken_0x2ddaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddaf4) {
            ctx->pc = 0x2DDB18u;
            return;
        }
    }
    ctx->pc = 0x2DDAFCu;
    // 0x2ddafc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ddafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ddb00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ddb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb04: 0xa444127a  sh          $a0, 0x127A($v0)
    ctx->pc = 0x2ddb04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ddb08: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DDB08u;
    SET_GPR_U32(ctx, 31, 0x2DDB10u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DDB08u, 0x2DDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB10u;
label_2ddb10:
    // 0x2ddb10: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2ddb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb14: 0xa4a0127e  sh          $zero, 0x127E($a1)
    ctx->pc = 0x2ddb14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2ddb18u;
}
