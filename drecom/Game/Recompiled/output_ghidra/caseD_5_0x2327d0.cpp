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
// Address: 0x2327d0 - 0x232830
void caseD_5_0x2327d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2327d0");
#endif

    switch (ctx->pc) {
        case 0x23282cu: goto label_23282c;
        default: break;
    }

    ctx->pc = 0x2327d0u;

    // 0x2327d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2327d4: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x2327d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2327d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2327dc: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x2327dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x2327e0: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2327E0u;
    {
        const bool branch_taken_0x2327e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2327e0) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x2327E8u;
    // 0x2327e8: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x2327e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2327ec: 0x8e960034  lw          $s6, 0x34($s4)
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2327f0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x2327f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2327f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2327f8: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x2327f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
    // 0x2327fc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2327fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x232800: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232804: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x232804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x232808: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23280c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x23280cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x232810: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x232810u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232814: 0x2402051e  addiu       $v0, $zero, 0x51E
    ctx->pc = 0x232814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x232818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23281c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x232820: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232820u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232824: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x232824u;
    SET_GPR_U32(ctx, 31, 0x23282Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x232824u, 0x23282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23282Cu;
label_23282c:
    // 0x23282c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x23282cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x232830u;
}
