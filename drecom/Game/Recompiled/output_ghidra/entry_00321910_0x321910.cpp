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

// Function: entry_00321910
// Address: 0x321910 - 0x321948
void entry_00321910_0x321910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321910_0x321910");
#endif

    switch (ctx->pc) {
        case 0x321940u: goto label_321940;
        default: break;
    }

    ctx->pc = 0x321910u;

    // 0x321910: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x321910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321914: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321918: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x321918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32191c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321920: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321924: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x321924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321928: 0x24a20480  addiu       $v0, $a1, 0x480
    ctx->pc = 0x321928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x32192c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32192cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x321930: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x321934: 0x24660480  addiu       $a2, $v1, 0x480
    ctx->pc = 0x321934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x321938: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x321938u;
    SET_GPR_U32(ctx, 31, 0x321940u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x321940u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321940u) { return; }
    ctx->pc = 0x321940u;
label_321940:
    // 0x321940: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x321944: 0x0  nop
    ctx->pc = 0x321944u;
    // NOP
    ctx->pc = 0x321948u;
}
