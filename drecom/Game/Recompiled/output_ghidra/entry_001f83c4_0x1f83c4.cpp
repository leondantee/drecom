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

// Function: entry_001f83c4
// Address: 0x1f83c4 - 0x1f8418
void entry_001f83c4_0x1f83c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f83c4_0x1f83c4");
#endif

    ctx->pc = 0x1f83c4u;

    // 0x1f83c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83cc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f83ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f83d0: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x1f83d4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f83d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f83d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f83d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f83dc: 0x0  nop
    ctx->pc = 0x1f83dcu;
    // NOP
    // 0x1f83e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f83e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f83e4: 0x0  nop
    ctx->pc = 0x1f83e4u;
    // NOP
    // 0x1f83e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1F83E8u;
    {
        const bool branch_taken_0x1f83e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f83e8) {
            ctx->pc = 0x1F8418u;
            return;
        }
    }
    ctx->pc = 0x1F83F0u;
    // 0x1f83f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f83f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f83f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f83fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f83fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f8400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8404: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8408: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f8408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f840c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f8410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8410u;
    {
        const bool branch_taken_0x1f8410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8410) {
            ctx->pc = 0x1F8438u;
            return;
        }
    }
    ctx->pc = 0x1F8418u;
}
