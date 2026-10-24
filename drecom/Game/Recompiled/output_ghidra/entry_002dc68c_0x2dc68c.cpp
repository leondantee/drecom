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

// Function: entry_002dc68c
// Address: 0x2dc68c - 0x2dc700
void entry_002dc68c_0x2dc68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc68c_0x2dc68c");
#endif

    switch (ctx->pc) {
        case 0x2dc6b8u: goto label_2dc6b8;
        default: break;
    }

    ctx->pc = 0x2dc68cu;

    // 0x2dc68c: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2dc68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc690: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc694: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2dc694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc698: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc69c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dc6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dc6a4: 0x24061e42  addiu       $a2, $zero, 0x1E42
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7746));
    // 0x2dc6a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dc6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc6ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dc6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dc6b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DC6B0u;
    SET_GPR_U32(ctx, 31, 0x2DC6B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DC6B0u, 0x2DC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6B8u;
label_2dc6b8:
    // 0x2dc6b8: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dc6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc6bc: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6c0: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2dc6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6c4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6c8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2dc6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6cc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6d0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2dc6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc6d8: 0x0  nop
    ctx->pc = 0x2dc6d8u;
    // NOP
    // 0x2dc6dc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dc6e0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2dc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2dc6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dc6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc6e8: 0x0  nop
    ctx->pc = 0x2dc6e8u;
    // NOP
    // 0x2dc6ec: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dc6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2dc6f0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dc6f4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2dc6f8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dc6fc: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x2dc6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2dc700u;
}
