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

// Function: entry_00172994
// Address: 0x172994 - 0x1729a8
void entry_00172994_0x172994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172994_0x172994");
#endif

    ctx->pc = 0x172994u;

    // 0x172994: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x172998: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17299c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17299cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729a0: 0x0  nop
    ctx->pc = 0x1729a0u;
    // NOP
    // 0x1729a4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1729a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x1729a8u;
}
