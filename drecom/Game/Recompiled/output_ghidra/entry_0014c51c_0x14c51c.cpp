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

// Function: entry_0014c51c
// Address: 0x14c51c - 0x14c580
void entry_0014c51c_0x14c51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c51c_0x14c51c");
#endif

    switch (ctx->pc) {
        case 0x14c52cu: goto label_14c52c;
        case 0x14c538u: goto label_14c538;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c558u: goto label_14c558;
        default: break;
    }

    ctx->pc = 0x14c51cu;

    // 0x14c51c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c520: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c524: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C524u;
    SET_GPR_U32(ctx, 31, 0x14C52Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C524u, 0x14C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C52Cu;
label_14c52c:
    // 0x14c52c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c530: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C530u;
    SET_GPR_U32(ctx, 31, 0x14C538u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C530u, 0x14C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C538u;
label_14c538:
    // 0x14c538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c53c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c540: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c544: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C544u;
    SET_GPR_U32(ctx, 31, 0x14C54Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C544u, 0x14C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C54Cu;
label_14c54c:
    // 0x14c54c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c550: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C550u;
    SET_GPR_U32(ctx, 31, 0x14C558u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C550u, 0x14C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C558u;
label_14c558:
    // 0x14c558: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c55c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c560: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C5E0u;
            return;
        }
    }
    ctx->pc = 0x14C568u;
    // 0x14c568: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c56c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14c570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c574: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c578: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C578u;
    {
        const bool branch_taken_0x14c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c578) {
            ctx->pc = 0x14C5E0u;
            return;
        }
    }
    ctx->pc = 0x14C580u;
}
