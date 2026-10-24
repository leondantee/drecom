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

// Function: entry_002ce63c
// Address: 0x2ce63c - 0x2ce6c8
void entry_002ce63c_0x2ce63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce63c_0x2ce63c");
#endif

    switch (ctx->pc) {
        case 0x2ce680u: goto label_2ce680;
        default: break;
    }

    ctx->pc = 0x2ce63cu;

    // 0x2ce63c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce640: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2ce640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce644: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce648: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x2ce648u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce64c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce650: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x2ce650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce654: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ce654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ce658: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ce658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ce65c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ce65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce660: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ce660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ce664: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x2ce664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x2ce668: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ce668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce66c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2ce66cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce670: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x2ce674: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2ce674u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce678: 0xc040c00  jal         func_103000
    ctx->pc = 0x2CE678u;
    SET_GPR_U32(ctx, 31, 0x2CE680u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2CE680u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE680u) { return; }
    ctx->pc = 0x2CE680u;
label_2ce680:
    // 0x2ce680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce684: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce688: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ce688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ce68c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce690: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ce690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce694: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ce694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ce698: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ce698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ce69c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ce69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ce6a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ce6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ce6a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce6a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ce6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ce6ac: 0x34440208  ori         $a0, $v0, 0x208
    ctx->pc = 0x2ce6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)520);
    // 0x2ce6b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ce6b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce6b4: 0x26060104  addiu       $a2, $s0, 0x104
    ctx->pc = 0x2ce6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x2ce6b8: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x2ce6b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce6bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2ce6bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ce6c0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CE6C0u;
    SET_GPR_U32(ctx, 31, 0x2CE6C8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CE6C0u, 0x2CE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6C8u;
}
