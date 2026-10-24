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
// Address: 0x1bc574 - 0x1bc5d0
void caseD_4_0x1bc574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1bc574");
#endif

    switch (ctx->pc) {
        case 0x1bc59cu: goto label_1bc59c;
        default: break;
    }

    ctx->pc = 0x1bc574u;

    // 0x1bc574: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc578: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc57c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1bc57cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1bc580: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bc584: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc588: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1bc58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bc590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bc594: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BC594u;
    SET_GPR_U32(ctx, 31, 0x1BC59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BC594u, 0x1BC59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC59Cu;
label_1bc59c:
    // 0x1bc59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc5a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc5a4: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1bc5a8: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1bc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1bc5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc5b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc5b4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bc5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1bc5b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc5bc: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1bc5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1bc5c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc5c4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1bc5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bc5c8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bc5cc: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x1bc5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1bc5d0u;
}
