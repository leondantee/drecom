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

// Function: entry_0017221c
// Address: 0x17221c - 0x172230
void entry_0017221c_0x17221c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017221c_0x17221c");
#endif

    ctx->pc = 0x17221cu;

    // 0x17221c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x17221cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x172220: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172228: 0x0  nop
    ctx->pc = 0x172228u;
    // NOP
    // 0x17222c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17222cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x172230u;
}
