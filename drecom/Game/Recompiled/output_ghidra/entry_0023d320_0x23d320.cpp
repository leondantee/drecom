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

// Function: entry_0023d320
// Address: 0x23d320 - 0x23d348
void entry_0023d320_0x23d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d320_0x23d320");
#endif

    ctx->pc = 0x23d320u;

    // 0x23d320: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x23d320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x23d324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23d324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d328: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d32c: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23d330: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23d334: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23d338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d33c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d340: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d344: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x23d344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    ctx->pc = 0x23d348u;
}
