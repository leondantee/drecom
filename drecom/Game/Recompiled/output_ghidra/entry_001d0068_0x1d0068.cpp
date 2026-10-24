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

// Function: entry_001d0068
// Address: 0x1d0068 - 0x1d00fc
void entry_001d0068_0x1d0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0068_0x1d0068");
#endif

    switch (ctx->pc) {
        case 0x1d0078u: goto label_1d0078;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d00a4u: goto label_1d00a4;
        default: break;
    }

    ctx->pc = 0x1d0068u;

    // 0x1d0068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d006c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d006cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0070: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1D0070u;
    SET_GPR_U32(ctx, 31, 0x1D0078u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1D0070u, 0x1D0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0078u;
label_1d0078:
    // 0x1d0078: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d007c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1D007Cu;
    SET_GPR_U32(ctx, 31, 0x1D0084u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1D007Cu, 0x1D0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0084u;
label_1d0084:
    // 0x1d0084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0088: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d008c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d008cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d0090: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1D0090u;
    SET_GPR_U32(ctx, 31, 0x1D0098u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1D0090u, 0x1D0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0098u;
label_1d0098:
    // 0x1d0098: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d009c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D009Cu;
    SET_GPR_U32(ctx, 31, 0x1D00A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D009Cu, 0x1D00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00A4u;
label_1d00a4:
    // 0x1d00a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d00a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d00ac: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D00ACu;
    {
        const bool branch_taken_0x1d00ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d00ac) {
            ctx->pc = 0x1D00FCu;
            return;
        }
    }
    ctx->pc = 0x1D00B4u;
    // 0x1d00b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00b8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1d00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d00c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d00c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d00c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1d00ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1d00d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1d00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00e0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1d00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d00e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1d00ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1d00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d00f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d00f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d00f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d00f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d00f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d00fcu;
}
