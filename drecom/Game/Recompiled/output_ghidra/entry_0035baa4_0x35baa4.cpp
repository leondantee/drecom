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

// Function: entry_0035baa4
// Address: 0x35baa4 - 0x35bb28
void entry_0035baa4_0x35baa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035baa4_0x35baa4");
#endif

    switch (ctx->pc) {
        case 0x35baecu: goto label_35baec;
        case 0x35bb04u: goto label_35bb04;
        case 0x35bb10u: goto label_35bb10;
        case 0x35bb24u: goto label_35bb24;
        default: break;
    }

    ctx->pc = 0x35baa4u;

    // 0x35baa4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35baa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35baac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35baacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35bab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bab8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35babc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35bac0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35bac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35bac4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35bac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35bac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35bacc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bad0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35bad4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bad8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35badc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bae0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35bae4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35BAE4u;
    SET_GPR_U32(ctx, 31, 0x35BAECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35BAECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35BAECu) { return; }
    ctx->pc = 0x35BAECu;
label_35baec:
    // 0x35baec: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35baf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35baf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35baf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35baf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35baf8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35baf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bafc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35BAFCu;
    SET_GPR_U32(ctx, 31, 0x35BB04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35BAFCu, 0x35BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB04u;
label_35bb04:
    // 0x35bb04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35bb04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35bb08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35BB08u;
    SET_GPR_U32(ctx, 31, 0x35BB10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35BB08u, 0x35BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB10u;
label_35bb10:
    // 0x35bb10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35bb10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bb14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb18: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35bb1c: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35BB1Cu;
    SET_GPR_U32(ctx, 31, 0x35BB24u);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35BB1Cu, 0x35BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB24u;
label_35bb24:
    // 0x35bb24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x35bb28u;
}
