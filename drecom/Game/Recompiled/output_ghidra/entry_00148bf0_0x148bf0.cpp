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

// Function: entry_00148bf0
// Address: 0x148bf0 - 0x148c7c
void entry_00148bf0_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148bf0_0x148bf0");
#endif

    switch (ctx->pc) {
        case 0x148c14u: goto label_148c14;
        case 0x148c38u: goto label_148c38;
        case 0x148c44u: goto label_148c44;
        case 0x148c58u: goto label_148c58;
        case 0x148c64u: goto label_148c64;
        default: break;
    }

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bf4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148bf8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x148bfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x148bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x148c00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x148c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x148c04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148c0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x148C0Cu;
    SET_GPR_U32(ctx, 31, 0x148C14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148C0Cu, 0x148C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C14u;
label_148c14:
    // 0x148c14: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x148c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x148c18: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x148c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x148c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x148c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148c20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c28: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x148c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x148c2c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x148c30: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x148C30u;
    SET_GPR_U32(ctx, 31, 0x148C38u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x148C38u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x148C38u) { return; }
    ctx->pc = 0x148C38u;
label_148c38:
    // 0x148c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x148C3Cu;
    SET_GPR_U32(ctx, 31, 0x148C44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148C3Cu, 0x148C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C44u;
label_148c44:
    // 0x148c44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148c48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148c4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148c50: 0xc057480  jal         func_15D200
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148C50u, 0x148C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c5c: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x148C5Cu;
    SET_GPR_U32(ctx, 31, 0x148C64u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x148C5Cu, 0x148C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C64u;
label_148c64:
    // 0x148c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148C64u;
    {
        const bool branch_taken_0x148c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c64) {
            ctx->pc = 0x148C7Cu;
            return;
        }
    }
    ctx->pc = 0x148C6Cu;
    // 0x148c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148c78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x148c7cu;
}
