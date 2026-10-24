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

// Function: entry_002f897c
// Address: 0x2f897c - 0x2f8a18
void entry_002f897c_0x2f897c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f897c_0x2f897c");
#endif

    switch (ctx->pc) {
        case 0x2f8984u: goto label_2f8984;
        case 0x2f89f4u: goto label_2f89f4;
        default: break;
    }

    ctx->pc = 0x2f897cu;

    // 0x2f897c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F897Cu;
    SET_GPR_U32(ctx, 31, 0x2F8984u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F897Cu, 0x2F8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8984u;
label_2f8984:
    // 0x2f8984: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f898c: 0x0  nop
    ctx->pc = 0x2f898cu;
    // NOP
    // 0x2f8990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8994: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f8994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f8998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f899c: 0x0  nop
    ctx->pc = 0x2f899cu;
    // NOP
    // 0x2f89a0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f89a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f89a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f89a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f89ac: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2f89acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f89b0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f89b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2f89b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f89b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f89bc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f89bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f89c0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f89c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f89c8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f89cc: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f89ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f89d0: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f89d4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2f89d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f89d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f89dc: 0x24491ae0  addiu       $t1, $v0, 0x1AE0
    ctx->pc = 0x2f89dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
    // 0x2f89e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f89e4: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f89e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f89e8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f89e8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f89ec: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F89ECu;
    SET_GPR_U32(ctx, 31, 0x2F89F4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F89ECu, 0x2F89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F89F4u;
label_2f89f4:
    // 0x2f89f4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f89f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f89f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f89fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8a00: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f8a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8a04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8a0c: 0xa0650101  sb          $a1, 0x101($v1)
    ctx->pc = 0x2f8a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f8a10: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2F8A10u;
    {
        const bool branch_taken_0x2f8a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a10) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8A18u;
}
