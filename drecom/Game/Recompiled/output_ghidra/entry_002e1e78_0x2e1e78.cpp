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

// Function: entry_002e1e78
// Address: 0x2e1e78 - 0x2e1eb4
void entry_002e1e78_0x2e1e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1e78_0x2e1e78");
#endif

    ctx->pc = 0x2e1e78u;

    // 0x2e1e78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1e7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e1e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1e88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e1e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e1e90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e1e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1e98: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1e9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e1e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1ea0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1ea4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e1ea8: 0xc6a011f8  lwc1        $f0, 0x11F8($s5)
    ctx->pc = 0x2e1ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1eac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2e1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1eb0: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x2e1eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    ctx->pc = 0x2e1eb4u;
}
