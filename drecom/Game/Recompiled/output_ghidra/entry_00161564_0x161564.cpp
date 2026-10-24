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

// Function: entry_00161564
// Address: 0x161564 - 0x161588
void entry_00161564_0x161564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161564_0x161564");
#endif

    ctx->pc = 0x161564u;

    // 0x161564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161568: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16156c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x161570: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161574: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161578: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16157c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16157cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161580: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161584: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    ctx->pc = 0x161588u;
}
