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

// Function: entry_002f7f0c
// Address: 0x2f7f0c - 0x2f7fac
void entry_002f7f0c_0x2f7f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7f0c_0x2f7f0c");
#endif

    switch (ctx->pc) {
        case 0x2f7f14u: goto label_2f7f14;
        case 0x2f7f8cu: goto label_2f7f8c;
        default: break;
    }

    ctx->pc = 0x2f7f0cu;

    // 0x2f7f0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7F0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7F14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7F0Cu, 0x2F7F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F14u;
label_2f7f14:
    // 0x2f7f14: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7f1c: 0x0  nop
    ctx->pc = 0x2f7f1cu;
    // NOP
    // 0x2f7f20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7f20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7f24: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f7f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7f2c: 0x0  nop
    ctx->pc = 0x2f7f2cu;
    // NOP
    // 0x2f7f30: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7f30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7f34: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7f38: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7f38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7f3c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7f40: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f7f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7f44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7f48: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2f7f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7f4c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f7f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f7f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7f54: 0x8cc900c4  lw          $t1, 0xC4($a2)
    ctx->pc = 0x2f7f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x2f7f58: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2f7f58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f7f60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f7f60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7f64: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2f7f64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x2f7f68: 0x25461a80  addiu       $a2, $t2, 0x1A80
    ctx->pc = 0x2f7f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 6784));
    // 0x2f7f6c: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f7f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7f70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f7f74: 0x24691a80  addiu       $t1, $v1, 0x1A80
    ctx->pc = 0x2f7f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f7f78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f7f7c: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f7f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f7f80: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7f80u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7f84: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7F84u;
    SET_GPR_U32(ctx, 31, 0x2F7F8Cu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7F84u, 0x2F7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F8Cu;
label_2f7f8c:
    // 0x2f7f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7f90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2f7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7f94: 0xa0a40100  sb          $a0, 0x100($a1)
    ctx->pc = 0x2f7f94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7f98: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f7f9c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2f7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f7fa0: 0xa1030101  sb          $v1, 0x101($t0)
    ctx->pc = 0x2f7fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7fa4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x2F7FA4u;
    {
        const bool branch_taken_0x2f7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7fa4) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F7FACu;
}
