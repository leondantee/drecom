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

// Function: entry_0021c67c
// Address: 0x21c67c - 0x21c698
void entry_0021c67c_0x21c67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c67c_0x21c67c");
#endif

    ctx->pc = 0x21c67cu;

    // 0x21c67c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21c680: 0x3c034409  lui         $v1, 0x4409
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17417 << 16));
    // 0x21c684: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x21c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x21c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c68c: 0x0  nop
    ctx->pc = 0x21c68cu;
    // NOP
    // 0x21c690: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c694: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x21c694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x21c698u;
}
