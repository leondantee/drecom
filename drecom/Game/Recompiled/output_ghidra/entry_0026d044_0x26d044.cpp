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

// Function: entry_0026d044
// Address: 0x26d044 - 0x26d0a0
void entry_0026d044_0x26d044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d044_0x26d044");
#endif

    ctx->pc = 0x26d044u;

    // 0x26d044: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d048: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d04c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26d050: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d058: 0x0  nop
    ctx->pc = 0x26d058u;
    // NOP
    // 0x26d05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d060: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26d064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d068: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d06c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x26d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x26d070: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x26d074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d078: 0x0  nop
    ctx->pc = 0x26d078u;
    // NOP
    // 0x26d07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d080: 0x0  nop
    ctx->pc = 0x26d080u;
    // NOP
    // 0x26d084: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26D084u;
    {
        const bool branch_taken_0x26d084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d084) {
            ctx->pc = 0x26D0A0u;
            return;
        }
    }
    ctx->pc = 0x26D08Cu;
    // 0x26d08c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x26d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x26d090: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x26d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x26d094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d098: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d09c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26d09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x26d0a0u;
}
