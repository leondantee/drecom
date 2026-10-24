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

// Function: entry_0013abf8
// Address: 0x13abf8 - 0x13ac60
void entry_0013abf8_0x13abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013abf8_0x13abf8");
#endif

    switch (ctx->pc) {
        case 0x13ac54u: goto label_13ac54;
        default: break;
    }

    ctx->pc = 0x13abf8u;

    // 0x13abf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13abfc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x13abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac00: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x13ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x13ac04: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13ac08: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac0c: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x13ac0cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x13ac10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac14: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x13ac14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ac18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac1c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x13ac1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ac20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13ac24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13ac2c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13ac30: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13ac34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13ac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13ac38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ac3c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x13ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x13ac40: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x13ac44: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13ac48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13ac48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13ac4c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x13AC4Cu;
    SET_GPR_U32(ctx, 31, 0x13AC54u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x13AC4Cu, 0x13AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC54u;
label_13ac54:
    // 0x13ac54: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13ac54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13ac58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AC58u;
    {
        const bool branch_taken_0x13ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac58) {
            ctx->pc = 0x13AC70u;
            return;
        }
    }
    ctx->pc = 0x13AC60u;
}
