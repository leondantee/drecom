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

// Function: entry_00225eb8
// Address: 0x225eb8 - 0x225f34
void entry_00225eb8_0x225eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225eb8_0x225eb8");
#endif

    switch (ctx->pc) {
        case 0x225eccu: goto label_225ecc;
        default: break;
    }

    ctx->pc = 0x225eb8u;

    // 0x225eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ec0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x225ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x225ec4: 0xc067654  jal         func_19D950
    ctx->pc = 0x225EC4u;
    SET_GPR_U32(ctx, 31, 0x225ECCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x225EC4u, 0x225ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225ECCu;
label_225ecc:
    // 0x225ecc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x225ed0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x225ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225ed4: 0x0  nop
    ctx->pc = 0x225ed4u;
    // NOP
    // 0x225ed8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x225ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x225edc: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x225edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x225ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225ee4: 0x0  nop
    ctx->pc = 0x225ee4u;
    // NOP
    // 0x225ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225eec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ef0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225ef4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x225ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x225ef8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x225efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225f08: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x225f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x225f0c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x225f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225f14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225f1c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x225f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x225f20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225f24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225f28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x225f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x225f2c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x225F2Cu;
    {
        const bool branch_taken_0x225f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f2c) {
            ctx->pc = 0x226208u;
            return;
        }
    }
    ctx->pc = 0x225F34u;
}
