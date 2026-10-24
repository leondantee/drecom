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

// Function: entry_001f1088
// Address: 0x1f1088 - 0x1f10b0
void entry_001f1088_0x1f1088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1088_0x1f1088");
#endif

    ctx->pc = 0x1f1088u;

    // 0x1f1088: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f108c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f108cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1090: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1094: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1098: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f109c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f10a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f10a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f10a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f10ac: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f10acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1f10b0u;
}
