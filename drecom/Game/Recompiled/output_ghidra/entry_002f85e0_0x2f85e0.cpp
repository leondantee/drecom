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

// Function: entry_002f85e0
// Address: 0x2f85e0 - 0x2f8688
void entry_002f85e0_0x2f85e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f85e0_0x2f85e0");
#endif

    switch (ctx->pc) {
        case 0x2f85e8u: goto label_2f85e8;
        case 0x2f8664u: goto label_2f8664;
        default: break;
    }

    ctx->pc = 0x2f85e0u;

    // 0x2f85e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F85E0u;
    SET_GPR_U32(ctx, 31, 0x2F85E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F85E0u, 0x2F85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F85E8u;
label_2f85e8:
    // 0x2f85e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f85ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f85ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f85f0: 0x0  nop
    ctx->pc = 0x2f85f0u;
    // NOP
    // 0x2f85f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f85f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f85f8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f85fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f85fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8600: 0x0  nop
    ctx->pc = 0x2f8600u;
    // NOP
    // 0x2f8604: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8604u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8608: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f860c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8610: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x2f8610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f8614: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f8614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8618: 0x2609000b  addiu       $t1, $s0, 0xB
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f861c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f8624: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f8624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8628: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f8628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f862c: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2f862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f8630: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2f8630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2f8634: 0x24c31a80  addiu       $v1, $a2, 0x1A80
    ctx->pc = 0x2f8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6784));
    // 0x2f8638: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x2f8638u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f863c: 0x8ce800c4  lw          $t0, 0xC4($a3)
    ctx->pc = 0x2f863cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f8640: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f8640u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f8644: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f8644u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f8648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f864c: 0x24491a80  addiu       $t1, $v0, 0x1A80
    ctx->pc = 0x2f864cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8650: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8654: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f8654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f8658: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8658u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f865c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F865Cu;
    SET_GPR_U32(ctx, 31, 0x2F8664u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F865Cu, 0x2F8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8664u;
label_2f8664:
    // 0x2f8664: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f8664u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8668: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f8668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f866c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8670: 0xa0670100  sb          $a3, 0x100($v1)
    ctx->pc = 0x2f8670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f8674: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2f8674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8678: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f867c: 0xa0690101  sb          $t1, 0x101($v1)
    ctx->pc = 0x2f867cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f8680: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2F8680u;
    {
        const bool branch_taken_0x2f8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8680) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8688u;
}
