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

// Function: entry_002f880c
// Address: 0x2f880c - 0x2f88a4
void entry_002f880c_0x2f880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f880c_0x2f880c");
#endif

    switch (ctx->pc) {
        case 0x2f8814u: goto label_2f8814;
        case 0x2f8884u: goto label_2f8884;
        default: break;
    }

    ctx->pc = 0x2f880cu;

    // 0x2f880c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F880Cu;
    SET_GPR_U32(ctx, 31, 0x2F8814u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F880Cu, 0x2F8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8814u;
label_2f8814:
    // 0x2f8814: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f8814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f881c: 0x0  nop
    ctx->pc = 0x2f881cu;
    // NOP
    // 0x2f8820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8824: 0x3c0a4234  lui         $t2, 0x4234
    ctx->pc = 0x2f8824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8828: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2f8828u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f882c: 0x0  nop
    ctx->pc = 0x2f882cu;
    // NOP
    // 0x2f8830: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8830u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8834: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f883c: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x2f883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f8840: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8844: 0x2608000b  addiu       $t0, $s0, 0xB
    ctx->pc = 0x2f8844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f8848: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f8848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f884c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f884cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f8850: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8854: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8858: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2f8858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f885c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8860: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f8860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8864: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f8864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8868: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f886c: 0x24491a80  addiu       $t1, $v0, 0x1A80
    ctx->pc = 0x2f886cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8870: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8874: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f8874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f8878: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8878u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f887c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F887Cu;
    SET_GPR_U32(ctx, 31, 0x2F8884u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F887Cu, 0x2F8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8884u;
label_2f8884:
    // 0x2f8884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f8884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8888: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f888c: 0xa0e60100  sb          $a2, 0x100($a3)
    ctx->pc = 0x2f888cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 256), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f8890: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8894: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8898: 0xa1230101  sb          $v1, 0x101($t1)
    ctx->pc = 0x2f8898u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f889c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2F889Cu;
    {
        const bool branch_taken_0x2f889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f889c) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F88A4u;
}
