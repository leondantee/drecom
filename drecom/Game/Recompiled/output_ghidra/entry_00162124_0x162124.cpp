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

// Function: entry_00162124
// Address: 0x162124 - 0x162164
void entry_00162124_0x162124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162124_0x162124");
#endif

    ctx->pc = 0x162124u;

    // 0x162124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162128: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16212c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162130: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162134: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162138: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16213c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162140: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162148: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x16214c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162150: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162154: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162158: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16215c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162160: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    ctx->pc = 0x162164u;
}
