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

// Function: entry_002d2be0
// Address: 0x2d2be0 - 0x2d2d48
void entry_002d2be0_0x2d2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2be0_0x2d2be0");
#endif

    switch (ctx->pc) {
        case 0x2d2c08u: goto label_2d2c08;
        case 0x2d2c3cu: goto label_2d2c3c;
        case 0x2d2c70u: goto label_2d2c70;
        case 0x2d2c94u: goto label_2d2c94;
        case 0x2d2cb8u: goto label_2d2cb8;
        case 0x2d2cdcu: goto label_2d2cdc;
        case 0x2d2d00u: goto label_2d2d00;
        case 0x2d2d24u: goto label_2d2d24;
        default: break;
    }

    ctx->pc = 0x2d2be0u;

    // 0x2d2be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2be4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d2be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d2be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d2bec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d2bf0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2D2BF0u;
    {
        const bool branch_taken_0x2d2bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bf0) {
            ctx->pc = 0x2D2D48u;
            return;
        }
    }
    ctx->pc = 0x2D2BF8u;
    // 0x2d2bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d2c00: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x2D2C00u;
    SET_GPR_U32(ctx, 31, 0x2D2C08u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x2D2C00u, 0x2D2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C08u;
label_2d2c08:
    // 0x2d2c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2c0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c10: 0xac431354  sw          $v1, 0x1354($v0)
    ctx->pc = 0x2d2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 3));
    // 0x2d2c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2c18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c1c: 0xac431350  sw          $v1, 0x1350($v0)
    ctx->pc = 0x2d2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4944), GPR_U32(ctx, 3));
    // 0x2d2c20: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2d2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2d2c24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d2c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d2c28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2d2c28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d2c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d2c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d2c30: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2d2c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d2c34: 0xc0561d4  jal         func_158750
    ctx->pc = 0x2D2C34u;
    SET_GPR_U32(ctx, 31, 0x2D2C3Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x2D2C34u, 0x2D2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C3Cu;
label_2d2c3c:
    // 0x2d2c3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d2c40: 0x24428760  addiu       $v0, $v0, -0x78A0
    ctx->pc = 0x2d2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936416));
    // 0x2d2c44: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2c48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d2c48u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398760u));
    // 0x2d2c4c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d2c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d2c50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c58: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2c5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2c60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2c64: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2c68: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2C68u;
    SET_GPR_U32(ctx, 31, 0x2D2C70u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2C68u, 0x2D2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C70u;
label_2d2c70:
    // 0x2d2c70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2c78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c7c: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2d2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2d2c80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2c84: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2c88: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2c8c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C94u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2C8Cu, 0x2D2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2C94u;
label_2d2c94:
    // 0x2d2c94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2c98: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2c9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ca0: 0x24450480  addiu       $a1, $v0, 0x480
    ctx->pc = 0x2d2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2d2ca4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2ca8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2cac: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2cb0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2CB0u;
    SET_GPR_U32(ctx, 31, 0x2D2CB8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CB0u, 0x2D2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CB8u;
label_2d2cb8:
    // 0x2d2cb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2cbc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2cc4: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x2d2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2d2cc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2ccc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2cd0: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2cd4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2CD4u;
    SET_GPR_U32(ctx, 31, 0x2D2CDCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CD4u, 0x2D2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2CDCu;
label_2d2cdc:
    // 0x2d2cdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ce0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2ce8: 0x24450640  addiu       $a1, $v0, 0x640
    ctx->pc = 0x2d2ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2d2cec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2cf0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2cf4: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2cf8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2CF8u;
    SET_GPR_U32(ctx, 31, 0x2D2D00u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2CF8u, 0x2D2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D00u;
label_2d2d00:
    // 0x2d2d00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2d08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d0c: 0x24450700  addiu       $a1, $v0, 0x700
    ctx->pc = 0x2d2d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x2d2d10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2d14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2d18: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2d1c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2D1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2D24u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2D1Cu, 0x2D2D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D24u;
label_2d2d24:
    // 0x2d2d24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d28: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2d2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2d30: 0x244507c0  addiu       $a1, $v0, 0x7C0
    ctx->pc = 0x2d2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x2d2d34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d2d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2d38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d2d3c: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d2d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d2d40: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D2D40u;
    SET_GPR_U32(ctx, 31, 0x2D2D48u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D2D40u, 0x2D2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2D48u;
}
