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

// Function: entry_001b729c
// Address: 0x1b729c - 0x1b72ec
void entry_001b729c_0x1b729c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b729c_0x1b729c");
#endif

    switch (ctx->pc) {
        case 0x1b72c0u: goto label_1b72c0;
        default: break;
    }

    ctx->pc = 0x1b729cu;

    // 0x1b729c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b729cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72a0: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b72a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72a8: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b72ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b72acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b72b0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b72b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b72b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b72b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b72b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B72B8u;
    SET_GPR_U32(ctx, 31, 0x1B72C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B72B8u, 0x1B72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72C0u;
label_1b72c0:
    // 0x1b72c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b72c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b72c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72c8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b72c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b72cc: 0x1060041a  beqz        $v1, . + 4 + (0x41A << 2)
    ctx->pc = 0x1B72CCu;
    {
        const bool branch_taken_0x1b72cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72cc) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B72D4u;
    // 0x1b72d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b72d8: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1b72d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b72dc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b72e0: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b72e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b72e4: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x1B72E4u;
    {
        const bool branch_taken_0x1b72e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72e4) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B72ECu;
}
