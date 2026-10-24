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

// Function: entry_00172dbc
// Address: 0x172dbc - 0x172dcc
void entry_00172dbc_0x172dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172dbc_0x172dbc");
#endif

    ctx->pc = 0x172dbcu;

    // 0x172dbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x172dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172dc4: 0x0  nop
    ctx->pc = 0x172dc4u;
    // NOP
    // 0x172dc8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->pc = 0x172dccu;
}
