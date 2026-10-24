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
// Address: 0x1b613c - 0x1b618c
void caseD_4_0x1b613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b613c");
#endif

    switch (ctx->pc) {
        case 0x1b6160u: goto label_1b6160;
        default: break;
    }

    ctx->pc = 0x1b613cu;

    // 0x1b613c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6140: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6144: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b6144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b6148: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b614c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b614cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6150: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6154: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b6158: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B6158u;
    SET_GPR_U32(ctx, 31, 0x1B6160u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6158u, 0x1B6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6160u;
label_1b6160:
    // 0x1b6160: 0x3c0340a3  lui         $v1, 0x40A3
    ctx->pc = 0x1b6160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16547 << 16));
    // 0x1b6164: 0x34653334  ori         $a1, $v1, 0x3334
    ctx->pc = 0x1b6164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13108);
    // 0x1b6168: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b6168u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b616c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6170: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b6170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
    // 0x1b6174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6178: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1b6178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1b617c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6180: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1b6180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b6184: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b6184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b6188: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b6188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b618cu;
}
