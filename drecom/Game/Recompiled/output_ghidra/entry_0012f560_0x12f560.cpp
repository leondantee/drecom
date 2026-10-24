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

// Function: entry_0012f560
// Address: 0x12f560 - 0x12f5fc
void entry_0012f560_0x12f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f560_0x12f560");
#endif

    switch (ctx->pc) {
        case 0x12f590u: goto label_12f590;
        default: break;
    }

    ctx->pc = 0x12f560u;

    // 0x12f560: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12f564: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12f568: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f56c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12f570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f578: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f57c: 0x24063c03  addiu       $a2, $zero, 0x3C03
    ctx->pc = 0x12f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15363));
    // 0x12f580: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f584: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f588: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F588u;
    SET_GPR_U32(ctx, 31, 0x12F590u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F588u, 0x12F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F590u;
label_12f590:
    // 0x12f590: 0x3c024216  lui         $v0, 0x4216
    ctx->pc = 0x12f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16918 << 16));
    // 0x12f594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f598: 0x0  nop
    ctx->pc = 0x12f598u;
    // NOP
    // 0x12f59c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x12f59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x12f5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f5a4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f5a8: 0xac226838  sw          $v0, 0x6838($at)
    ctx->pc = 0x12f5a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3B6838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3B6838u, _value); } while (0);
    // 0x12f5ac: 0xa3808094  sb          $zero, -0x7F6C($gp)
    ctx->pc = 0x12f5acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f5b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f5bc: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x12f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f5c0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x12f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x12f5c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f5d0: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x12f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f5d4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x12f5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x12f5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12f5e4: 0x8c226828  lw          $v0, 0x6828($at)
    ctx->pc = 0x12f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B6828u));
    // 0x12f5e8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x12f5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x12f5ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f5f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f5f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f5f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12f5fcu;
}
