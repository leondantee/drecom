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

// Function: entry_002325a0
// Address: 0x2325a0 - 0x2325e8
void entry_002325a0_0x2325a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002325a0_0x2325a0");
#endif

    switch (ctx->pc) {
        case 0x2325e4u: goto label_2325e4;
        default: break;
    }

    ctx->pc = 0x2325a0u;

    // 0x2325a0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2325a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2325a4: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2325a8: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2325a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2325ac: 0xa4850030  sh          $a1, 0x30($a0)
    ctx->pc = 0x2325acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x2325b0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2325B0u;
    {
        const bool branch_taken_0x2325b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325b0) {
            ctx->pc = 0x2325E8u;
            return;
        }
    }
    ctx->pc = 0x2325B8u;
    // 0x2325b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2325bc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2325bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2325c0: 0xa4830030  sh          $v1, 0x30($a0)
    ctx->pc = 0x2325c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x2325c4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2325c8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2325c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2325cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2325ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2325d0: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2325d4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2325d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2325d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2325dc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2325DCu;
    SET_GPR_U32(ctx, 31, 0x2325E4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2325DCu, 0x2325E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325E4u;
label_2325e4:
    // 0x2325e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2325e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2325e8u;
}
