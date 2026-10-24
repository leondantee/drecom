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

// Function: entry_00186e30
// Address: 0x186e30 - 0x186e60
void entry_00186e30_0x186e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e30_0x186e30");
#endif

    ctx->pc = 0x186e30u;

    // 0x186e30: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x186e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e34: 0x3c02450e  lui         $v0, 0x450E
    ctx->pc = 0x186e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17678 << 16));
    // 0x186e38: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x186e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x186e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e40: 0x0  nop
    ctx->pc = 0x186e40u;
    // NOP
    // 0x186e44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e48: 0x0  nop
    ctx->pc = 0x186e48u;
    // NOP
    // 0x186e4c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x186E4Cu;
    {
        const bool branch_taken_0x186e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e4c) {
            ctx->pc = 0x186E60u;
            return;
        }
    }
    ctx->pc = 0x186E54u;
    // 0x186e54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x186e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x186e58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x186E58u;
    {
        const bool branch_taken_0x186e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e58) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186E60u;
}
