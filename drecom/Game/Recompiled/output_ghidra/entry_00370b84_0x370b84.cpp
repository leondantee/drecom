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

// Function: entry_00370b84
// Address: 0x370b84 - 0x370c60
void entry_00370b84_0x370b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370b84_0x370b84");
#endif

    switch (ctx->pc) {
        case 0x370b94u: goto label_370b94;
        case 0x370ba0u: goto label_370ba0;
        case 0x370bacu: goto label_370bac;
        case 0x370bb8u: goto label_370bb8;
        default: break;
    }

    ctx->pc = 0x370b84u;

    // 0x370b84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b8c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370B8Cu;
    SET_GPR_U32(ctx, 31, 0x370B94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370B8Cu, 0x370B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B94u;
label_370b94:
    // 0x370b94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b98: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370B98u;
    SET_GPR_U32(ctx, 31, 0x370BA0u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370B98u, 0x370BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BA0u;
label_370ba0:
    // 0x370ba0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ba4: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370BA4u;
    SET_GPR_U32(ctx, 31, 0x370BACu);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370BA4u, 0x370BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BACu;
label_370bac:
    // 0x370bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bb0: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370BB0u;
    SET_GPR_U32(ctx, 31, 0x370BB8u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370BB0u, 0x370BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BB8u;
label_370bb8:
    // 0x370bb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bbc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370bc0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x370BC0u;
    {
        const bool branch_taken_0x370bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370bc0) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x370BC8u;
    // 0x370bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bd8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370bdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370be4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370be8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370bec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370bf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370bfc: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c04: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x370C04u;
    {
        const bool branch_taken_0x370c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370c04) {
            ctx->pc = 0x370C60u;
            return;
        }
    }
    ctx->pc = 0x370C0Cu;
    // 0x370c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c18: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370c20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c28: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c38: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c48: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c58: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x370c60u;
}
