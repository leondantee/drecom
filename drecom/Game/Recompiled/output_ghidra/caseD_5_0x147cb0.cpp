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

// Function: caseD_5
// Address: 0x147cb0 - 0x147d64
void caseD_5_0x147cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x147cb0");
#endif

    switch (ctx->pc) {
        case 0x147cc0u: goto label_147cc0;
        case 0x147cccu: goto label_147ccc;
        case 0x147ce0u: goto label_147ce0;
        case 0x147cecu: goto label_147cec;
        case 0x147cfcu: goto label_147cfc;
        case 0x147d14u: goto label_147d14;
        default: break;
    }

    ctx->pc = 0x147cb0u;

    // 0x147cb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147cb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147cb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147cb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147CB8u;
    SET_GPR_U32(ctx, 31, 0x147CC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147CB8u, 0x147CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC0u;
label_147cc0:
    // 0x147cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147cc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x147CC4u;
    SET_GPR_U32(ctx, 31, 0x147CCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147CC4u, 0x147CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CCCu;
label_147ccc:
    // 0x147ccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147cd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147cd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147cd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147cd8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x147CD8u;
    SET_GPR_U32(ctx, 31, 0x147CE0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147CD8u, 0x147CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CE0u;
label_147ce0:
    // 0x147ce0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147ce0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147ce4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147CE4u;
    SET_GPR_U32(ctx, 31, 0x147CECu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147CE4u, 0x147CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CECu;
label_147cec:
    // 0x147cec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147cf0: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x147cf4: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x147CF4u;
    SET_GPR_U32(ctx, 31, 0x147CFCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x147CF4u, 0x147CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CFCu;
label_147cfc:
    // 0x147cfc: 0x144000f9  bnez        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x147CFCu;
    {
        const bool branch_taken_0x147cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147cfc) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147D04u;
    // 0x147d04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d08: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x147d0c: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x147D0Cu;
    SET_GPR_U32(ctx, 31, 0x147D14u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x147D0Cu, 0x147D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D14u;
label_147d14:
    // 0x147d14: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x147D14u;
    {
        const bool branch_taken_0x147d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147d14) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147D1Cu;
    // 0x147d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d20: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x147d24: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x147D24u;
    {
        const bool branch_taken_0x147d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d24) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147D2Cu;
    // 0x147d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x147d38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x147d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147d3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x147d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x147d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147d4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x147d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x147d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147d58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x147d58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x147d5c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x147D5Cu;
    {
        const bool branch_taken_0x147d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d5c) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147D64u;
}
