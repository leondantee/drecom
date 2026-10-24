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

// Function: entry_002f80b4
// Address: 0x2f80b4 - 0x2f815c
void entry_002f80b4_0x2f80b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f80b4_0x2f80b4");
#endif

    switch (ctx->pc) {
        case 0x2f80c4u: goto label_2f80c4;
        case 0x2f813cu: goto label_2f813c;
        default: break;
    }

    ctx->pc = 0x2f80b4u;

    // 0x2f80b4: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2f80b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2f80b8: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x2f80b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f80bc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F80BCu;
    SET_GPR_U32(ctx, 31, 0x2F80C4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F80BCu, 0x2F80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F80C4u;
label_2f80c4:
    // 0x2f80c4: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2f80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x2f80c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f80c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f80cc: 0x0  nop
    ctx->pc = 0x2f80ccu;
    // NOP
    // 0x2f80d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f80d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f80d4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f80d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f80d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f80d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f80dc: 0x0  nop
    ctx->pc = 0x2f80dcu;
    // NOP
    // 0x2f80e0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f80e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f80e4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f80e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f80e8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f80e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f80ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f80ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f80f0: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f80f4: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x2f80f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x2f80f8: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2f80f8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f80fc: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x2f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x2f8100: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f8100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8104: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f8108: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2f8108u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f810c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f810cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8110: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8114: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f8114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8118: 0x70604628  paddub      $t0, $v1, $zero
    ctx->pc = 0x2f8118u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f811c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f811cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8120: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8128: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f812c: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8130: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8130u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8134: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8134u;
    SET_GPR_U32(ctx, 31, 0x2F813Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8134u, 0x2F813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F813Cu;
label_2f813c:
    // 0x2f813c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8140: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8144: 0xa0e50100  sb          $a1, 0x100($a3)
    ctx->pc = 0x2f8144u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f8148: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f8148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f814c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8150: 0xa0680101  sb          $t0, 0x101($v1)
    ctx->pc = 0x2f8150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f8154: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x2F8154u;
    {
        const bool branch_taken_0x2f8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8154) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F815Cu;
}
