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

// Function: entry_00327b68
// Address: 0x327b68 - 0x327bf8
void entry_00327b68_0x327b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327b68_0x327b68");
#endif

    switch (ctx->pc) {
        case 0x327ba8u: goto label_327ba8;
        case 0x327becu: goto label_327bec;
        default: break;
    }

    ctx->pc = 0x327b68u;

    // 0x327b68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b6c: 0x90620346  lbu         $v0, 0x346($v1)
    ctx->pc = 0x327b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327b74: 0xa0620346  sb          $v0, 0x346($v1)
    ctx->pc = 0x327b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 2));
    // 0x327b78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b7c: 0x90620345  lbu         $v0, 0x345($v1)
    ctx->pc = 0x327b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x327b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x327b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x327b84: 0xa0620345  sb          $v0, 0x345($v1)
    ctx->pc = 0x327b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 2));
    // 0x327b88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x327b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327b94: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x327b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x327b98: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x327b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x327b9c: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x327b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x327ba0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327BA0u;
    SET_GPR_U32(ctx, 31, 0x327BA8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327BA0u, 0x327BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BA8u;
label_327ba8:
    // 0x327ba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bac: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327bb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327bb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bbc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x327bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327bc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bc4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bc8: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327bcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327bd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x327bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x327bd4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x327bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327bd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327bdc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327be0: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x327be4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x327BE4u;
    SET_GPR_U32(ctx, 31, 0x327BECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x327BE4u, 0x327BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BECu;
label_327bec:
    // 0x327bec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327becu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327bf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x327BF0u;
    {
        const bool branch_taken_0x327bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327bf0) {
            ctx->pc = 0x327C30u;
            return;
        }
    }
    ctx->pc = 0x327BF8u;
}
