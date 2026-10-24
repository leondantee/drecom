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

// Function: entry_00331c50
// Address: 0x331c50 - 0x331cf8
void entry_00331c50_0x331c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331c50_0x331c50");
#endif

    switch (ctx->pc) {
        case 0x331c98u: goto label_331c98;
        default: break;
    }

    ctx->pc = 0x331c50u;

    // 0x331c50: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x331c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x331c54: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x331c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x331c58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x331c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x331c5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x331c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331c60: 0x1446fb2b  bne         $v0, $a2, . + 4 + (-0x4D5 << 2)
    ctx->pc = 0x331C60u;
    {
        const bool branch_taken_0x331c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x331c60) {
            ctx->pc = 0x330910u;
            return;
        }
    }
    ctx->pc = 0x331C68u;
    // 0x331c68: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x331c6c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x331c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x331c70: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x331c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x331c74: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x331c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x331c78: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x331c78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x331c7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x331c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x331c80: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x331c80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x331c84: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x331c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x331c88: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x331c88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x331c8c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331c8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x331c90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x331C90u;
    SET_GPR_U32(ctx, 31, 0x331C98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331C90u, 0x331C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C98u;
label_331c98:
    // 0x331c98: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x331c98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331c9c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x331c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x331ca0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x331ca0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331ca4: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x331ca4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x331ca8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x331ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x331cac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331cacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x331cb0: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x331cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x331cb4: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x331cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x331cb8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x331cbc: 0x2443a6a0  addiu       $v1, $v0, -0x5960
    ctx->pc = 0x331cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
    // 0x331cc0: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x331cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x331cc4: 0x826665b0  lb          $a2, 0x65B0($s3)
    ctx->pc = 0x331cc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
    // 0x331cc8: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x331cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x331ccc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x331cccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x331cd0: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x331cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x331cd4: 0x473023  subu        $a2, $v0, $a3
    ctx->pc = 0x331cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x331cd8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x331cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x331cdc: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x331cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x331ce0: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x331ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x331ce4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x331ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x331ce8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x331ce8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331cec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x331cecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x331cf0: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x331CF0u;
    {
        const bool branch_taken_0x331cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331cf0) {
            ctx->pc = 0x332288u;
            return;
        }
    }
    ctx->pc = 0x331CF8u;
}
