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

// Function: caseD_4
// Address: 0x1c8ab4 - 0x1c8b4c
void caseD_4_0x1c8ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1c8ab4");
#endif

    switch (ctx->pc) {
        case 0x1c8ad4u: goto label_1c8ad4;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b3cu: goto label_1c8b3c;
        default: break;
    }

    ctx->pc = 0x1c8ab4u;

    // 0x1c8ab4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8ab8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8abc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c8ac0: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1c8ac4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ac8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c8ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c8acc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C8ACCu;
    SET_GPR_U32(ctx, 31, 0x1C8AD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8ACCu, 0x1C8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AD4u;
label_1c8ad4:
    // 0x1c8ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ad8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8adc: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1c8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x1c8ae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8ae4: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x1c8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x1c8ae8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8aec: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1c8af0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8af4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8af8: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8afc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c8b00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8b04: 0xa0441577  sb          $a0, 0x1577($v0)
    ctx->pc = 0x1c8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8b08: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1c8b0c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c8b0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c8b10: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x1c8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x1c8b14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1c8b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1c8b18: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1C8B18u;
    SET_GPR_U32(ctx, 31, 0x1C8B20u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C8B18u, 0x1C8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B20u;
label_1c8b20:
    // 0x1c8b20: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1c8b20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8b24: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1c8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1c8b28: 0x3448ff80  ori         $t0, $v0, 0xFF80
    ctx->pc = 0x1c8b28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1c8b2c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1c8b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c8b30: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1c8b34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1C8B34u;
    SET_GPR_U32(ctx, 31, 0x1C8B3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1C8B34u, 0x1C8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B3Cu;
label_1c8b3c:
    // 0x1c8b3c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8b40: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1c8b40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c8b44: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1c8b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c8b48: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x1c8b48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1c8b4cu;
}
