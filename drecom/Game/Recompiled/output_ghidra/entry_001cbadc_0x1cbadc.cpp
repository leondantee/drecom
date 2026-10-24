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

// Function: entry_001cbadc
// Address: 0x1cbadc - 0x1cbb28
void entry_001cbadc_0x1cbadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbadc_0x1cbadc");
#endif

    switch (ctx->pc) {
        case 0x1cbafcu: goto label_1cbafc;
        default: break;
    }

    ctx->pc = 0x1cbadcu;

    // 0x1cbadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbae0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbae4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cbae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cbae8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1cbaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbaf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbaf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBAF4u;
    SET_GPR_U32(ctx, 31, 0x1CBAFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBAF4u, 0x1CBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAFCu;
label_1cbafc:
    // 0x1cbafc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbafcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbb04: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1cbb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbb08: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbb0c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbb10: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbb14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbb18: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbb1c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cbb20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cbb24: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cbb24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cbb28u;
}
