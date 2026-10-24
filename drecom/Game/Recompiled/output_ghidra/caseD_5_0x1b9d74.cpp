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

// Function: caseD_5
// Address: 0x1b9d74 - 0x1b9de4
void caseD_5_0x1b9d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b9d74");
#endif

    switch (ctx->pc) {
        case 0x1b9dacu: goto label_1b9dac;
        default: break;
    }

    ctx->pc = 0x1b9d74u;

    // 0x1b9d74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b9d78: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b9d7c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1b9d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1b9d80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b9d84: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b9d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b9d88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b9d90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b9d94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b9d98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b9d9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9da4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B9DA4u;
    SET_GPR_U32(ctx, 31, 0x1B9DACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9DA4u, 0x1B9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DACu;
label_1b9dac:
    // 0x1b9dac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9db0: 0x8c621b64  lw          $v0, 0x1B64($v1)
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1b9db4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9DB4u;
    {
        const bool branch_taken_0x1b9db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9db4) {
            ctx->pc = 0x1B9DE4u;
            return;
        }
    }
    ctx->pc = 0x1B9DBCu;
    // 0x1b9dbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9dc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9dc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b9dc8: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x1b9dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b9dcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b9dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9dd0: 0x24820180  addiu       $v0, $a0, 0x180
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b9dd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9dd8: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b9ddc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B9DDCu;
    SET_GPR_U32(ctx, 31, 0x1B9DE4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9DE4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9DE4u) { return; }
    ctx->pc = 0x1B9DE4u;
}
