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

// Function: caseD_3
// Address: 0x22a564 - 0x22a5a4
void caseD_3_0x22a564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x22a564");
#endif

    ctx->pc = 0x22a564u;

    // 0x22a564: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a568: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a56c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x22a570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a574: 0x0  nop
    ctx->pc = 0x22a574u;
    // NOP
    // 0x22a578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a57c: 0x0  nop
    ctx->pc = 0x22a57cu;
    // NOP
    // 0x22a580: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22A580u;
    {
        const bool branch_taken_0x22a580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a580) {
            ctx->pc = 0x22A5A4u;
            return;
        }
    }
    ctx->pc = 0x22A588u;
    // 0x22a588: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22a58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a590: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a594: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a598: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22a598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22a59c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22A59Cu;
    {
        const bool branch_taken_0x22a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a59c) {
            ctx->pc = 0x22A5FCu;
            return;
        }
    }
    ctx->pc = 0x22A5A4u;
}
