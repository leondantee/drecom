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

// Function: entry_001cd600
// Address: 0x1cd600 - 0x1cd648
void entry_001cd600_0x1cd600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd600_0x1cd600");
#endif

    switch (ctx->pc) {
        case 0x1cd62cu: goto label_1cd62c;
        default: break;
    }

    ctx->pc = 0x1cd600u;

    // 0x1cd600: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd604: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1cd608: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CD608u;
    {
        const bool branch_taken_0x1cd608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd608) {
            ctx->pc = 0x1CD648u;
            return;
        }
    }
    ctx->pc = 0x1CD610u;
    // 0x1cd610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd618: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cd618u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cd61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd624: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CD624u;
    SET_GPR_U32(ctx, 31, 0x1CD62Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CD624u, 0x1CD62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD62Cu;
label_1cd62c:
    // 0x1cd62c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cd62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd630: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cd630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd634: 0x84a21278  lh          $v0, 0x1278($a1)
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cd638: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd63c: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cd63cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cd640: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CD640u;
    {
        const bool branch_taken_0x1cd640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd640) {
            ctx->pc = 0x1CD824u;
            return;
        }
    }
    ctx->pc = 0x1CD648u;
}
