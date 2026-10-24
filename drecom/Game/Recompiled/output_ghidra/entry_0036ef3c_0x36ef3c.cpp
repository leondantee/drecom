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

// Function: entry_0036ef3c
// Address: 0x36ef3c - 0x36ef54
void entry_0036ef3c_0x36ef3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ef3c_0x36ef3c");
#endif

    ctx->pc = 0x36ef3cu;

    // 0x36ef3c: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x36ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x36ef40: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x36ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x36ef44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ef44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ef48: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x36ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ef4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36ef50: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x36ef50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x36ef54u;
}
