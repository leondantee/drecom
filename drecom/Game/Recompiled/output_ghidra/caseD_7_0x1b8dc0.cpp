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

// Function: caseD_7
// Address: 0x1b8dc0 - 0x1b8e38
void caseD_7_0x1b8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1b8dc0");
#endif

    switch (ctx->pc) {
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8e34u: goto label_1b8e34;
        default: break;
    }

    ctx->pc = 0x1b8dc0u;

    // 0x1b8dc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8dc4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b8dc8: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x1b8dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1b8dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8dd0: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1b8dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b8dd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8dd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b8ddc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1b8de0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b8de4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1b8de8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b8decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8df0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B8DF0u;
    SET_GPR_U32(ctx, 31, 0x1B8DF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8DF0u, 0x1B8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DF8u;
label_1b8df8:
    // 0x1b8df8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8dfc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1b8e00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8E00u;
    {
        const bool branch_taken_0x1b8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8e00) {
            ctx->pc = 0x1B8E38u;
            return;
        }
    }
    ctx->pc = 0x1B8E08u;
    // 0x1b8e08: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8e0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8e10: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x1b8e14: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1b8e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1b8e18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b8e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b8e1c: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b8e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b8e20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b8e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b8e24: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b8e28: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1b8e28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b8e2c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E34u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B8E34u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B8E34u) { return; }
    ctx->pc = 0x1B8E34u;
label_1b8e34:
    // 0x1b8e34: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b8e34u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b8e38u;
}
