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

// Function: entry_0026a5f8
// Address: 0x26a5f8 - 0x26a638
void entry_0026a5f8_0x26a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a5f8_0x26a5f8");
#endif

    ctx->pc = 0x26a5f8u;

    // 0x26a5f8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a608: 0x0  nop
    ctx->pc = 0x26a608u;
    // NOP
    // 0x26a60c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a610: 0x0  nop
    ctx->pc = 0x26a610u;
    // NOP
    // 0x26a614: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A614u;
    {
        const bool branch_taken_0x26a614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a614) {
            ctx->pc = 0x26A638u;
            return;
        }
    }
    ctx->pc = 0x26A61Cu;
    // 0x26a61c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a620: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x26a620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x26a624: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a62c: 0x0  nop
    ctx->pc = 0x26a62cu;
    // NOP
    // 0x26a630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a634: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x26a638u;
}
