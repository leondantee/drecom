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

// Function: entry_0034d97c
// Address: 0x34d97c - 0x34da30
void entry_0034d97c_0x34d97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d97c_0x34d97c");
#endif

    switch (ctx->pc) {
        case 0x34d9a8u: goto label_34d9a8;
        default: break;
    }

    ctx->pc = 0x34d97cu;

    // 0x34d97c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d980: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d984: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34d984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d988: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d98c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34d990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34d994: 0x24060f30  addiu       $a2, $zero, 0xF30
    ctx->pc = 0x34d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x34d998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34d998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d99c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34d99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d9a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34D9A0u;
    SET_GPR_U32(ctx, 31, 0x34D9A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34D9A0u, 0x34D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D9A8u;
label_34d9a8:
    // 0x34d9a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9ac: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34d9b0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34d9b4: 0x34c70001  ori         $a3, $a2, 0x1
    ctx->pc = 0x34d9b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x34d9b8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x34d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x34d9bc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d9c0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9c4: 0xa04810a8  sb          $t0, 0x10A8($v0)
    ctx->pc = 0x34d9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 8));
    // 0x34d9c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9cc: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x34d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34d9d0: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34d9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34d9d4: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x34d9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34d9d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d9dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34d9e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d9e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34d9e8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x34d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x34d9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d9f0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34d9f4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d9f8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34d9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34d9fc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x34d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x34da00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34da00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da04: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da08: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34da0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34da0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34da10: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da14: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34da18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34da1c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x34da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34da20: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34da20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34da24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34da24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34da28: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34da2c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34da2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x34da30u;
}
