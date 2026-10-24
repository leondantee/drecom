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

// Function: entry_0029fc64
// Address: 0x29fc64 - 0x29fcc8
void entry_0029fc64_0x29fc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fc64_0x29fc64");
#endif

    switch (ctx->pc) {
        case 0x29fca8u: goto label_29fca8;
        default: break;
    }

    ctx->pc = 0x29fc64u;

    // 0x29fc64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29fc6c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29fc70: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29fc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29fc74: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x29FC74u;
    {
        const bool branch_taken_0x29fc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc74) {
            ctx->pc = 0x29FCF8u;
            return;
        }
    }
    ctx->pc = 0x29FC7Cu;
    // 0x29fc7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc80: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fc84: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29fc88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29fc88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fc8c: 0x0  nop
    ctx->pc = 0x29fc8cu;
    // NOP
    // 0x29fc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fc94: 0x0  nop
    ctx->pc = 0x29fc94u;
    // NOP
    // 0x29fc98: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x29FC98u;
    {
        const bool branch_taken_0x29fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fc98) {
            ctx->pc = 0x29FCF8u;
            return;
        }
    }
    ctx->pc = 0x29FCA0u;
    // 0x29fca0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FCA0u;
    SET_GPR_U32(ctx, 31, 0x29FCA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FCA0u, 0x29FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCA8u;
label_29fca8:
    // 0x29fca8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fcac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x29fcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x29fcb0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FCB0u;
    {
        const bool branch_taken_0x29fcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcb0) {
            ctx->pc = 0x29FCC8u;
            return;
        }
    }
    ctx->pc = 0x29FCB8u;
    // 0x29fcb8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29fcbc: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x29fcbcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x29fcc0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29FCC0u;
    {
        const bool branch_taken_0x29fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcc0) {
            ctx->pc = 0x29FCF8u;
            return;
        }
    }
    ctx->pc = 0x29FCC8u;
}
