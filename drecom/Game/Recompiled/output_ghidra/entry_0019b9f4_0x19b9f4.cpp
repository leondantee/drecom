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

// Function: entry_0019b9f4
// Address: 0x19b9f4 - 0x19ba44
void entry_0019b9f4_0x19b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b9f4_0x19b9f4");
#endif

    ctx->pc = 0x19b9f4u;

    // 0x19b9f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9f8: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19b9fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba04: 0x0  nop
    ctx->pc = 0x19ba04u;
    // NOP
    // 0x19ba08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ba08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ba0c: 0x0  nop
    ctx->pc = 0x19ba0cu;
    // NOP
    // 0x19ba10: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x19BA10u;
    {
        const bool branch_taken_0x19ba10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ba10) {
            ctx->pc = 0x19BA44u;
            return;
        }
    }
    ctx->pc = 0x19BA18u;
    // 0x19ba18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba1c: 0x24641348  addiu       $a0, $v1, 0x1348
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19ba20: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba24: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x19ba28: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19ba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x19ba2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ba2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba30: 0x0  nop
    ctx->pc = 0x19ba30u;
    // NOP
    // 0x19ba34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19ba34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19ba38: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19ba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x19ba3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19BA3Cu;
    {
        const bool branch_taken_0x19ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba3c) {
            ctx->pc = 0x19BA8Cu;
            return;
        }
    }
    ctx->pc = 0x19BA44u;
}
