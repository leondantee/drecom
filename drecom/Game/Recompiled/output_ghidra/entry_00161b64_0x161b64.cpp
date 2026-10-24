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

// Function: entry_00161b64
// Address: 0x161b64 - 0x161b98
void entry_00161b64_0x161b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b64_0x161b64");
#endif

    ctx->pc = 0x161b64u;

    // 0x161b64: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b68: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x161b6c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x161b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161b74: 0x0  nop
    ctx->pc = 0x161b74u;
    // NOP
    // 0x161b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b7c: 0x0  nop
    ctx->pc = 0x161b7cu;
    // NOP
    // 0x161b80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x161B80u;
    {
        const bool branch_taken_0x161b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b80) {
            ctx->pc = 0x161B98u;
            return;
        }
    }
    ctx->pc = 0x161B88u;
    // 0x161b88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161b8c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161b90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x161B90u;
    {
        const bool branch_taken_0x161b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b90) {
            ctx->pc = 0x161BF0u;
            return;
        }
    }
    ctx->pc = 0x161B98u;
}
