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

// Function: entry_002ecd6c
// Address: 0x2ecd6c - 0x2ecdb0
void entry_002ecd6c_0x2ecd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecd6c_0x2ecd6c");
#endif

    ctx->pc = 0x2ecd6cu;

    // 0x2ecd6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ecd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ecd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd74: 0x0  nop
    ctx->pc = 0x2ecd74u;
    // NOP
    // 0x2ecd78: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecd7c: 0x3c0341f1  lui         $v1, 0x41F1
    ctx->pc = 0x2ecd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16881 << 16));
    // 0x2ecd80: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x2ecd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ecd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd88: 0x0  nop
    ctx->pc = 0x2ecd88u;
    // NOP
    // 0x2ecd8c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecd90: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ecd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ecd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd98: 0x0  nop
    ctx->pc = 0x2ecd98u;
    // NOP
    // 0x2ecd9c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ecd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ecda0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ecda4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecda8: 0x0  nop
    ctx->pc = 0x2ecda8u;
    // NOP
    // 0x2ecdac: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ecdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x2ecdb0u;
}
