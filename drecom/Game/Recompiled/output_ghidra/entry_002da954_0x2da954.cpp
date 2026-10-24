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

// Function: entry_002da954
// Address: 0x2da954 - 0x2da9b8
void entry_002da954_0x2da954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da954_0x2da954");
#endif

    ctx->pc = 0x2da954u;

    // 0x2da954: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da958: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da95c: 0x0  nop
    ctx->pc = 0x2da95cu;
    // NOP
    // 0x2da960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da964: 0x0  nop
    ctx->pc = 0x2da964u;
    // NOP
    // 0x2da968: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2DA968u;
    {
        const bool branch_taken_0x2da968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da968) {
            ctx->pc = 0x2DAA50u;
            return;
        }
    }
    ctx->pc = 0x2DA970u;
    // 0x2da970: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da974: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2da974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2da978: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2da978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2da97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da980: 0x0  nop
    ctx->pc = 0x2da980u;
    // NOP
    // 0x2da984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da988: 0x0  nop
    ctx->pc = 0x2da988u;
    // NOP
    // 0x2da98c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA98Cu;
    {
        const bool branch_taken_0x2da98c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da98c) {
            ctx->pc = 0x2DA9B8u;
            return;
        }
    }
    ctx->pc = 0x2DA994u;
    // 0x2da994: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da998: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2da998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2da99c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2da99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2da9a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9a4: 0x0  nop
    ctx->pc = 0x2da9a4u;
    // NOP
    // 0x2da9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da9ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2da9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2da9b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DA9B0u;
    {
        const bool branch_taken_0x2da9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9b0) {
            ctx->pc = 0x2DAA50u;
            return;
        }
    }
    ctx->pc = 0x2DA9B8u;
}
