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

// Function: entry_002f83a8
// Address: 0x2f83a8 - 0x2f8448
void entry_002f83a8_0x2f83a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f83a8_0x2f83a8");
#endif

    switch (ctx->pc) {
        case 0x2f83b8u: goto label_2f83b8;
        case 0x2f8428u: goto label_2f8428;
        default: break;
    }

    ctx->pc = 0x2f83a8u;

    // 0x2f83a8: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x2f83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
    // 0x2f83ac: 0x4487a000  mtc1        $a3, $f20
    ctx->pc = 0x2f83acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f83b0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F83B0u;
    SET_GPR_U32(ctx, 31, 0x2F83B8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F83B0u, 0x2F83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83B8u;
label_2f83b8:
    // 0x2f83b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f83bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f83c0: 0x0  nop
    ctx->pc = 0x2f83c0u;
    // NOP
    // 0x2f83c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f83c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f83c8: 0x3c094234  lui         $t1, 0x4234
    ctx->pc = 0x2f83c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16948 << 16));
    // 0x2f83cc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2f83ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f83d0: 0x0  nop
    ctx->pc = 0x2f83d0u;
    // NOP
    // 0x2f83d4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f83d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f83d8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f83dc: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f83dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f83e0: 0x260a0009  addiu       $t2, $s0, 0x9
    ctx->pc = 0x2f83e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f83e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f83e8: 0x2608000a  addiu       $t0, $s0, 0xA
    ctx->pc = 0x2f83e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x2f83ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f83f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f83f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f83f4: 0x8d6400c4  lw          $a0, 0xC4($t3)
    ctx->pc = 0x2f83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
    // 0x2f83f8: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2f83f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f83fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8400: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8404: 0x8c4700c4  lw          $a3, 0xC4($v0)
    ctx->pc = 0x2f8404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f8408: 0x3c0c003b  lui         $t4, 0x3B
    ctx->pc = 0x2f8408u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)59 << 16));
    // 0x2f840c: 0x25891a80  addiu       $t1, $t4, 0x1A80
    ctx->pc = 0x2f840cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 6784));
    // 0x2f8410: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f8410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f8414: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8414u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x2f8418: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
    // 0x2f841c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f841cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8420: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8420u;
    SET_GPR_U32(ctx, 31, 0x2F8428u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8420u, 0x2F8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8428u;
label_2f8428:
    // 0x2f8428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f842c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8430: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8434: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8438: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f8438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f843c: 0xa0c30101  sb          $v1, 0x101($a2)
    ctx->pc = 0x2f843cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8440: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x2F8440u;
    {
        const bool branch_taken_0x2f8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8440) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8448u;
}
