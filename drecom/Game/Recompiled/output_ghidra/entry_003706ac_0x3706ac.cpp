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

// Function: entry_003706ac
// Address: 0x3706ac - 0x370788
void entry_003706ac_0x3706ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003706ac_0x3706ac");
#endif

    switch (ctx->pc) {
        case 0x3706bcu: goto label_3706bc;
        case 0x3706c8u: goto label_3706c8;
        case 0x3706d4u: goto label_3706d4;
        case 0x3706e0u: goto label_3706e0;
        default: break;
    }

    ctx->pc = 0x3706acu;

    // 0x3706ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3706b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3706b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3706B4u;
    SET_GPR_U32(ctx, 31, 0x3706BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3706B4u, 0x3706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706BCu;
label_3706bc:
    // 0x3706bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706c0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3706C0u;
    SET_GPR_U32(ctx, 31, 0x3706C8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3706C0u, 0x3706C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706C8u;
label_3706c8:
    // 0x3706c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706cc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3706CCu;
    SET_GPR_U32(ctx, 31, 0x3706D4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3706CCu, 0x3706D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706D4u;
label_3706d4:
    // 0x3706d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3706D8u;
    SET_GPR_U32(ctx, 31, 0x3706E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3706D8u, 0x3706E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706E0u;
label_3706e0:
    // 0x3706e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3706e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3706e8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3706E8u;
    {
        const bool branch_taken_0x3706e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3706e8) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x3706F0u;
    // 0x3706f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3706f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3706f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3706fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370700: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370704: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370708: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37070c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370710: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370718: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37071c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370720: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370724: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37072c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37072Cu;
    {
        const bool branch_taken_0x37072c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37072c) {
            ctx->pc = 0x370788u;
            return;
        }
    }
    ctx->pc = 0x370734u;
    // 0x370734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370738: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37073c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370740: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37074c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370750: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370754: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370758: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37075c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370760: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370764: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370768: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37076c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370770: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370774: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37077c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370780: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370784: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x370788u;
}
