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

// Function: entry_00371ff8
// Address: 0x371ff8 - 0x372010
void entry_00371ff8_0x371ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371ff8_0x371ff8");
#endif

    ctx->pc = 0x371ff8u;

    // 0x371ff8: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371ffc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x372000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x372000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372004: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x372004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372008: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x37200c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x37200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x372010u;
}
