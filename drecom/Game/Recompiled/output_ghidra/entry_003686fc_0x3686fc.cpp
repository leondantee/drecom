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

// Function: entry_003686fc
// Address: 0x3686fc - 0x36871c
void entry_003686fc_0x3686fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003686fc_0x3686fc");
#endif

    ctx->pc = 0x3686fcu;

    // 0x3686fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368700: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368704: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368708: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x368708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x36870c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368710: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368718: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x368718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    ctx->pc = 0x36871cu;
}
