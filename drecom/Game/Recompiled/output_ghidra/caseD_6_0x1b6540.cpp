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

// Function: caseD_6
// Address: 0x1b6540 - 0x1b65b4
void caseD_6_0x1b6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1b6540");
#endif

    switch (ctx->pc) {
        case 0x1b6560u: goto label_1b6560;
        case 0x1b65b0u: goto label_1b65b0;
        default: break;
    }

    ctx->pc = 0x1b6540u;

    // 0x1b6540: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6544: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6548: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b6548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b654c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b6550: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6554: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b6558: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B6558u;
    SET_GPR_U32(ctx, 31, 0x1B6560u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6558u, 0x1B6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6560u;
label_1b6560:
    // 0x1b6560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6564: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1b6564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1b6568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b656c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6570: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1b6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
    // 0x1b6574: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6578: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1b6578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1b657c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6580: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x1b6584: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6584u;
    {
        const bool branch_taken_0x1b6584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6584) {
            ctx->pc = 0x1B65B4u;
            return;
        }
    }
    ctx->pc = 0x1B658Cu;
    // 0x1b658c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6590: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6594: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1b6598: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1b659c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b659cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b65a0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b65a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b65a4: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b65a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b65a8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B65A8u;
    SET_GPR_U32(ctx, 31, 0x1B65B0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B65B0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B65B0u) { return; }
    ctx->pc = 0x1B65B0u;
label_1b65b0:
    // 0x1b65b0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b65b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b65b4u;
}
