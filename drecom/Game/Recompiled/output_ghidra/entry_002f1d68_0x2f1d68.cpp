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

// Function: entry_002f1d68
// Address: 0x2f1d68 - 0x2f1d90
void entry_002f1d68_0x2f1d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1d68_0x2f1d68");
#endif

    ctx->pc = 0x2f1d68u;

    // 0x2f1d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f1d6c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1d70: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x2f1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x2f1d74: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2f1d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2f1d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f1d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1d7c: 0x0  nop
    ctx->pc = 0x2f1d7cu;
    // NOP
    // 0x2f1d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f1d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f1d84: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1d88: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f1d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f1d8c: 0x0  nop
    ctx->pc = 0x2f1d8cu;
    // NOP
    ctx->pc = 0x2f1d90u;
}
