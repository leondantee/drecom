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

// Function: entry_00366934
// Address: 0x366934 - 0x3669ac
void entry_00366934_0x366934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366934_0x366934");
#endif

    switch (ctx->pc) {
        case 0x366944u: goto label_366944;
        case 0x366950u: goto label_366950;
        case 0x366960u: goto label_366960;
        case 0x36696cu: goto label_36696c;
        default: break;
    }

    ctx->pc = 0x366934u;

    // 0x366934: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366938: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36693c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36693Cu;
    SET_GPR_U32(ctx, 31, 0x366944u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36693Cu, 0x366944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366944u;
label_366944:
    // 0x366944: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366948: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366948u;
    SET_GPR_U32(ctx, 31, 0x366950u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366948u, 0x366950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366950u;
label_366950:
    // 0x366950: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366958: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366958u;
    SET_GPR_U32(ctx, 31, 0x366960u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366958u, 0x366960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366960u;
label_366960:
    // 0x366960: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366964: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366964u;
    SET_GPR_U32(ctx, 31, 0x36696Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366964u, 0x36696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36696Cu;
label_36696c:
    // 0x36696c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366970: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366974: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x366974u;
    {
        const bool branch_taken_0x366974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366974) {
            ctx->pc = 0x3669ACu;
            return;
        }
    }
    ctx->pc = 0x36697Cu;
    // 0x36697c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366984: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36698c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366990: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366994: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366998: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36699c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3669a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3669a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3669a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3669a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3669a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3669a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3669acu;
}
