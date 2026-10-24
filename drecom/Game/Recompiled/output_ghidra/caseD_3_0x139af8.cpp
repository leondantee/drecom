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
// Address: 0x139af8 - 0x139b90
void caseD_3_0x139af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x139af8");
#endif

    switch (ctx->pc) {
        case 0x139b08u: goto label_139b08;
        case 0x139b14u: goto label_139b14;
        case 0x139b28u: goto label_139b28;
        case 0x139b34u: goto label_139b34;
        default: break;
    }

    ctx->pc = 0x139af8u;

    // 0x139af8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139b00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139B00u;
    SET_GPR_U32(ctx, 31, 0x139B08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139B00u, 0x139B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B08u;
label_139b08:
    // 0x139b08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x139B0Cu;
    SET_GPR_U32(ctx, 31, 0x139B14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139B0Cu, 0x139B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B14u;
label_139b14:
    // 0x139b14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139b18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b20: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x139B20u;
    SET_GPR_U32(ctx, 31, 0x139B28u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139B20u, 0x139B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B28u;
label_139b28:
    // 0x139b28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139b28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139b2c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x139B2Cu;
    SET_GPR_U32(ctx, 31, 0x139B34u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139B2Cu, 0x139B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B34u;
label_139b34:
    // 0x139b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139b3c: 0x106000a5  beqz        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x139B3Cu;
    {
        const bool branch_taken_0x139b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b3c) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139B44u;
    // 0x139b44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b48: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x139b4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x139b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x139b50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x139b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x139b54: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x139B54u;
    {
        const bool branch_taken_0x139b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139b54) {
            ctx->pc = 0x139B90u;
            return;
        }
    }
    ctx->pc = 0x139B5Cu;
    // 0x139b5c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x139b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x139b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x139b68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b6c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x139b70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139b78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b7c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x139b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x139b88: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x139B88u;
    {
        const bool branch_taken_0x139b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b88) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139B90u;
}
