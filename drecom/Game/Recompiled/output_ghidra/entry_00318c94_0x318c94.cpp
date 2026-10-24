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

// Function: entry_00318c94
// Address: 0x318c94 - 0x318d24
void entry_00318c94_0x318c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318c94_0x318c94");
#endif

    switch (ctx->pc) {
        case 0x318ca4u: goto label_318ca4;
        case 0x318cf0u: goto label_318cf0;
        default: break;
    }

    ctx->pc = 0x318c94u;

label_318c94:
    // 0x318c94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318c98:
    // 0x318c98: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x318c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318c9c:
    // 0x318c9c: 0xc040cbc  jal         func_1032F0
label_318ca0:
    if (ctx->pc == 0x318CA0u) {
        ctx->pc = 0x318CA4u;
        goto label_318ca4;
    }
    ctx->pc = 0x318C9Cu;
    SET_GPR_U32(ctx, 31, 0x318CA4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x318CA4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318CA4u) { return; }
    ctx->pc = 0x318CA4u;
label_318ca4:
    // 0x318ca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x318ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_318ca8:
    // 0x318ca8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cac:
    // 0x318cac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cb0:
    // 0x318cb0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x318cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_318cb4:
    // 0x318cb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cb8:
    // 0x318cb8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cbc:
    // 0x318cbc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x318cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_318cc0:
    // 0x318cc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cc4:
    // 0x318cc4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cc8:
    // 0x318cc8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x318cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_318ccc:
    // 0x318ccc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd0:
    // 0x318cd0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd4:
    // 0x318cd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cd8:
    // 0x318cd8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_318cdc:
    // 0x318cdc: 0x8c8402d0  lw          $a0, 0x2D0($a0)
    ctx->pc = 0x318cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_318ce0:
    // 0x318ce0: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x318ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_318ce4:
    // 0x318ce4: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x318ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_318ce8:
    // 0x318ce8: 0xc040d62  jal         func_103588
label_318cec:
    if (ctx->pc == 0x318CECu) {
        ctx->pc = 0x318CF0u;
        goto label_318cf0;
    }
    ctx->pc = 0x318CE8u;
    SET_GPR_U32(ctx, 31, 0x318CF0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x318CF0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x318CF0u) { return; }
    ctx->pc = 0x318CF0u;
label_318cf0:
    // 0x318cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_318cf4:
    // 0x318cf4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x318cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_318cf8:
    // 0x318cf8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x318cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_318cfc:
    // 0x318cfc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x318cfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_318d00:
    // 0x318d00: 0x10200133  beqz        $at, . + 4 + (0x133 << 2)
label_318d04:
    if (ctx->pc == 0x318D04u) {
        ctx->pc = 0x318D08u;
        goto label_318d08;
    }
    ctx->pc = 0x318D00u;
    {
        const bool branch_taken_0x318d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318d00) {
            ctx->pc = 0x3191D0u;
            return;
        }
    }
    ctx->pc = 0x318D08u;
label_318d08:
    // 0x318d08: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_318d0c:
    // 0x318d0c: 0x24641d50  addiu       $a0, $v1, 0x1D50
    ctx->pc = 0x318d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7504));
label_318d10:
    // 0x318d10: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x318d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_318d14:
    // 0x318d14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_318d18:
    // 0x318d18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x318d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_318d1c:
    // 0x318d1c: 0x600008  jr          $v1
label_318d20:
    if (ctx->pc == 0x318D20u) {
        ctx->pc = 0x318D24u;
        goto label_fallthrough_0x318d1c;
    }
    ctx->pc = 0x318D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x318d1c:
    ctx->pc = 0x318D24u;
}
