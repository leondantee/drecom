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

// Function: entry_0012fedc
// Address: 0x12fedc - 0x12ff20
void entry_0012fedc_0x12fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fedc_0x12fedc");
#endif

    switch (ctx->pc) {
        case 0x12ff10u: goto label_12ff10;
        default: break;
    }

    ctx->pc = 0x12fedcu;

    // 0x12fedc: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x12fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12fee0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12fee4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x12fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12fee8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x12fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x12feec: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x12feecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x12fef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12fef4: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x12fef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x12fef8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12fefc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ff00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ff04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ff08: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12FF08u;
    SET_GPR_U32(ctx, 31, 0x12FF10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12FF08u, 0x12FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FF10u;
label_12ff10:
    // 0x12ff10: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12ff14: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x12ff14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12ff18: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12ff1c: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x12ff1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x12ff20u;
}
