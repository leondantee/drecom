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

// Function: Em00_R1_meta_def_wait
// Address: 0x2d3b70 - 0x2d3c74
void Em00_R1_meta_def_wait_0x2d3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_meta_def_wait_0x2d3b70");
#endif

    switch (ctx->pc) {
        case 0x2d3bc4u: goto label_2d3bc4;
        case 0x2d3bfcu: goto label_2d3bfc;
        case 0x2d3c08u: goto label_2d3c08;
        case 0x2d3c18u: goto label_2d3c18;
        case 0x2d3c24u: goto label_2d3c24;
        default: break;
    }

    ctx->pc = 0x2d3b70u;

    // 0x2d3b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3b74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3b78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d3b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3b80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d3b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3b84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d3b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d3b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3b8c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3B8Cu;
    {
        const bool branch_taken_0x2d3b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3b8c) {
            ctx->pc = 0x2D3BDCu;
            goto label_2d3bdc;
        }
    }
    ctx->pc = 0x2D3B94u;
    // 0x2d3b94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3B94u;
    {
        const bool branch_taken_0x2d3b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b94) {
            ctx->pc = 0x2D3BA4u;
            goto label_2d3ba4;
        }
    }
    ctx->pc = 0x2D3B9Cu;
    // 0x2d3b9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2D3B9Cu;
    {
        const bool branch_taken_0x2d3b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3b9c) {
            ctx->pc = 0x2D3C64u;
            goto label_2d3c64;
        }
    }
    ctx->pc = 0x2D3BA4u;
label_2d3ba4:
    // 0x2d3ba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3ba8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3bac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3bb0: 0x24065a28  addiu       $a2, $zero, 0x5A28
    ctx->pc = 0x2d3bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23080));
    // 0x2d3bb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d3bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3bb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d3bbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D3BBCu;
    SET_GPR_U32(ctx, 31, 0x2D3BC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D3BBCu, 0x2D3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BC4u;
label_2d3bc4:
    // 0x2d3bc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3bc8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d3bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3bcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3bd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d3bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d3bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3bd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d3bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d3bdc:
    // 0x2d3bdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3be0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d3be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3be8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d3be8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3bec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3bf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3bf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3bf4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D3BF4u;
    SET_GPR_U32(ctx, 31, 0x2D3BFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D3BF4u, 0x2D3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BFCu;
label_2d3bfc:
    // 0x2d3bfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D3C00u;
    SET_GPR_U32(ctx, 31, 0x2D3C08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D3C00u, 0x2D3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C08u;
label_2d3c08:
    // 0x2d3c08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d3c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d3c10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D3C10u;
    SET_GPR_U32(ctx, 31, 0x2D3C18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D3C10u, 0x2D3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C18u;
label_2d3c18:
    // 0x2d3c18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c1c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D3C24u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D3C1Cu, 0x2D3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C24u;
label_2d3c24:
    // 0x2d3c24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d3c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d3c2c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3C2Cu;
    {
        const bool branch_taken_0x2d3c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c2c) {
            ctx->pc = 0x2D3C64u;
            goto label_2d3c64;
        }
    }
    ctx->pc = 0x2D3C34u;
    // 0x2d3c34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3c38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3c40: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2d3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d3c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3c50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3c54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3c5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d3c64:
    // 0x2d3c64: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3c64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C74u;
}
