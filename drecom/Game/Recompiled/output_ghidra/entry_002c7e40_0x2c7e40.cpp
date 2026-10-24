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

// Function: entry_002c7e40
// Address: 0x2c7e40 - 0x2c7e80
void entry_002c7e40_0x2c7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7e40_0x2c7e40");
#endif

    ctx->pc = 0x2c7e40u;

    // 0x2c7e40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e44: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2c7e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c7e48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c7e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e50: 0x0  nop
    ctx->pc = 0x2c7e50u;
    // NOP
    // 0x2c7e54: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2c7e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2c7e58: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2c7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2c7e5c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c7e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7e64: 0x0  nop
    ctx->pc = 0x2c7e64u;
    // NOP
    // 0x2c7e68: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2c7e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2c7e6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c7e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c7e70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7e74: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c7e78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c7e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c7e7c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2c7e80u;
}
