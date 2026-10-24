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

// Function: entry_00316bc8
// Address: 0x316bc8 - 0x316c5c
void entry_00316bc8_0x316bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316bc8_0x316bc8");
#endif

    switch (ctx->pc) {
        case 0x316bd8u: goto label_316bd8;
        case 0x316c28u: goto label_316c28;
        default: break;
    }

    ctx->pc = 0x316bc8u;

label_316bc8:
    // 0x316bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bcc:
    // 0x316bcc: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x316bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_316bd0:
    // 0x316bd0: 0xc040cbc  jal         func_1032F0
label_316bd4:
    if (ctx->pc == 0x316BD4u) {
        ctx->pc = 0x316BD8u;
        goto label_316bd8;
    }
    ctx->pc = 0x316BD0u;
    SET_GPR_U32(ctx, 31, 0x316BD8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x316BD8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316BD8u) { return; }
    ctx->pc = 0x316BD8u;
label_316bd8:
    // 0x316bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316bdc:
    // 0x316bdc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316be0:
    // 0x316be0: 0x8ce602d0  lw          $a2, 0x2D0($a3)
    ctx->pc = 0x316be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 720)));
label_316be4:
    // 0x316be4: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x316be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_316be8:
    // 0x316be8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bec:
    // 0x316bec: 0x8c8502d0  lw          $a1, 0x2D0($a0)
    ctx->pc = 0x316becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_316bf0:
    // 0x316bf0: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x316bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_316bf4:
    // 0x316bf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316bf8:
    // 0x316bf8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_316bfc:
    // 0x316bfc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x316bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_316c00:
    // 0x316c00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c04:
    // 0x316c04: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x316c04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c08:
    // 0x316c08: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x316c08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c0c:
    // 0x316c0c: 0x8d6202d0  lw          $v0, 0x2D0($t3)
    ctx->pc = 0x316c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 720)));
label_316c10:
    // 0x316c10: 0x8c8a02d0  lw          $t2, 0x2D0($a0)
    ctx->pc = 0x316c10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_316c14:
    // 0x316c14: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x316c14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_316c18:
    // 0x316c18: 0x8d8502d0  lw          $a1, 0x2D0($t4)
    ctx->pc = 0x316c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 720)));
label_316c1c:
    // 0x316c1c: 0x24460104  addiu       $a2, $v0, 0x104
    ctx->pc = 0x316c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
label_316c20:
    // 0x316c20: 0xc040d62  jal         func_103588
label_316c24:
    if (ctx->pc == 0x316C24u) {
        ctx->pc = 0x316C28u;
        goto label_316c28;
    }
    ctx->pc = 0x316C20u;
    SET_GPR_U32(ctx, 31, 0x316C28u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x316C28u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316C28u) { return; }
    ctx->pc = 0x316C28u;
label_316c28:
    // 0x316c28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_316c2c:
    // 0x316c2c: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x316c2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_316c30:
    // 0x316c30: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x316c30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_316c34:
    // 0x316c34: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x316c34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_316c38:
    // 0x316c38: 0x102005ca  beqz        $at, . + 4 + (0x5CA << 2)
label_316c3c:
    if (ctx->pc == 0x316C3Cu) {
        ctx->pc = 0x316C40u;
        goto label_316c40;
    }
    ctx->pc = 0x316C38u;
    {
        const bool branch_taken_0x316c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x316c38) {
            ctx->pc = 0x318364u;
            return;
        }
    }
    ctx->pc = 0x316C40u;
label_316c40:
    // 0x316c40: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x316c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_316c44:
    // 0x316c44: 0x24891d30  addiu       $t1, $a0, 0x1D30
    ctx->pc = 0x316c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 7472));
label_316c48:
    // 0x316c48: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_316c4c:
    // 0x316c4c: 0xc92021  addu        $a0, $a2, $t1
    ctx->pc = 0x316c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_316c50:
    // 0x316c50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316c54:
    // 0x316c54: 0xa00008  jr          $a1
label_316c58:
    if (ctx->pc == 0x316C58u) {
        ctx->pc = 0x316C5Cu;
        goto label_fallthrough_0x316c54;
    }
    ctx->pc = 0x316C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x316c54:
    ctx->pc = 0x316C5Cu;
}
