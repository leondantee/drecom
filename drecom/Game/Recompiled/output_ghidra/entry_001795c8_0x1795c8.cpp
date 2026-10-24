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

// Function: entry_001795c8
// Address: 0x1795c8 - 0x179658
void entry_001795c8_0x1795c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001795c8_0x1795c8");
#endif

    switch (ctx->pc) {
        case 0x1795d4u: goto label_1795d4;
        case 0x179608u: goto label_179608;
        case 0x179614u: goto label_179614;
        case 0x179624u: goto label_179624;
        case 0x179634u: goto label_179634;
        default: break;
    }

    ctx->pc = 0x1795c8u;

    // 0x1795c8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1795c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1795cc: 0xc05e990  jal         func_17A640
    ctx->pc = 0x1795CCu;
    SET_GPR_U32(ctx, 31, 0x1795D4u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x1795CCu, 0x1795D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795D4u;
label_1795d4:
    // 0x1795d4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1795d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1795d8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1795d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1795dc: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x1795dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1795e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1795e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1795e4: 0x135c3c  dsll32      $t3, $s3, 16
    ctx->pc = 0x1795e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1795e8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1795e8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1795ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1795f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1795f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1795f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1795f8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x1795f8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1795fc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1795fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179600: 0xc040330  jal         func_100CC0
    ctx->pc = 0x179600u;
    SET_GPR_U32(ctx, 31, 0x179608u);
    ctx->pc = 0x100CC0u;
    {
        ctx->pc = 0x179608u;
        ps2_stubs::sceGsSetDefLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179608u) { return; }
    ctx->pc = 0x179608u;
label_179608:
    // 0x179608: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17960c: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17960Cu;
    SET_GPR_U32(ctx, 31, 0x179614u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x179614u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179614u) { return; }
    ctx->pc = 0x179614u;
label_179614:
    // 0x179614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179618: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x179618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17961c: 0xc0403fa  jal         func_100FE8
    ctx->pc = 0x17961Cu;
    SET_GPR_U32(ctx, 31, 0x179624u);
    ctx->pc = 0x100FE8u;
    {
        ctx->pc = 0x179624u;
        ps2_stubs::sceGsExecLoadImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179624u) { return; }
    ctx->pc = 0x179624u;
label_179624:
    // 0x179624: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179628: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179628u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17962c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x17962Cu;
    SET_GPR_U32(ctx, 31, 0x179634u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179634u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179634u) { return; }
    ctx->pc = 0x179634u;
label_179634:
    // 0x179634: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x179634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x179638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17963c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x17963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x179640: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179644: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x179644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
    // 0x179648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17964c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179650: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x179650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x179654: 0x0  nop
    ctx->pc = 0x179654u;
    // NOP
    ctx->pc = 0x179658u;
}
