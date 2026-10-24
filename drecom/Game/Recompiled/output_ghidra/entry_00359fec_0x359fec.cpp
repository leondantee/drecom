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

// Function: entry_00359fec
// Address: 0x359fec - 0x35a070
void entry_00359fec_0x359fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359fec_0x359fec");
#endif

    switch (ctx->pc) {
        case 0x35a034u: goto label_35a034;
        case 0x35a04cu: goto label_35a04c;
        case 0x35a058u: goto label_35a058;
        case 0x35a06cu: goto label_35a06c;
        default: break;
    }

    ctx->pc = 0x359fecu;

    // 0x359fec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ff0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x359ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x359ff4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x359ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x359ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x359ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x359ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a000: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35a000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a004: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35a008: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35a008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a00c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35a010: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35a010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a014: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a018: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35a018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35a01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a020: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a024: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a028: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a02c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35A02Cu;
    SET_GPR_U32(ctx, 31, 0x35A034u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35A034u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35A034u) { return; }
    ctx->pc = 0x35A034u;
label_35a034:
    // 0x35a034: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a03c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A044u;
    SET_GPR_U32(ctx, 31, 0x35A04Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A044u, 0x35A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A04Cu;
label_35a04c:
    // 0x35a04c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A050u;
    SET_GPR_U32(ctx, 31, 0x35A058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A050u, 0x35A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A058u;
label_35a058:
    // 0x35a058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35a058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a05c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a060: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35a060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a064: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35A064u;
    SET_GPR_U32(ctx, 31, 0x35A06Cu);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35A064u, 0x35A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A06Cu;
label_35a06c:
    // 0x35a06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x35a070u;
}
