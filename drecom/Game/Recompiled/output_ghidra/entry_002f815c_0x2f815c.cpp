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

// Function: entry_002f815c
// Address: 0x2f815c - 0x2f8204
void entry_002f815c_0x2f815c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f815c_0x2f815c");
#endif

    switch (ctx->pc) {
        case 0x2f816cu: goto label_2f816c;
        case 0x2f81e4u: goto label_2f81e4;
        default: break;
    }

    ctx->pc = 0x2f815cu;

    // 0x2f815c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8160: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f8160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f8164: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8164u;
    SET_GPR_U32(ctx, 31, 0x2F816Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8164u, 0x2F816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F816Cu;
label_2f816c:
    // 0x2f816c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f816cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8170: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f8170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8174: 0x0  nop
    ctx->pc = 0x2f8174u;
    // NOP
    // 0x2f8178: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f817c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8184: 0x0  nop
    ctx->pc = 0x2f8184u;
    // NOP
    // 0x2f8188: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8188u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f818c: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f818cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8190: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f8190u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8194: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8198: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f819c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f81a0: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f81a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f81a4: 0x26030009  addiu       $v1, $s0, 0x9
    ctx->pc = 0x2f81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f81a8: 0x8cea00c4  lw          $t2, 0xC4($a3)
    ctx->pc = 0x2f81a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f81ac: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2f81acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f81b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f81b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f81b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f81b8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f81b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f81bc: 0x8d2700c4  lw          $a3, 0xC4($t1)
    ctx->pc = 0x2f81bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x2f81c0: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f81c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f81c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f81c8: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f81c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f81cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f81ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f81d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f81d4: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f81d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f81d8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f81d8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f81dc: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F81DCu;
    SET_GPR_U32(ctx, 31, 0x2F81E4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F81DCu, 0x2F81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F81E4u;
label_2f81e4:
    // 0x2f81e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f81e8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f81ec: 0xa0e50100  sb          $a1, 0x100($a3)
    ctx->pc = 0x2f81ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f81f0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f81f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f81f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f81f8: 0xa0680101  sb          $t0, 0x101($v1)
    ctx->pc = 0x2f81f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f81fc: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x2F81FCu;
    {
        const bool branch_taken_0x2f81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f81fc) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8204u;
}
