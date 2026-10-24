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

// Function: entry_001f8964
// Address: 0x1f8964 - 0x1f89b8
void entry_001f8964_0x1f8964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8964_0x1f8964");
#endif

    ctx->pc = 0x1f8964u;

    // 0x1f8964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8968: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f896c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8970: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x1f8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x1f8974: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f8974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f8978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f897c: 0x0  nop
    ctx->pc = 0x1f897cu;
    // NOP
    // 0x1f8980: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f8980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8984: 0x0  nop
    ctx->pc = 0x1f8984u;
    // NOP
    // 0x1f8988: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1F8988u;
    {
        const bool branch_taken_0x1f8988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8988) {
            ctx->pc = 0x1F89B8u;
            return;
        }
    }
    ctx->pc = 0x1F8990u;
    // 0x1f8990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8994: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8998: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f899c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f89a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f89a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f89a4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f89a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f89ac: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f89b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89D8u;
            return;
        }
    }
    ctx->pc = 0x1F89B8u;
}
