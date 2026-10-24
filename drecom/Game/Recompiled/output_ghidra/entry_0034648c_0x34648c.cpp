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

// Function: entry_0034648c
// Address: 0x34648c - 0x3464a4
void entry_0034648c_0x34648c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034648c_0x34648c");
#endif

    ctx->pc = 0x34648cu;

    // 0x34648c: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x34648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x346490: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x346490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x346494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346498: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34649c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464a0: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x3464a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    ctx->pc = 0x3464a4u;
}
