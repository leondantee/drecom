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

// Function: caseD_0
// Address: 0x2e6c44 - 0x2e6cc4
void caseD_0_0x2e6c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2e6c44");
#endif

    switch (ctx->pc) {
        case 0x2e6c64u: goto label_2e6c64;
        default: break;
    }

    ctx->pc = 0x2e6c44u;

    // 0x2e6c44: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6c4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e6c50: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x2e6c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x2e6c54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e6c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6c58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e6c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e6c5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E6C5Cu, 0x2E6C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6C64u;
label_2e6c64:
    // 0x2e6c64: 0x3c0241b4  lui         $v0, 0x41B4
    ctx->pc = 0x2e6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16820 << 16));
    // 0x2e6c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6c6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6c70: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e6c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2e6c74: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2e6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2e6c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6c7c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6c80: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e6c84: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6c88: 0x245510b0  addiu       $s5, $v0, 0x10B0
    ctx->pc = 0x2e6c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2e6c8c: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x2e6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x2e6c90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e6c94: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2e6c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6c98: 0xaea400f0  sw          $a0, 0xF0($s5)
    ctx->pc = 0x2e6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 4));
    // 0x2e6c9c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2e6c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e6ca0: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x2e6ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6ca4: 0xa0e610a8  sb          $a2, 0x10A8($a3)
    ctx->pc = 0x2e6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e6ca8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6cac: 0x8fa900e8  lw          $t1, 0xE8($sp)
    ctx->pc = 0x2e6cacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6cb0: 0xa52810a6  sh          $t0, 0x10A6($t1)
    ctx->pc = 0x2e6cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4262), (uint16_t)GPR_U32(ctx, 8));
    // 0x2e6cb4: 0x8faa00e8  lw          $t2, 0xE8($sp)
    ctx->pc = 0x2e6cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e6cb8: 0x91420002  lbu         $v0, 0x2($t2)
    ctx->pc = 0x2e6cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2e6cbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2e6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e6cc0: 0xa1430002  sb          $v1, 0x2($t2)
    ctx->pc = 0x2e6cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e6cc4u;
}
