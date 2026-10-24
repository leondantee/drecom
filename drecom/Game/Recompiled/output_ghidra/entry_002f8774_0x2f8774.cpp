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

// Function: entry_002f8774
// Address: 0x2f8774 - 0x2f880c
void entry_002f8774_0x2f8774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8774_0x2f8774");
#endif

    switch (ctx->pc) {
        case 0x2f877cu: goto label_2f877c;
        case 0x2f87ecu: goto label_2f87ec;
        default: break;
    }

    ctx->pc = 0x2f8774u;

    // 0x2f8774: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8774u;
    SET_GPR_U32(ctx, 31, 0x2F877Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8774u, 0x2F877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f877cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8780: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8784: 0x0  nop
    ctx->pc = 0x2f8784u;
    // NOP
    // 0x2f8788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f878c: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8794: 0x0  nop
    ctx->pc = 0x2f8794u;
    // NOP
    // 0x2f8798: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8798u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f879c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f87a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f87a4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f87a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f87a8: 0x26080009  addiu       $t0, $s0, 0x9
    ctx->pc = 0x2f87a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f87ac: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f87acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f87b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f87b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f87b4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f87b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f87b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f87bc: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f87c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f87c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f87c8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f87c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f87cc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f87ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f87d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f87d4: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f87d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f87d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f87dc: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f87dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f87e0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f87e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f87e4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F87E4u;
    SET_GPR_U32(ctx, 31, 0x2F87ECu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F87E4u, 0x2F87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87ECu;
label_2f87ec:
    // 0x2f87ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f87ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f87f0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f87f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f87f4: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f87f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f87f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f87fc: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f87fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8800: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8800u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8804: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x2F8804u;
    {
        const bool branch_taken_0x2f8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8804) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F880Cu;
}
