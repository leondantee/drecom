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

// Function: entry_00292930
// Address: 0x292930 - 0x292980
void entry_00292930_0x292930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292930_0x292930");
#endif

    switch (ctx->pc) {
        case 0x292944u: goto label_292944;
        case 0x292970u: goto label_292970;
        default: break;
    }

    ctx->pc = 0x292930u;

    // 0x292930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292934: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x292934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x292938: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x292938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29293c: 0xc05e990  jal         func_17A640
    ctx->pc = 0x29293Cu;
    SET_GPR_U32(ctx, 31, 0x292944u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x29293Cu, 0x292944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292944u;
label_292944:
    // 0x292944: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x292944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x292948: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x292948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29294c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29294cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x292950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292954: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29295c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x29295cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x292960: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x292960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292964: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x292964u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292968: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x292968u;
    SET_GPR_U32(ctx, 31, 0x292970u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x292968u, 0x292970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292970u;
label_292970:
    // 0x292970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x292970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292974: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x292974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x292978: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x292978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x29297c: 0x0  nop
    ctx->pc = 0x29297cu;
    // NOP
    ctx->pc = 0x292980u;
}
