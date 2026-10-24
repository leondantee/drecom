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

// Function: entry_002df808
// Address: 0x2df808 - 0x2df834
void entry_002df808_0x2df808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df808_0x2df808");
#endif

    ctx->pc = 0x2df808u;

    // 0x2df808: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2df808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2df80c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df810: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df810u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df814: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2df814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2df818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df81c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df820: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2df820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2df824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df82c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2df834u;
}
