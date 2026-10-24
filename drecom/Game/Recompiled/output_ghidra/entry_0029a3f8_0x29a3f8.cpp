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

// Function: entry_0029a3f8
// Address: 0x29a3f8 - 0x29a454
void entry_0029a3f8_0x29a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a3f8_0x29a3f8");
#endif

    switch (ctx->pc) {
        case 0x29a42cu: goto label_29a42c;
        case 0x29a448u: goto label_29a448;
        default: break;
    }

    ctx->pc = 0x29a3f8u;

    // 0x29a3f8: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x29a3f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x29a3fc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x29a400: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x29a400u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29a404: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a408: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x29a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29a40c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A40Cu;
    {
        const bool branch_taken_0x29a40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a40c) {
            ctx->pc = 0x29A454u;
            return;
        }
    }
    ctx->pc = 0x29A414u;
    // 0x29a414: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a41c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x29a41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x29a420: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a424: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A424u;
    SET_GPR_U32(ctx, 31, 0x29A42Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A42Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A42Cu) { return; }
    ctx->pc = 0x29A42Cu;
label_29a42c:
    // 0x29a42c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29a42cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a430: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a434: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a438: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a43c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29a43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a440: 0xc040c80  jal         func_103200
    ctx->pc = 0x29A440u;
    SET_GPR_U32(ctx, 31, 0x29A448u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x29A448u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A448u) { return; }
    ctx->pc = 0x29A448u;
label_29a448:
    // 0x29a448: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a44c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A44Cu;
    {
        const bool branch_taken_0x29a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a44c) {
            ctx->pc = 0x29A478u;
            return;
        }
    }
    ctx->pc = 0x29A454u;
}
