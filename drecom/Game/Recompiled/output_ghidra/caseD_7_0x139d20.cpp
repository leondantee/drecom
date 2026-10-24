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

// Function: caseD_7
// Address: 0x139d20 - 0x139dd4
void caseD_7_0x139d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x139d20");
#endif

    switch (ctx->pc) {
        case 0x139d30u: goto label_139d30;
        case 0x139d3cu: goto label_139d3c;
        case 0x139d50u: goto label_139d50;
        case 0x139d5cu: goto label_139d5c;
        default: break;
    }

    ctx->pc = 0x139d20u;

    // 0x139d20: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139d24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139d28: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x139D28u;
    SET_GPR_U32(ctx, 31, 0x139D30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x139D28u, 0x139D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D30u;
label_139d30:
    // 0x139d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d34: 0xc05cd10  jal         func_173440
    ctx->pc = 0x139D34u;
    SET_GPR_U32(ctx, 31, 0x139D3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x139D34u, 0x139D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D3Cu;
label_139d3c:
    // 0x139d3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139d40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139d48: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x139D48u;
    SET_GPR_U32(ctx, 31, 0x139D50u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139D48u, 0x139D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D50u;
label_139d50:
    // 0x139d50: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139d50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139d54: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x139D54u;
    SET_GPR_U32(ctx, 31, 0x139D5Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139D54u, 0x139D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D5Cu;
label_139d5c:
    // 0x139d5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d60: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139d64: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x139D64u;
    {
        const bool branch_taken_0x139d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d64) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139D6Cu;
    // 0x139d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x139d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x139d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x139d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x139d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139d88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x139d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x139d90: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x139d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139d98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x139d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x139d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139da0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x139da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x139da4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139da8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x139dac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x139db0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x139db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139db4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x139db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x139db8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x139dbc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x139dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x139dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139dc8: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x139dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x139dcc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x139DCCu;
    {
        const bool branch_taken_0x139dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139dcc) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139DD4u;
}
