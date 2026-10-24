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

// Function: caseD_5
// Address: 0x162970 - 0x1629c0
void caseD_5_0x162970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x162970");
#endif

    ctx->pc = 0x162970u;

    // 0x162970: 0x3c02bf16  lui         $v0, 0xBF16
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48918 << 16));
    // 0x162974: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16297c: 0x0  nop
    ctx->pc = 0x16297cu;
    // NOP
    // 0x162980: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x162984: 0x3c02c023  lui         $v0, 0xC023
    ctx->pc = 0x162984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49187 << 16));
    // 0x162988: 0x34425ce2  ori         $v0, $v0, 0x5CE2
    ctx->pc = 0x162988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23778);
    // 0x16298c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16298cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162990: 0x0  nop
    ctx->pc = 0x162990u;
    // NOP
    // 0x162994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x162994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x162998: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x16299c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1629a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1629a4: 0x0  nop
    ctx->pc = 0x1629a4u;
    // NOP
    // 0x1629a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1629a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1629ac: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1629b0: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1629b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1629b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1629b8: 0x0  nop
    ctx->pc = 0x1629b8u;
    // NOP
    // 0x1629bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1629bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1629c0u;
}
