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

// Function: entry_00125450
// Address: 0x125450 - 0x125488
void entry_00125450_0x125450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125450_0x125450");
#endif

    ctx->pc = 0x125450u;

    // 0x125450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125458: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x125458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x12545c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x12545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x125460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125468: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x125468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x12546c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125470: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x125470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125474: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x125474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x125478: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12547c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12547cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x125480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125484: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x125484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x125488u;
}
