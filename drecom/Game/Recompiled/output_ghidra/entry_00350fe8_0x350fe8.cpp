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

// Function: entry_00350fe8
// Address: 0x350fe8 - 0x35102c
void entry_00350fe8_0x350fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350fe8_0x350fe8");
#endif

    ctx->pc = 0x350fe8u;

    // 0x350fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fec: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x350fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x350ff0: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x350ff4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x350ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x350ff8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x350ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x350ffc: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x350ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x351000: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x351004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351008: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x351008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35100c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x35100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351010: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x351010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x351014: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x351018: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x351018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x35101c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35101cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351020: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x351020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351024: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x351024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x351028: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x351028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    ctx->pc = 0x35102cu;
}
