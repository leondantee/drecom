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

// Function: entry_0037cb8c
// Address: 0x37cb8c - 0x37cbe4
void entry_0037cb8c_0x37cb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037cb8c_0x37cb8c");
#endif

    ctx->pc = 0x37cb8cu;

    // 0x37cb8c: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x37cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cb90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb94: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x37cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x37cb98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb9c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x37cba0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cba4: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x37cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x37cba8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x37cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37cbac: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37cbb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37cbb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbbc: 0x0  nop
    ctx->pc = 0x37cbbcu;
    // NOP
    // 0x37cbc0: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x37cbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x37cbc4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x37cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x37cbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbcc: 0x0  nop
    ctx->pc = 0x37cbccu;
    // NOP
    // 0x37cbd0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x37cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x37cbd4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cbd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cbd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cbdc: 0x0  nop
    ctx->pc = 0x37cbdcu;
    // NOP
    // 0x37cbe0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x37cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    ctx->pc = 0x37cbe4u;
}
