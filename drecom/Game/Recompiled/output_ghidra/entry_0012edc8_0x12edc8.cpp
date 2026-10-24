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

// Function: entry_0012edc8
// Address: 0x12edc8 - 0x12ee08
void entry_0012edc8_0x12edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012edc8_0x12edc8");
#endif

    ctx->pc = 0x12edc8u;

    // 0x12edc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12edcc: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x12edccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x12edd0: 0xa21611ef  sb          $s6, 0x11EF($s0)
    ctx->pc = 0x12edd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 22));
    // 0x12edd4: 0xa61511f2  sh          $s5, 0x11F2($s0)
    ctx->pc = 0x12edd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 21));
    // 0x12edd8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12eddc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ede0: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x12ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ede4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ede8: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12ede8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12edec: 0xa21711f0  sb          $s7, 0x11F0($s0)
    ctx->pc = 0x12edecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 23));
    // 0x12edf0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12edf4: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x12edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x12edf8: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x12edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12edfc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12ee00: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12EE00u;
    SET_GPR_U32(ctx, 31, 0x12EE08u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12EE08u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12EE08u) { return; }
    ctx->pc = 0x12EE08u;
}
