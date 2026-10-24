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

// Function: entry_0015ee6c
// Address: 0x15ee6c - 0x15ee94
void entry_0015ee6c_0x15ee6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ee6c_0x15ee6c");
#endif

    ctx->pc = 0x15ee6cu;

    // 0x15ee6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ee70: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ee74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15ee78: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ee78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ee7c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ee7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee80: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ee80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ee88: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ee8c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ee90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15ee94u;
}
