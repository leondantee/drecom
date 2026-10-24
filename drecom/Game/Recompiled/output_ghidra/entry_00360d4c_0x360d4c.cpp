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

// Function: entry_00360d4c
// Address: 0x360d4c - 0x360de0
void entry_00360d4c_0x360d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360d4c_0x360d4c");
#endif

    switch (ctx->pc) {
        case 0x360d94u: goto label_360d94;
        case 0x360dbcu: goto label_360dbc;
        case 0x360dc8u: goto label_360dc8;
        case 0x360ddcu: goto label_360ddc;
        default: break;
    }

    ctx->pc = 0x360d4cu;

    // 0x360d4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x360d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360d54: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x360d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x360d58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x360d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360d60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x360d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x360d64: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x360d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x360d68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x360d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360d6c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x360d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x360d70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x360d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360d74: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x360d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x360d78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x360d7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x360d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d84: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360d88: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x360d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x360d8c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x360D8Cu;
    SET_GPR_U32(ctx, 31, 0x360D94u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x360D94u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x360D94u) { return; }
    ctx->pc = 0x360D94u;
label_360d94:
    // 0x360d94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x360d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x360d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360d9c: 0x0  nop
    ctx->pc = 0x360d9cu;
    // NOP
    // 0x360da0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x360da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x360da4: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x360da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x360da8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360dac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x360dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360db0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x360db0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360db4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x360DB4u;
    SET_GPR_U32(ctx, 31, 0x360DBCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x360DB4u, 0x360DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DBCu;
label_360dbc:
    // 0x360dbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x360dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x360dc0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x360DC0u;
    SET_GPR_U32(ctx, 31, 0x360DC8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x360DC0u, 0x360DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DC8u;
label_360dc8:
    // 0x360dc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x360dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360dcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x360dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360dd0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x360dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360dd4: 0xc0d8840  jal         func_362100
    ctx->pc = 0x360DD4u;
    SET_GPR_U32(ctx, 31, 0x360DDCu);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x360DD4u, 0x360DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DDCu;
label_360ddc:
    // 0x360ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x360ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x360de0u;
}
