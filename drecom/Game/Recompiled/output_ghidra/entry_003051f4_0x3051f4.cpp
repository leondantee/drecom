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

// Function: entry_003051f4
// Address: 0x3051f4 - 0x305278
void entry_003051f4_0x3051f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003051f4_0x3051f4");
#endif

    switch (ctx->pc) {
        case 0x305270u: goto label_305270;
        default: break;
    }

    ctx->pc = 0x3051f4u;

    // 0x3051f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3051f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3051f8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x3051f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x3051fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3051FCu;
    {
        const bool branch_taken_0x3051fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3051fc) {
            ctx->pc = 0x305278u;
            return;
        }
    }
    ctx->pc = 0x305204u;
    // 0x305204: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305208: 0x244295d0  addiu       $v0, $v0, -0x6A30
    ctx->pc = 0x305208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
    // 0x30520c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305210: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305210u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995D0u));
    // 0x305214: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305218: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30521c: 0x244295e0  addiu       $v0, $v0, -0x6A20
    ctx->pc = 0x30521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940128));
    // 0x305220: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x305220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305224: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305224u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995E0u));
    // 0x305228: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30522c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305230: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305234: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305238: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30523c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305240: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30524c: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x30524cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305254: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305258: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30525c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305260: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305264: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x305264u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305268: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305268u;
    SET_GPR_U32(ctx, 31, 0x305270u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305268u, 0x305270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305270u;
label_305270:
    // 0x305270: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305274: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305274u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x305278u;
}
