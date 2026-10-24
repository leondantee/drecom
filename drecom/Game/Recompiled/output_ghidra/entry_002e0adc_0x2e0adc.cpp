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

// Function: entry_002e0adc
// Address: 0x2e0adc - 0x2e0b18
void entry_002e0adc_0x2e0adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0adc_0x2e0adc");
#endif

    switch (ctx->pc) {
        case 0x2e0afcu: goto label_2e0afc;
        default: break;
    }

    ctx->pc = 0x2e0adcu;

    // 0x2e0adc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ae0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0ae4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e0ae8: 0x2406050a  addiu       $a2, $zero, 0x50A
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x2e0aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e0aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0af0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e0af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e0af4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E0AF4u;
    SET_GPR_U32(ctx, 31, 0x2E0AFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E0AF4u, 0x2E0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AFCu;
label_2e0afc:
    // 0x2e0afc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e0b00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b04: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0b08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b0c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e0b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e0b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e0b14: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e0b18u;
}
