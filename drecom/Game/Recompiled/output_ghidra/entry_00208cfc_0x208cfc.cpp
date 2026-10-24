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

// Function: entry_00208cfc
// Address: 0x208cfc - 0x208d30
void entry_00208cfc_0x208cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208cfc_0x208cfc");
#endif

    ctx->pc = 0x208cfcu;

    // 0x208cfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208d00: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208d00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x208d04: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x208d08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x208d0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x208d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x208d10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208d14: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x208d18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d1c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x208d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208d24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x208d28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208d2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x208d30u;
}
