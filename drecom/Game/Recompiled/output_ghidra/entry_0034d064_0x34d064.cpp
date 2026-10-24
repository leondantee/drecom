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

// Function: entry_0034d064
// Address: 0x34d064 - 0x34d094
void entry_0034d064_0x34d064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d064_0x34d064");
#endif

    ctx->pc = 0x34d064u;

    // 0x34d064: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d068: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d06c: 0xa0a00028  sb          $zero, 0x28($a1)
    ctx->pc = 0x34d06cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d070: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34d070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d074: 0x24e31330  addiu       $v1, $a3, 0x1330
    ctx->pc = 0x34d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x34d078: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x34d078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d07c: 0x3c053ccc  lui         $a1, 0x3CCC
    ctx->pc = 0x34d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15564 << 16));
    // 0x34d080: 0x34b0cccd  ori         $s0, $a1, 0xCCCD
    ctx->pc = 0x34d080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x34d084: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34d084u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d088: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34d08c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d090: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x34d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    ctx->pc = 0x34d094u;
}
