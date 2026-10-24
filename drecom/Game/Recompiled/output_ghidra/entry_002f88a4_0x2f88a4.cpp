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

// Function: entry_002f88a4
// Address: 0x2f88a4 - 0x2f893c
void entry_002f88a4_0x2f88a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f88a4_0x2f88a4");
#endif

    switch (ctx->pc) {
        case 0x2f88acu: goto label_2f88ac;
        case 0x2f891cu: goto label_2f891c;
        default: break;
    }

    ctx->pc = 0x2f88a4u;

    // 0x2f88a4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F88A4u;
    SET_GPR_U32(ctx, 31, 0x2F88ACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F88A4u, 0x2F88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F88ACu;
label_2f88ac:
    // 0x2f88ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f88b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f88b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f88b4: 0x0  nop
    ctx->pc = 0x2f88b4u;
    // NOP
    // 0x2f88b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f88b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f88bc: 0x3c0a4234  lui         $t2, 0x4234
    ctx->pc = 0x2f88bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16948 << 16));
    // 0x2f88c0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f88c0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f88c4: 0x0  nop
    ctx->pc = 0x2f88c4u;
    // NOP
    // 0x2f88c8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f88c8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f88cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f88ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f88d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f88d4: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x2f88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f88d8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f88d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f88dc: 0x2608000e  addiu       $t0, $s0, 0xE
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2f88e0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f88e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f88e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f88e8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f88ec: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f88ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f88f0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f88f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f88f8: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f88f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f88fc: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f88fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8900: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8904: 0x24491af0  addiu       $t1, $v0, 0x1AF0
    ctx->pc = 0x2f8904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6896));
    // 0x2f8908: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f890c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f890cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8910: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8910u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8914: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8914u;
    SET_GPR_U32(ctx, 31, 0x2F891Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8914u, 0x2F891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F891Cu;
label_2f891c:
    // 0x2f891c: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x2f891cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8920: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8924: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f8924u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f8928: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f892c: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f892cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8930: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8930u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8934: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2F8934u;
    {
        const bool branch_taken_0x2f8934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8934) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F893Cu;
}
