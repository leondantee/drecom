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

// Function: entry_0016126c
// Address: 0x16126c - 0x161298
void entry_0016126c_0x16126c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016126c_0x16126c");
#endif

    ctx->pc = 0x16126cu;

    // 0x16126c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161270: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161278: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16127c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16127cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161280: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161284: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161288: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16128c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16128cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x161290: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x161290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161294: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    ctx->pc = 0x161298u;
}
