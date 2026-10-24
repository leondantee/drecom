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

// Function: entry_002393f8
// Address: 0x2393f8 - 0x23946c
void entry_002393f8_0x2393f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002393f8_0x2393f8");
#endif

    switch (ctx->pc) {
        case 0x239420u: goto label_239420;
        default: break;
    }

    ctx->pc = 0x2393f8u;

    // 0x2393f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239400: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x239404: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x239404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x239408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23940c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x239410: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x239410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239414: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239418: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239418u;
    SET_GPR_U32(ctx, 31, 0x239420u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239418u, 0x239420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239420u;
label_239420:
    // 0x239420: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239420u;
    {
        const bool branch_taken_0x239420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239420) {
            ctx->pc = 0x23946Cu;
            return;
        }
    }
    ctx->pc = 0x239428u;
    // 0x239428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23942c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239430: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x239430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x239434: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x239434u;
    {
        const bool branch_taken_0x239434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239434) {
            ctx->pc = 0x23946Cu;
            return;
        }
    }
    ctx->pc = 0x23943Cu;
    // 0x23943c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239444: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x239444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x239448: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x239448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23944c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239450: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239458: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23945c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239460: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239464: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239468: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23946cu;
}
